#ifndef __MBUS_DATA_INFORMATION_BLOCK_H__
#define __MBUS_DATA_INFORMATION_BLOCK_H__

#include <stdlib.h>

#include "MBusProtocol.h"

class MBusDataInformationBlock {
public:
  unsigned char dif;
  unsigned char dife[10];
  size_t ndife;

  MBusDataInformationBlock();
  ~MBusDataInformationBlock();

  unsigned char getDataLength();
};

#endif /* MBusDataInformationBlock.h */