#ifndef __MBUS_VALUE_INFORMATION_BLOCK_H__
#define __MBUS_VALUE_INFORMATION_BLOCK_H__

#include <stdlib.h>

#include "MBusDefines.h"

class MBusValueInformationBlock {
public:
    unsigned char vif;
    unsigned char vife[10];
    size_t  nvife;

    unsigned char custom_vif[128];

    MBusValueInformationBlock();
    ~MBusValueInformationBlock();

    int vif_normalize(int vif, double value, char **unit_out, double *value_out, char **quantity_out);
    int normalize(double value, char **unit_out, double *value_out, char **quantity_out);
};

#endif /* MBusValueInformationBlock.h */