#ifndef __MBUS_VIFTABLE_H__
#define __MBUS_VIFTABLE_H__

typedef struct mbus_variable_vif {
    unsigned     vif;
    double       exponent;
    const char * unit;
    const char * quantity;
} mbus_variable_vif;


extern const mbus_variable_vif vif_table[];

#endif