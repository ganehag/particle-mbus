#include "MBusDataRecord.h"
#include "MBus.h"
#include <stdint.h>
#include <string.h>
#include <time.h>

MBusDataRecordHeader::MBusDataRecordHeader() {
  dib = new MBusDataInformationBlock();
  vib = new MBusValueInformationBlock();
};

MBusDataRecordHeader::~MBusDataRecordHeader() {
  if (this->dib) {
    delete this->dib;
  }
  if (this->vib) {
    delete this->vib;
  }
};

MBusDataRecord::MBusDataRecord() {
  this->drh = new MBusDataRecordHeader();
  memset(this->data, 0, sizeof(this->data));
  this->data_len = 0;
  this->timestamp = 0;
  this->next = NULL;
};

MBusDataRecord::~MBusDataRecord() {
  if (this->next != NULL) {
    delete this->next;
  }

  if (this->drh) {
    delete this->drh;
  }
};

int MBusDataRecord::decodeInt(size_t int_data_size, int *value) {
  size_t i;
  int neg;
  *value = 0;

  if (!this->data || (int_data_size < 1)) {
    return -1;
  }

  neg = this->data[int_data_size - 1] & 0x80;

  for (i = int_data_size; i > 0; i--) {
    if (neg) {
      *value = (*value << 8) + (this->data[i - 1] ^ 0xFF);
    } else {
      *value = (*value << 8) + this->data[i - 1];
    }
  }

  if (neg) {
    *value = *value * -1 - 1;
  }

  return 0;
};

int MBusDataRecord::decodeLong(size_t int_data_size, long *value) {
  size_t i;
  int neg;
  *value = 0;

  if (!this->data || (int_data_size < 1)) {
    return -1;
  }

  neg = this->data[int_data_size - 1] & 0x80;

  for (i = int_data_size; i > 0; i--) {
    if (neg) {
      *value = (*value << 8) + (this->data[i - 1] ^ 0xFF);
    } else {
      *value = (*value << 8) + this->data[i - 1];
    }
  }

  if (neg) {
    *value = *value * -1 - 1;
  }

  return 0;
};

int MBusDataRecord::decodeLongLong(size_t int_data_size, long long *value) {
  size_t i;
  int neg;
  *value = 0;

  if (!this->data || (int_data_size < 1)) {
    return -1;
  }

  neg = this->data[int_data_size - 1] & 0x80;

  for (i = int_data_size; i > 0; i--) {
    if (neg) {
      *value = (*value << 8) + (this->data[i - 1] ^ 0xFF);
    } else {
      *value = (*value << 8) + this->data[i - 1];
    }
  }

  if (neg) {
    *value = *value * -1 - 1;
  }

  return 0;
};

//------------------------------------------------------------------------------
///
/// Decode float data
///
/// see also http://en.wikipedia.org/wiki/Single-precision_floating-point_format
///
//------------------------------------------------------------------------------
float MBusDataRecord::decodeFloat() {
#ifdef _HAS_NON_IEEE754_FLOAT
  float val = 0.0f;
  long temp = 0, fraction;
  int sign, exponent;
  size_t i;

  if (this->data) {
    for (i = 4; i > 0; i--) {
      temp = (temp << 8) + this->data[i - 1];
    }

    // first bit = sign bit
    sign = (temp >> 31) ? -1 : 1;

    // decode 8 bit exponent
    exponent = ((temp & 0x7F800000) >> 23) - 127;

    // decode explicit 23 bit fraction
    fraction = temp & 0x007FFFFF;

    if ((exponent != -127) && (exponent != 128)) {
      // normalized value, add bit 24
      fraction |= 0x800000;
    }

    // calculate float value
    val = (float)sign * fraction * pow(2.0f, -23.0f + exponent);

    return val;
  }
#else
  if (this->data) {
    union {
      uint32_t u32;
      float f;
    } data;
    memcpy(&(data.u32), this->data, sizeof(uint32_t));
    return data.f;
  }
#endif

  return -1.0f;
};

long long MBusDataRecord::decodeBCD(size_t bcd_data_size) {
  long long val = 0;
  size_t i;

  if (this->data) {
    for (i = bcd_data_size; i > 0; i--) {
      val = (val * 10) + ((this->data[i - 1] >> 4) & 0xF);
      val = (val * 10) + (this->data[i - 1] & 0xF);
    }

    return val;
  }

  return -1;
};

