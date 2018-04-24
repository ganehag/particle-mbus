#ifndef __MBUS_H__
#define __MBUS_H__

#include "MBusDefines.h"
#include "MBusFrame.h"
#include "MBusRecord.h"

#define _DEBUG 1

#ifdef LINUX
#define MBUS_INFO(...) fprintf(stderr, __VA_ARGS__)
#define MBUS_WARN(...) fprintf(stderr, __VA_ARGS__)
#define MBUS_ERROR(...) fprintf(stderr, __VA_ARGS__)
#define MBUS_DEBUG(...) fprintf(stderr, __VA_ARGS__)
#elif PLATFORM_ID
#include "Particle.h"
  #ifdef _DEBUG
  #define MBUS_INFO(...) Log.info(__VA_ARGS__)
  #define MBUS_WARN(...) Log.warn(__VA_ARGS__)
  #define MBUS_ERROR(...) Log.error(__VA_ARGS__)
  #define MBUS_DEBUG(...) Log.trace(__VA_ARGS__)
  #else
  #define MBUS_INFO(...)
  #define MBUS_WARN(...)
  #define MBUS_ERROR(...)
  #define MBUS_DEBUG(...)
  #endif
#else 
#define MBUS_INFO(...)
#define MBUS_WARN(...)
#define MBUS_ERROR(...)
#define MBUS_DEBUG(...)
#endif


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

  int purgeFrames();
  int sendRequestFrame(int address);
  int sendPingFrame(int address, bool purge_response);
  int requestSendRecv(int address, MBusFrame *reply, int max_frames);
  int probeSecondaryAddress(const char *mask, char *matching_addr);
  int selectSecondaryAddress(const char *mask);
};

class MBusSerialHandle : public MBusHandle {
public:
  MBusSerialHandle(USARTSerial *handle);
  ~MBusSerialHandle();

  int open();
  int close();
  int send(MBusFrame *frame);
  int recv(MBusFrame *frame);

  int setBaudrate(long baudrate);

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
