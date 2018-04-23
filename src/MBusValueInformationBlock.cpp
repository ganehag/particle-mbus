#include "MBusValueInformationBlock.h"
#include "MBusVifTable.h"

#include <math.h>
#include <string.h>

MBusValueInformationBlock::MBusValueInformationBlock() {
  vif = 0;
  memset(vife, 0, sizeof(vife));
  nvife = 0;
  memset(custom_vif, 0, sizeof(custom_vif));
};

MBusValueInformationBlock::~MBusValueInformationBlock(){

};

int MBusValueInformationBlock::vif_normalize(int vif, double value,
                                             char **unit_out, double *value_out,
                                             char **quantity_out) {
  int i;
  double exponent = 1.0;
  unsigned newVif = vif & 0xF7F; /* clear extension bit */

  // MBUS_DEBUG("vif_unit_normalize = 0x%03X \n", vif);

  if (unit_out == NULL || value_out == NULL || quantity_out == NULL) {
    MBUS_ERROR("%s: Invalid parameter.\n", __PRETTY_FUNCTION__);
    return -1;
  }

  for (i = 0; vif_table[i].vif < 0xfff; ++i) {
    if (vif_table[i].vif == newVif) {
      *unit_out = (char *)vif_table[i].unit;
      *value_out = value * vif_table[i].exponent;
      *quantity_out = (char *)vif_table[i].quantity;
      return 0;
    }
  }

  MBUS_ERROR("%s: Unknown VIF 0x%03X\n", __PRETTY_FUNCTION__, newVif);
  *unit_out = "Unknown (VIF=0x%.02X)";
  *quantity_out = "Unknown";
  exponent = 0.0;
  *value_out = 0.0;
  return -1;
}

int MBusValueInformationBlock::normalize(double value, char **unit_out,
                                         double *value_out,
                                         char **quantity_out) {
  int code;

  if (unit_out == NULL || value_out == NULL || quantity_out == NULL) {
    MBUS_ERROR("%s: Invalid parameter.\n", __PRETTY_FUNCTION__);
    return -1;
  }

  // MBUS_DEBUG("%s: vib_unit_normalize - VIF=0x%02X\n", __PRETTY_FUNCTION__,
  // this->vif);

  if (this->vif == 0xFD) /* first type of VIF extention: see table 8.4.4 a */
  {
    if (this->nvife == 0) {
      MBUS_ERROR("%s: Missing VIF extension\n", __PRETTY_FUNCTION__);
      return -1;
    }

    code = ((this->vife[0]) & MBUS_DIB_VIF_WITHOUT_EXTENSION) | 0x100;
    if (this->vif_normalize(code, value, unit_out, value_out, quantity_out) !=
        0) {
      MBUS_ERROR("%s: Error vif_normalize\n", __PRETTY_FUNCTION__);
      return -1;
    }
  } else {
    if (this->vif == 0xFB) /* second type of VIF extention: see table 8.4.4 b */
    {
      if (this->nvife == 0) {
        MBUS_ERROR("%s: Missing VIF extension\n", __PRETTY_FUNCTION__);
        return -1;
      }

      code = ((this->vife[0]) & MBUS_DIB_VIF_WITHOUT_EXTENSION) | 0x200;
      if (0 != vif_normalize(code, value, unit_out, value_out, quantity_out)) {
        MBUS_ERROR("%s: Error vif_normalize\n", __PRETTY_FUNCTION__);
        return -1;
      }
    } else if ((this->vif == 0x7C) || (this->vif == 0xFC)) {
      // custom VIF
      *unit_out = "-";
      *quantity_out = "FixME"; // strdup((const char *)this->custom_vif);
      *value_out = value;
    } else {
      code = (this->vif) & MBUS_DIB_VIF_WITHOUT_EXTENSION;
      if (0 != vif_normalize(code, value, unit_out, value_out, quantity_out)) {
        MBUS_ERROR("%s: Error vif_normalize\n", __PRETTY_FUNCTION__);
        return -1;
      }
    }
  }

  if ((this->vif & MBUS_DIB_VIF_EXTENSION_BIT) && (this->vif != 0xFD) &&
      (this->vif != 0xFB)) /* codes for VIF extention: see table 8.4.5 */
  {
    code = (this->vife[0]) & 0x7f;
    switch (code) {
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77: /* Multiplicative correction factor: 10^nnn-6 */
      *value_out *= pow(10.0, (this->vife[0] & 0x07) - 6);
      break;

    case 0x78:
    case 0x79:
    case 0x7A:
    case 0x7B: /* Additive correction constant: 10^nn-3 unit of VIF (offset) */
      *value_out += pow(10.0, (this->vife[0] & 0x03) - 3);
      break;

    case 0x7D: /* Multiplicative correction factor: 10^3 */
      *value_out *= 1000.0;
      break;
    }
  }

  return 0;
}