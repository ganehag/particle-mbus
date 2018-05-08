#include "MBusVifTable.h"
#include "MBusDataFixed.h"
#include <string.h>

static const mbus_variable_vif fixed_table[] = {
    /* 00, 01 left out */
    {0x02, 1.0e0, "Wh", "Energy"},
    {0x03, 1.0e1, "Wh", "Energy"},
    {0x04, 1.0e2, "Wh", "Energy"},
    {0x05, 1.0e3, "Wh", "Energy"},
    {0x06, 1.0e4, "Wh", "Energy"},
    {0x07, 1.0e5, "Wh", "Energy"},
    {0x08, 1.0e6, "Wh", "Energy"},
    {0x09, 1.0e7, "Wh", "Energy"},
    {0x0A, 1.0e8, "Wh", "Energy"},

    {0x0B, 1.0e3, "J", "Energy"},
    {0x0C, 1.0e4, "J", "Energy"},
    {0x0D, 1.0e5, "J", "Energy"},
    {0x0E, 1.0e6, "J", "Energy"},
    {0x0F, 1.0e7, "J", "Energy"},
    {0x10, 1.0e8, "J", "Energy"},
    {0x11, 1.0e9, "J", "Energy"},
    {0x12, 1.0e10, "J", "Energy"},
    {0x13, 1.0e11, "J", "Energy"},

    {0x14, 1.0e0, "W", "Power"},
    {0x15, 1.0e0, "W", "Power"},
    {0x16, 1.0e0, "W", "Power"},
    {0x17, 1.0e0, "W", "Power"},
    {0x18, 1.0e0, "W", "Power"},
    {0x19, 1.0e0, "W", "Power"},
    {0x1A, 1.0e0, "W", "Power"},
    {0x1B, 1.0e0, "W", "Power"},
    {0x1C, 1.0e0, "W", "Power"},

    {0x1D, 1.0e3, "J/h", "Energy"},
    {0x1E, 1.0e4, "J/h", "Energy"},
    {0x1F, 1.0e5, "J/h", "Energy"},
    {0x20, 1.0e6, "J/h", "Energy"},
    {0x21, 1.0e7, "J/h", "Energy"},
    {0x22, 1.0e8, "J/h", "Energy"},
    {0x23, 1.0e9, "J/h", "Energy"},
    {0x24, 1.0e10, "J/h", "Energy"},
    {0x25, 1.0e11, "J/h", "Energy"},

    {0x26, 1.0e-6, "m^3", "Volume"},
    {0x27, 1.0e-5, "m^3", "Volume"},
    {0x28, 1.0e-4, "m^3", "Volume"},
    {0x29, 1.0e-3, "m^3", "Volume"},
    {0x2A, 1.0e-2, "m^3", "Volume"},
    {0x2B, 1.0e-1, "m^3", "Volume"},
    {0x2C, 1.0e0, "m^3", "Volume"},
    {0x2D, 1.0e1, "m^3", "Volume"},
    {0x2E, 1.0e2, "m^3", "Volume"},

    {0x2F, 1.0e-5, "m^3/h", "Volume flow"},
    {0x31, 1.0e-4, "m^3/h", "Volume flow"},
    {0x32, 1.0e-3, "m^3/h", "Volume flow"},
    {0x33, 1.0e-2, "m^3/h", "Volume flow"},
    {0x34, 1.0e-1, "m^3/h", "Volume flow"},
    {0x35, 1.0e0, "m^3/h", "Volume flow"},
    {0x36, 1.0e1, "m^3/h", "Volume flow"},
    {0x37, 1.0e2, "m^3/h", "Volume flow"},

    {0x38, 1.0e-3, "°C", "Temperature"},

    {0x39, 1.0e0, "Units for H.C.A.", "H.C.A."},

    {0x3A, 0.0, "Reserved", "Reserved"},
    {0x3B, 0.0, "Reserved", "Reserved"},
    {0x3C, 0.0, "Reserved", "Reserved"},
    {0x3D, 0.0, "Reserved", "Reserved"},

    {0x3E, 1.0e0, "", "historic"},

    {0x3F, 1.0e0, "", "No units"},

    /* end of array */
    {0xFFFF, 0.0, "", ""},
};


MBusDataFixed::MBusDataFixed() : access_no(0), status(0) {
  memset(id_bcd, 0, sizeof(id_bcd));
  memset(medium_unit, 0, sizeof(medium_unit));
  memset(cnt1_val, 0, sizeof(cnt1_val));
  memset(cnt2_val, 0, sizeof(cnt2_val));
};