void MBusDataRecord::decodeStr(unsigned char *dst, const unsigned char *src,
                               size_t len) {
  size_t i;

  i = 0;

  if (src && dst) {
    dst[len] = '\0';
    while (len > 0) {
      dst[i++] = src[--len];
    }
  }
};

void MBusDataRecord::decodeBin(unsigned char *dst, const unsigned char *src,
                               size_t len, size_t max_len) {
  size_t i, pos;

  i = 0;
  pos = 0;

  if (src && dst) {
    while ((i < len) && ((pos + 3) < max_len)) {
      pos += snprintf((char *)&dst[pos], max_len - pos, "%.2X ", src[i]);
      i++;
    }

    if (pos > 0) {
      // remove last space
      pos--;
    }

    dst[pos] = '\0';
  }
};

void MBusDataRecord::decodeTM(struct tm *t, size_t t_data_size) {
  if (t == NULL) {
    return;
  }

  t->tm_sec = 0;
  t->tm_min = 0;
  t->tm_hour = 0;
  t->tm_mday = 0;
  t->tm_mon = 0;
  t->tm_year = 0;
  t->tm_wday = 0;
  t->tm_yday = 0;
  t->tm_isdst = 0;

  if (this->data) {
    if (t_data_size == 6) // Type I = Compound CP48: Date and Time
    {
      if ((this->data[1] & 0x80) == 0) // Time valid ?
      {
        t->tm_sec = this->data[0] & 0x3F;
        t->tm_min = this->data[1] & 0x3F;
        t->tm_hour = this->data[2] & 0x1F;
        t->tm_mday = this->data[3] & 0x1F;
        t->tm_mon = (this->data[4] & 0x0F) - 1;
        t->tm_year = 100 + (((this->data[3] & 0xE0) >> 5) |
                            ((this->data[4] & 0xF0) >> 1));
        t->tm_isdst = (this->data[0] & 0x40) ? 1 : 0; // day saving time
      }
    } else if (t_data_size == 4) // Type F = Compound CP32: Date and Time
    {
      if ((this->data[0] & 0x80) == 0) // Time valid ?
      {
        t->tm_min = this->data[0] & 0x3F;
        t->tm_hour = this->data[1] & 0x1F;
        t->tm_mday = this->data[2] & 0x1F;
        t->tm_mon = (this->data[3] & 0x0F) - 1;
        t->tm_year = 100 + (((this->data[2] & 0xE0) >> 5) |
                            ((this->data[3] & 0xF0) >> 1));
        t->tm_isdst = (this->data[1] & 0x80) ? 1 : 0; // day saving time
      }
    } else if (t_data_size == 2) // Type G: Compound CP16: Date
    {

      t->tm_mday = this->data[0] & 0x1F;
      t->tm_mon = (this->data[1] & 0x0F) - 1;
      t->tm_year =
          100 + (((this->data[0] & 0xE0) >> 5) | ((this->data[1] & 0xF0) >> 1));
    }
  }
};

