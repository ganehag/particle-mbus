#ifndef __MBUS_FRAME_DATA_H__
#define __MBUS_FRAME_DATA_H__

#include "MBusProtocol.h"

#include "MBusFrame.h"

#include "MBusDataFixed.h"
#include "MBusDataVariable.h"

class MBusFrameData {
public:
  MBusDataVariable *data_var;
  MBusDataFixed *data_fix;

  int type;
  int error;

  MBusFrameData();
  ~MBusFrameData();

  // DEBUG
  int print();

  int parse(MBusFrame *frame);
};

#endif /* MBusFrameData.h */