MBusDataFixed::~MBusDataFixed(){

};

int MBusDataFixed::parse(MBusFrame *frame) {
  if (frame != NULL) {
    if (frame->data_size != MBUS_DATA_FIXED_LENGTH) {
      // snprintf(error_str, sizeof(error_str), "Invalid length for fixed
      // data.";
      return -1;
    }

    // copy the fixed-length data structure bytewise
    this->id_bcd[0] = frame->data[0];
    this->id_bcd[1] = frame->data[1];
    this->id_bcd[2] = frame->data[2];
    this->id_bcd[3] = frame->data[3];
    this->access_no = frame->data[4];
    this->status = frame->data[5];
    this->medium_unit[0] = frame->data[6];
    this->medium_unit[1] = frame->data[7];
    this->cnt1_val[0] = frame->data[8];
    this->cnt1_val[1] = frame->data[9];
    this->cnt1_val[2] = frame->data[10];
    this->cnt1_val[3] = frame->data[11];
    this->cnt2_val[0] = frame->data[12];
    this->cnt2_val[1] = frame->data[13];
    this->cnt2_val[2] = frame->data[14];
    this->cnt2_val[3] = frame->data[15];

    return 0;
  }

  return -1;
};

const char *MBusDataFixed::getMedium() {
    switch ((this->medium_unit[0] & 0xC0) >> 6 | (this->medium_unit[1] & 0xC0) >> 4) {
        case 0x00:
            return (const char *)"Other";
            break;
        case 0x01:
            return (const char *)"Oil";
            break;
        case 0x02:
            return (const char *)"Electricity";
            break;
        case 0x03:
            return (const char *)"Gas";
            break;
        case 0x04:
            return (const char *)"Heat";
            break;
        case 0x05:
            return (const char *)"Steam";
            break;
        case 0x06:
            return (const char *)"Hot Water";
            break;
        case 0x07:
            return (const char *)"Water";
            break;
        case 0x08:
            return (const char *)"H.C.A.";
            break;
        case 0x09:
            return (const char *)"Reserved";
            break;
        case 0x0A:
            return (const char *)"Gas Mode 2";
            break;
        case 0x0B:
            return (const char *)"Heat Mode 2";
            break;
        case 0x0C:
            return (const char *)"Hot Water Mode 2";
            break;
        case 0x0D:
            return (const char *)"Water Mode 2";
            break;
        case 0x0E:
            return (const char *)"H.C.A. Mode 2";
            break;
        case 0x0F:
            return (const char *)"Reserved";
            break;
    }

    return (const char*)"unknown";
};

