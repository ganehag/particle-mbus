#ifndef __MBUS_DATA_FIXED_H__
#define __MBUS_DATA_FIXED_H__

#include "MBusDefines.h"
#include "MBusFrame.h"

//
// FIXED LENGTH DATA FORMAT
//
class MBusDataFixed {
public:
    // ex
    // 35 01 00 00 counter 2 = 135 l (historic value)
    //
    // e.g.
    //
    // 78 56 34 12 identification number = 12345678
    // 0A          transmission counter = 0Ah = 10d
    // 00          status 00h: counters coded BCD, actual values, no errors
    // E9 7E       Type&Unit: medium water, unit1 = 1l, unit2 = 1l (same, but historic)
    // 01 00 00 00 counter 1 = 1l (actual value)
    // 35 01 00 00 counter 2 = 135 l (historic value)

    unsigned char id_bcd[4];
    unsigned char tx_cnt;
    unsigned char status;
    unsigned char cnt1_type;
    unsigned char cnt2_type;
    unsigned char cnt1_val[4];
    unsigned char cnt2_val[4];

    MBusDataFixed();
    ~MBusDataFixed();

    int parse(MBusFrame *frame);
};

#endif /* MBusDataFixed.h */