MBusRecord *MBusDataRecord::getRecord() {
  MBusRecord *record = NULL;
  double value_out_real = 0.0; /**< raw value */
  char *value_out_str = NULL;
  int value_out_str_size = 0;
  double real_val = 0.0; /**< normalized value */

  record = new MBusRecord();

  record->storage_number = this->getStorageNumber();
  record->tariff = this->getTariff();
  record->device = this->getDevice();

  if ((this->drh->dib->dif == MBUS_DIB_DIF_MANUFACTURER_SPECIFIC) ||
      (this->drh->dib->dif ==
       MBUS_DIB_DIF_MORE_RECORDS_FOLLOW)) /* MBUS_DIB_DIF_VENDOR_SPECIFIC */
  {
    if (this->drh->dib->dif == MBUS_DIB_DIF_MORE_RECORDS_FOLLOW) {
      record->function_medium = FUNC_MORE_RECORDS_FOLLOW;
    } else {
      record->function_medium = FUNC_MANUFACTURER_SPECIFIC;
    }

    if (record->function_medium == NULL) {
      MBUS_ERROR("%s: memory allocation error\n", __PRETTY_FUNCTION__);
      delete record;
      return NULL;
    }

    /* parsing of data not implemented yet
       manufacturer specific data structures to end of user data */

    if (this->decodeValue(&value_out_real, &value_out_str,
                          &value_out_str_size) != 0) {
      MBUS_ERROR("%s: problem with mbus_variable_value_decode\n",
                 __PRETTY_FUNCTION__);
      delete record;
      return NULL;
    }

    if (value_out_str != NULL) {
      record->isNumeric = false;
      (record->value)->str_val.set(value_out_str, value_out_str_size);
    } else {
      record->isNumeric = true;
      (record->value)->real_val = real_val;
    }
  } else {
    // FIXME
    record->function_medium = (char *)this->getFunction();

    if (record->function_medium == NULL) {
      MBUS_ERROR("%s: memory allocation error\n", __PRETTY_FUNCTION__);
      delete record;
      return NULL;
    }

    if (this->decodeValue(&value_out_real, &value_out_str,
                          &value_out_str_size) != 0) {
      MBUS_ERROR("%s: problem with mbus_variable_value_decode\n",
                 __PRETTY_FUNCTION__);
      delete record;
      return NULL;
    }

    if (this->drh->vib->normalize(value_out_real, &(record->unit), &real_val,
                                  &(record->quantity)) != 0) {
      MBUS_ERROR("%s: problem with mbus_vib_unit_normalize\n",
                 __PRETTY_FUNCTION__);
      delete record;
      return NULL;
    }

    if (value_out_str != NULL) {
      record->isNumeric = false;
      (record->value)->str_val.set(value_out_str, value_out_str_size);
    } else {
      record->isNumeric = true;
      (record->value)->real_val = real_val;
    }
  }

  return record;
};

long MBusDataRecord::getStorageNumber() {
  int bit_index = 0;
  long result = 0;

  result |= (this->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_STORAGE_NO) >> 6;
  bit_index++;

  for (unsigned int i = 0; i < this->drh->dib->ndife; i++) {
    result |= (this->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_STORAGE_NO)
              << bit_index;
    bit_index += 4;
  }

  return result;
};

long MBusDataRecord::getTariff() {
  int bit_index = 0;
  long result = 0;

  if (this->drh->dib->ndife > 0) {
    for (unsigned int i = 0; i < this->drh->dib->ndife; i++) {
      result |=
          ((this->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_TARIFF) >> 4)
          << bit_index;
      bit_index += 2;
    }

    return result;
  }

  return -1;
};

int MBusDataRecord::getDevice() {
  int bit_index = 0;
  int result = 0;

  if (this->drh->dib->ndife > 0) {
    for (unsigned int i = 0; i < this->drh->dib->ndife; i++) {
      result |=
          ((this->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_DEVICE) >> 6)
          << bit_index;
      bit_index++;
    }

    return result;
  }

  return -1;
};

const char *MBusDataRecord::getFunction() {
  const char *ret;

  switch (this->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_FUNCTION) {
  case 0x00:
    ret = FUNC_INSTANTANEOUS_VALUE;
    break;

  case 0x10:
    ret = FUNC_MAXIMUM_VALUE;
    break;

  case 0x20:
    ret = FUNC_MINIMUM_VALUE;
    break;

  case 0x30:
    ret = FUNC_VALUE_DUR_ERROR_STATE;
    break;

  default:
    ret = FUNC_UNKNOWN;
  };

  return ret;
};