const char *MBusDataFixed::getUnit(int recordPos) {
    unsigned char counter = this->medium_unit[0];
    if(recordPos == 1) {
      counter = this->medium_unit[1];
    }

    switch (counter & 0x3F) {
        case 0x00:
            return (const char *)"h,m,s";
            break;
        case 0x01:
            return (const char *)"YYYY-MM-DD";
            break;

        case 0x02:
            return (const char *)"Wh";
            break;
        case 0x03:
            return (const char *)"10 Wh";
            break;
        case 0x04:
            return (const char *)"100 Wh";
            break;
        case 0x05:
            return (const char *)"kWh";
            break;
        case 0x06:
            return (const char *)"10 kWh";
            break;
        case 0x07:
            return (const char *)"100 kWh";
            break;
        case 0x08:
            return (const char *)"MWh";
            break;
        case 0x09:
            return (const char *)"10 MWh";
            break;
        case 0x0A:
            return (const char *)"100 MWh";
            break;

        case 0x0B:
            return (const char *)"kJ";
            break;
        case 0x0C:
            return (const char *)"10 kJ";
            break;
        case 0x0E:
            return (const char *)"100 kJ";
            break;
        case 0x0D:
            return (const char *)"MJ";
            break;
        case 0x0F:
            return (const char *)"10 MJ";
            break;
        case 0x10:
            return (const char *)"100 MJ";
            break;
        case 0x11:
            return (const char *)"GJ";
            break;
        case 0x12:
            return (const char *)"10 GJ";
            break;
        case 0x13:
            return (const char *)"100 GJ";
            break;

        case 0x14:
            return (const char *)"W";
            break;
        case 0x15:
            return (const char *)"10 W";
            break;
        case 0x16:
            return (const char *)"100 W";
            break;
        case 0x17:
            return (const char *)"kW";
            break;
        case 0x18:
            return (const char *)"10 kW";
            break;
        case 0x19:
            return (const char *)"100 kW";
            break;
        case 0x1A:
            return (const char *)"MW";
            break;
        case 0x1B:
            return (const char *)"10 MW";
            break;
        case 0x1C:
            return (const char *)"100 MW";
            break;

        case 0x1D:
            return (const char *)"kJ/h";
            break;
        case 0x1E:
            return (const char *)"10 kJ/h";
            break;
        case 0x1F:
            return (const char *)"100 kJ/h";
            break;
        case 0x20:
            return (const char *)"MJ/h";
            break;
        case 0x21:
            return (const char *)"10 MJ/h";
            break;
        case 0x22:
            return (const char *)"100 MJ/h";
            break;
        case 0x23:
            return (const char *)"GJ/h";
            break;
        case 0x24:
            return (const char *)"10 GJ/h";
            break;
        case 0x25:
            return (const char *)"100 GJ/h";
            break;

        case 0x26:
            return (const char *)"ml";
            break;
        case 0x27:
            return (const char *)"10 ml";
            break;
        case 0x28:
            return (const char *)"100 ml";
            break;
        case 0x29:
            return (const char *)"l";
            break;
        case 0x2A:
            return (const char *)"10 l";
            break;
        case 0x2B:
            return (const char *)"100 l";
            break;
        case 0x2C:
            return (const char *)"m^3";
            break;
        case 0x2D:
            return (const char *)"10 m^3";
            break;
        case 0x2E:
            return (const char *)"m^3";
            break;

        case 0x2F:
            return (const char *)"ml/h";
            break;
        case 0x30:
            return (const char *)"10 ml/h";
            break;
        case 0x31:
            return (const char *)"100 ml/h";
            break;
        case 0x32:
            return (const char *)"l/h";
            break;
        case 0x33:
            return (const char *)"10 l/h";
            break;
        case 0x34:
            return (const char *)"100 l/h";
            break;
        case 0x35:
            return (const char *)"m^3/h";
            break;
        case 0x36:
            return (const char *)"10 m^3/h";
            break;
        case 0x37:
            return (const char *)"100 m^3/h";
            break;

        case 0x38:
            return (const char *)"1e-3 °C";
            break;
        case 0x39:
            return (const char *)"units for HCA";
            break;
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
            return (const char *)"reserved";
            break;
        case 0x3E:
            return (const char *)"reserved but historic";
            break;
        case 0x3F:
            return (const char *)"without units";
            break;
        default:
            return (const char *)"unknown";
            break;
    }

    return (const char *)"unknown";
};

const char *MBusDataFixed::getFunction() {
    if((this->status & MBUS_DATA_FIXED_STATUS_DATE_MASK) == MBUS_DATA_FIXED_STATUS_DATE_STORED) {
      return (const char*)"Stored value";
    }

    return (const char *)"Actual value";
};

unsigned char MBusDataFixed::getMediumUnit(int recordPos) {
  if(recordPos == 1) {
    return this->medium_unit[1];
  }

  return this->medium_unit[0];
};

long long MBusDataFixed::getValue(int recordPos) {
  long long value = 0;
  unsigned char *data = this->cnt1_val; // default to record 0

  // only change if argument is == 1
  if(recordPos == 1) {
    data = this->cnt2_val;
  }


  if ((this->status & MBUS_DATA_FIXED_STATUS_FORMAT_MASK) == MBUS_DATA_FIXED_STATUS_FORMAT_BCD) {
      MBusProtocol::decodeBCD(data, 4, &value);
  } else {
      MBusProtocol::decodeLong(data, 4, (long*)&value);
  }

  return value;
};

int MBusDataFixed::normalize(int medium_unit, long medium_value, char **unit_out, double *value_out, char **quantity_out) {
  medium_unit = medium_unit & 0x3F;

  switch(medium_unit) {
    case 0x00:
      // FIXME: convert to unixtime
      *unit_out = (char *)"h,m,s";
      *quantity_out = (char *)"Time";
      break;
    
    case 0x01:
      // FIXME: convert to unixtime
      *unit_out = (char *)"YY-MM-DD";
      *quantity_out = (char *)"Time";
      break;

    default:
        for(size_t i = 0; fixed_table[i].vif < 0xfff; i++) {
            if (fixed_table[i].vif == (unsigned int)medium_unit) {
                *unit_out = (char *)fixed_table[i].unit;
                *value_out = ((double) (medium_value)) * fixed_table[i].exponent;
                *quantity_out = (char *)fixed_table[i].quantity;

                return 0;
            }
        }

        *unit_out = (char *)"Unknown";
        *quantity_out = (char *)"Unknown";
        *value_out = 0.0;
        return -1;
  }

  return -2;
};
