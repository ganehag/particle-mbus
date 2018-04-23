#ifndef __MBUS_H__
#define __MBUS_H__

#include "MBusDefines.h"
#include "MBusFrame.h"
#include "MBusRecord.h"

#define MBUS_PROBE_NOTHING 0
#define MBUS_PROBE_SINGLE 1
#define MBUS_PROBE_COLLISION 2
#define MBUS_PROBE_ERROR -1

#define MBUS_FRAME_PURGE_S2M 2
#define MBUS_FRAME_PURGE_M2S 1
#define MBUS_FRAME_PURGE_NONE 0

// FIXME: to big?
#ifndef SSIZE_MAX
#define SSIZE_MAX 32767
#endif

#define PACKET_BUFF_SIZE 2048

class MBusHandle {
public:
  int max_data_retry;
  int max_search_retry;
  char purge_first_frame;

  MBusHandle();
  ~MBusHandle();

  virtual int open();
  virtual int close();
  virtual int send(MBusFrame *frame);
  virtual int recv(MBusFrame *frame);
  virtual int sendPingFrame(int address, bool purge_response);
  virtual int purgeFrames();
};

class MBusSerialHandle : public MBusHandle {
public:
  MBusSerialHandle(USARTSerial *handle);
  ~MBusSerialHandle();

  int open();
  int close();
  int send(MBusFrame *frame);
  int recv(MBusFrame *frame);
  int sendPingFrame(int address, bool purge_response);
  int purgeFrames();

  int setBaudrate(long baudrate);
  int requestSendRecv(int address, MBusFrame *reply, int max_frames);

  USARTSerial *handle;
};

/*
class MBusNetHandle : public MBusHandle {
public:
    MBusNetHandle();
    ~MBusNetHandle();
};
*/

class MBus {
public:
  MBus();
  ~MBus();

  static int initSlaves(MBusHandle *handle);
  static int selectSecondaryAddress(MBusHandle *handle, const char *mask);

  static int isPrimaryAddress(int value);
  static int isSecondaryAddress(const char *value);
};

#endif /* __MBUS_H__ */
