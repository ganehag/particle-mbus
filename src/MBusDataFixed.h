#ifndef __MBUS_DATA_FIXED_H__
#define __MBUS_DATA_FIXED_H__

#include "MBusProtocol.h"
#include "MBusFrame.h"

// 
// MBus documentation 6.2 Fixed Data Structure
//
// 
class MBusDataFixed {
public:

  // Ident.Nr. Access No.  Status  Medium/Unit  Counter1  Counter2
  // 4 Byte    1 Byte      1 Byte  2 Byte       4 Byte    4 Byte

  // ex 78 56 34 12 0A 00 E9 7E 01 00 00 00 35 01 00 00

  unsigned char id_bcd[4];       // 78 56 34 12 = 12345678
  unsigned char access_no;       // 0Ah = 10d
  unsigned char status;          // 00h: counters coded BCD, actual values, no errors
  unsigned char medium_unit[2];  // E9 7E Type&Unit: medium water, unit1 = 1l, unit2 = 1l (same, but historic)
  unsigned char cnt1_val[4];     // 01 00 00 00 counter 1 = 1l (actual value)
  unsigned char cnt2_val[4];     // 35 01 00 00 counter 2 = 135 l (historic value)

  MBusDataFixed();
  ~MBusDataFixed();

  int parse(MBusFrame *frame);

  long long getValue(int recordPos);
  unsigned char getMediumUnit(int recordPos);


  const char *getMedium();
  const char *getUnit(int recordPos);
  const char *getFunction();

  int normalize(int medium_unit, long medium_value, char **unit_out, double *value_out, char **quantity_out);

};

#endif /* MBusDataFixed.h */