int MBusDataRecord::decodeValue(double *value_out_real, char **value_out_str,
                                int *value_out_str_size) {
  int result = 0;
  unsigned char vif, vife;
  struct tm time;
  int value_out_int;
  long long value_out_long_long;
  *value_out_real = 0.0;
  *value_out_str = NULL;
  *value_out_str_size = 0;

  // ignore extension bit
  vif = (this->drh->vib->vif & MBUS_DIB_VIF_WITHOUT_EXTENSION);
  vife = (this->drh->vib->vife[0] & MBUS_DIB_VIF_WITHOUT_EXTENSION);

  switch (this->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_DATA) {
  case 0x00: /* no data */
    *value_out_str = new char[1];
    *value_out_str[0] = '\0';
    *value_out_str_size = 0;
    result = 0;
    break;

  case 0x01: /* 1 byte integer (8 bit) */
    result = this->decodeInt(1, &value_out_int);
    *value_out_real = value_out_int;
    break;

  case 0x02: /* 2 byte integer (16 bit) */
    // E110 1100  Time Point (date)
    if (vif == 0x6C) {
      this->decodeTM(&time, 2);

      *value_out_str = new char[11];
      *value_out_str_size =
          snprintf(*value_out_str, 11, "%04d-%02d-%02d", (time.tm_year + 1900),
                   (time.tm_mon + 1), time.tm_mday);
      result = 0;
    } else { // normal integer
      result = this->decodeInt(2, &value_out_int);
      *value_out_real = value_out_int;
    }
    break;

  case 0x03: /* 3 byte integer (24 bit) */
    result = this->decodeInt(3, &value_out_int);
    *value_out_real = value_out_int;
    break;

  case 0x04: /* 4 byte integer (32 bit) */
    // E110 1101  Time Point (date/time)
    // E011 0000  Start (date/time) of tariff
    // E111 0000  Date and time of battery change
    if ((vif == 0x6D) || ((this->drh->vib->vif == 0xFD) && (vife == 0x30)) ||
        ((this->drh->vib->vif == 0xFD) && (vife == 0x70))) {
      this->decodeTM(&time, 4);
      *value_out_str = new char[21];
      *value_out_str_size =
          snprintf(*value_out_str, 21, "%04d-%02d-%02dT%02d:%02d:%02dZ",
                   (time.tm_year + 1900), (time.tm_mon + 1), time.tm_mday,
                   time.tm_hour, time.tm_min, time.tm_sec);
      result = 0;
    } else { // normal integer
      result = this->decodeInt(4, &value_out_int);
      *value_out_real = value_out_int;
    }
    break;

  case 0x05: /* 32b real */
    *value_out_real = this->decodeFloat();
    result = 0;
    break;

  case 0x06: /* 6 byte integer (48 bit) */
    // E110 1101  Time Point (date/time)
    // E011 0000  Start (date/time) of tariff
    // E111 0000  Date and time of battery change
    if ((vif == 0x6D) || ((this->drh->vib->vif == 0xFD) && (vife == 0x30)) ||
        ((this->drh->vib->vif == 0xFD) && (vife == 0x70))) {
      this->decodeTM(&time, 6);

      *value_out_str = new char[21];
      *value_out_str_size =
          snprintf(*value_out_str, 21, "%04d-%02d-%02dT%02d:%02d:%02dZ",
                   (time.tm_year + 1900), (time.tm_mon + 1), time.tm_mday,
                   time.tm_hour, time.tm_min, time.tm_sec);
      result = 0;
    } else { // normal integer
      result = this->decodeLongLong(6, &value_out_long_long);
      *value_out_real = value_out_long_long;
    }
    break;

  case 0x07: /* 8 byte integer (64 bit) */
    result = this->decodeLongLong(8, &value_out_long_long);
    *value_out_real = value_out_long_long;
    break;

  case 0x09: /* 2 digit BCD (8 bit) */
    *value_out_real = this->decodeBCD(1);
    result = 0;
    break;

  case 0x0A: /* 4 digit BCD (16 bit) */
    *value_out_real = this->decodeBCD(2);
    result = 0;
    break;

  case 0x0B: /* 6 digit BCD (24 bit) */
    *value_out_real = this->decodeBCD(3);
    result = 0;
    break;

  case 0x0C: /* 8 digit BCD (32 bit) */
    *value_out_real = this->decodeBCD(4);
    result = 0;
    break;

  case 0x0D: /* variable length */
    if (this->data_len <= 0xBF) {
      *value_out_str = new char[this->data_len + 1];
      *value_out_str_size = this->data_len;
      this->decodeStr((unsigned char *)(*value_out_str), this->data,
                      this->data_len);
      result = 0;
      break;
    }

    result = -2;
    MBUS_ERROR("Non ASCII variable length not implemented yet\n");
    break;

  case 0x0E: /* 12 digit BCD (40 bit) */
    *value_out_real = this->decodeBCD(6);
    result = 0;
    break;

  case 0x0F: /* Special functions */
    *value_out_str = new char[3 * this->data_len + 1];
    *value_out_str_size = 3 * this->data_len;
    this->decodeBin((unsigned char *)(*value_out_str), this->data,
                    this->data_len, (3 * this->data_len + 1));
    result = 0;
    break;

  default:
    result = -2;
    MBUS_ERROR("Unknown DIF (0x%.2x)", this->drh->dib->dif);
    break;
  }

  return result;
};