#ifndef __MBUS_FRAME_H__
#define __MBUS_FRAME_H__

#include "MBusProtocol.h"
#include "MBusRecord.h"
#include "MBusFrameData.h"

#include <stdlib.h>

class MBusFrame {
public:
  unsigned char start1;
  unsigned char length1;
  unsigned char length2;
  unsigned char start2;
  unsigned char control;
  unsigned char address;
  unsigned char control_information;

  // variable data field
  unsigned char checksum;
  unsigned char stop;

  unsigned char data[MBUS_FRAME_DATA_LENGTH];
  size_t data_size;

  int type;
  time_t timestamp;

  // pointer to next MBusFrame for multi-telegram replies
  MBusFrame *next;

  MBusFrame(int frame_type);
  MBusFrame() : MBusFrame(0){};
  ~MBusFrame();

  int calcChecksum();
  int calcLength();

  unsigned char getChecksum();
  size_t getLength();

  int parse(unsigned char *data, size_t size);
  int pack(unsigned char *data, size_t size);

  int verify();
  int internalPack(MBusFrameData *frame_data);

  int selectSecondaryPack(const char *address);

  //
  // M-Bus frame data struct access/write functions
  //
  bool isVariable();
  bool isFixed();

  int getType();
  int getDirection();

  MBusDataVariable *getVariableData();

  MBusRecord *getFixedRecord(int pos);

  // DEBUG
  int print();

  char *getSecondaryAddress();
  int select_secondary_pack(char *address);
};

#endif /* MBusFrame.h */
