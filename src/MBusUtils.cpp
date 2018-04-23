#include "MBusUtils.h"
#include "MBusVifTable.h"

#include <string.h>
#include <math.h>
#include <time.h>
#include <new>

/*
void 
MBusUtils::str_decode(unsigned char *dst, const unsigned char *src, size_t len) {
    size_t i = 0;

    if (src && dst) {
        dst[len] = '\0';
        while(len > 0) {
            dst[i++] = src[--len];
        }
    }
}


unsigned char
MBusUtils::dif_datalength_lookup(unsigned char dif) {
    switch (dif & MBUS_DATA_RECORD_DIF_MASK_DATA)
    {
        case 0x0:
            return 0;
        case 0x1:
            return 1;
        case 0x2:
            return 2;
        case 0x3:
            return 3;
        case 0x4:
            return 4;
        case 0x5:
            return 4;
        case 0x6:
            return 6;
        case 0x7:
            return 8;
        case 0x8:
            return 0;
        case 0x9:
            return 1;
        case 0xA:
            return 2;
        case 0xB:
            return 3;
        case 0xC:
            return 4;
        case 0xD:
            // variable data length,
            // data length stored in data field
            return 0;
        case 0xE:
            return 6;
        case 0xF:
            return 8;

        default: // never reached
            return 0x00;

    }
}


long long
MBusUtils::bcd_decode(unsigned char *bcd_data, size_t bcd_data_size) {
    long long val = 0;
    size_t i;

    if (bcd_data) {
        for (i = bcd_data_size; i > 0; i--) {
            val = (val * 10) + ((bcd_data[i-1]>>4) & 0xF);
            val = (val * 10) + (bcd_data[i-1] & 0xF);
        }

        return val;
    }

    return -1;
};

long
MBusUtils::data_record_storage_number(MBusDataRecord *record) {
    int bit_index = 0;
    long result = 0;
    int i;

    if (record != NULL) {
        result |= (record->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_STORAGE_NO) >> 6;
        bit_index++;

        for (i=0; i<record->drh->dib->ndife; i++) {
            result |= (record->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_STORAGE_NO) << bit_index;
            bit_index += 4;
        }

        return result;
    }

    return -1;
};

long
MBusUtils::data_record_tariff(MBusDataRecord *record) {
    int bit_index = 0;
    long result = 0;
    int i;

    if (record && (record->drh->dib->ndife > 0)) {
        for (i=0; i<record->drh->dib->ndife; i++) {
            result |= ((record->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_TARIFF) >> 4) << bit_index;
            bit_index += 2;
        }

        return result;
    }

    return -1;
};

int
MBusUtils::data_record_device(MBusDataRecord *record) {
    int bit_index = 0;
    int result = 0;
    int i;

    if (record && (record->drh->dib->ndife > 0)) {
        for (i=0; i<record->drh->dib->ndife; i++) {
            result |= ((record->drh->dib->dife[i] & MBUS_DATA_RECORD_DIFE_MASK_DEVICE) >> 6) << bit_index;
            bit_index++;
        }

        return result;
    }

    return -1;
};

const char *
MBusUtils::data_record_function(MBusDataRecord *record) {
    char *ret;

    if (record != NULL) {
        switch (record->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_FUNCTION) {
            case 0x00:
                ret = "Instantaneous value";
                // snprintf((char *)buff, sizeof(buff), "Instantaneous value");
                break;

            case 0x10:
                ret = "Maximum value";
                // snprintf((char *)buff, sizeof(buff), "Maximum value");
                break;

            case 0x20:
                ret = "Minimum value";
                // snprintf((char *)buff, sizeof(buff), "Minimum value");
                break;

            case 0x30:
                ret = "Value during error state";
                // snprintf((char *)buff, sizeof(buff), "Value during error state");
                break;

            default:
                ret = "unknown";
                // snprintf((char *)buff, sizeof(buff), "unknown");
        };

        return ret;
    }

    return NULL;
};

int
MBusUtils::variable_value_decode(MBusDataRecord *record, double *value_out_real, char **value_out_str, int *value_out_str_size) {
    int result = 0;
    unsigned char vif, vife;
    struct tm time;
    int value_out_int;
    long long value_out_long_long;
    *value_out_real = 0.0;
    *value_out_str = NULL;
    *value_out_str_size = 0;

    if (record) {
        // MBUS_DEBUG("coding = 0x%02X \n", record->drh->dib->dif);

        // ignore extension bit
        vif = (record->drh->vib->vif & MBUS_DIB_VIF_WITHOUT_EXTENSION);
        vife = (record->drh->vib->vife[0] & MBUS_DIB_VIF_WITHOUT_EXTENSION);

        switch (record->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_DATA) {
            case 0x00:

                // try {
                *value_out_str = new char[1];

                // } catch(std::bad_alloc) {
                //    MBUS_ERROR("Unable to allocate memory");
                //    return -1;
                //}

                *value_out_str[0] = '\0';
                *value_out_str_size = 0;
                result = 0;
                break;

            case 0x01:
                result = record->decodeInt(1, &value_out_int);
                *value_out_real = value_out_int;
                break;

            case 0x02:
                // E110 1100  Time Point (date)
                if (vif == 0x6C) {
                    record->decodeTM(&time, 3);

                    // try {
                    *value_out_str = new char[11];
                    // } catch(std::bad_alloc) {
                    //    MBUS_ERROR("Unable to allocate memory");
                    //    return -1;
                    //}

                    *value_out_str_size = snprintf(*value_out_str, 11, "%04d-%02d-%02d",
                                                 (time.tm_year + 1900),
                                                 (time.tm_mon + 1),
                                                  time.tm_mday);
                    result = 0;
                } else  { // normal integer
                    result = record->decodeInt(2, &value_out_int);
                    *value_out_real = value_out_int;
                }
                break;

            case 0x03:
                result = record->decodeInt(3, &value_out_int);
                *value_out_real = value_out_int;
                break;

            case 0x04:
                // E110 1101  Time Point (date/time)
                // E011 0000  Start (date/time) of tariff
                // E111 0000  Date and time of battery change
                if ( (vif == 0x6D) ||
                    ((record->drh->vib->vif == 0xFD) && (vife == 0x30)) ||
                    ((record->drh->vib->vif == 0xFD) && (vife == 0x70)))
                {
                    record->decodeTM(&time, 4);
                    // try {
                    *value_out_str = new char[21];
                    // } catch(std::bad_alloc) {
                    //   MBUS_ERROR("Unable to allocate memory");
                    //    return -1;
                    //}

                    *value_out_str_size = snprintf(*value_out_str, 21, "%04d-%02d-%02dT%02d:%02d:%02dZ",
                                                 (time.tm_year + 1900),
                                                 (time.tm_mon + 1),
                                                  time.tm_mday,
                                                  time.tm_hour,
                                                  time.tm_min,
                                                  time.tm_sec);
                    result = 0;
                } else { // normal integer
                    result = record->decodeInt(4, &value_out_int);
                    *value_out_real = value_out_int;
                }
                break;

            case 0x05:
                *value_out_real = record->decodeFloat();
                result = 0;
                break;

            case 0x06:
                // E110 1101  Time Point (date/time)
                // E011 0000  Start (date/time) of tariff
                // E111 0000  Date and time of battery change
                if ( (vif == 0x6D) ||
                    ((record->drh->vib->vif == 0xFD) && (vife == 0x30)) ||
                    ((record->drh->vib->vif == 0xFD) && (vife == 0x70)))
                {
                    record->decodeTM(&time, 6);
                    // try {
                    *value_out_str = new char[21];
                    // } catch(std::bad_alloc) {
                    //    MBUS_ERROR("Unable to allocate memory");
                    //    return -1;
                    //}
                    *value_out_str_size = snprintf(*value_out_str, 21, "%04d-%02d-%02dT%02d:%02d:%02dZ",
                                                 (time.tm_year + 1900),
                                                 (time.tm_mon + 1),
                                                  time.tm_mday,
                                                  time.tm_hour,
                                                  time.tm_min,
                                                  time.tm_sec);
                    result = 0;
                } else { // normal integer
                    result = record->decodeLongLong(6, &value_out_long_long);
                    *value_out_real = value_out_long_long;
                }
                break;

            case 0x07:
                result = record->decodeLongLong(8, &value_out_long_long);
                *value_out_real = value_out_long_long;
                break;

            case 0x09:
                *value_out_real = record->decodeBCD(1);
                result = 0;
                break;

            case 0x0A:
                *value_out_real = record->decodeBCD(2);
                result = 0;
                break;

            case 0x0B:
                *value_out_real = record->decodeBCD(3);
                result = 0;
                break;

            case 0x0C:
                *value_out_real = record->decodeBCD(4);
                result = 0;
                break;

            case 0x0D:
            {
                if (record->data_len <= 0xBF) {
                    // try {
                    *value_out_str = new char[record->data_len + 1];
                    // } catch(std::bad_alloc) {
                    //    MBUS_ERROR("Unable to allocate memory");
                    //    return -1;
                    // }

                    *value_out_str_size = record->data_len;
                    record->decodeStr((unsigned char*)(*value_out_str), record->data, record->data_len);
                    result = 0;
                    break;
                }

                result = -2;
                MBUS_ERROR("Non ASCII variable length not implemented yet\n");
                break;
            }

            case 0x0E:
                *value_out_real = record->decodeBCD( 6);
                result = 0;
                break;

            case 0x0F:
                // try {
                *value_out_str = new char[3 * record->data_len + 1];
                // } catch(std::bad_alloc) {
                //    MBUS_ERROR("Unable to allocate memory");
                //    return -1;
                // }

                *value_out_str_size = 3 * record->data_len;
                record->decodeBin((unsigned char*)(*value_out_str), record->data, record->data_len, (3 * record->data_len + 1));
                result = 0;
                break;

            default:
                result = -2;
                MBUS_ERROR("Unknown DIF (0x%.2x)", record->drh->dib->dif);
                break;
        }
    } else {
        MBUS_ERROR("record is null");
        result = -3;
    }

    return result;
};

*/

int
MBusUtils::is_primary_address(int value) {
    return ((value >= 0x00) && (value <= 0xFF));
};

int
MBusUtils::is_secondary_address(const char * value) {
    int i;

    if (value == NULL){
        return 0;
    }

    if (strlen(value) != 16){
        return 0;
    }

    for (i = 0; i < 16; i++) {
        if (!isxdigit(value[i])) {
            return 0;
        }
    }

    return 1;
};