#ifndef __MBUS_H__
#define __MBUS_H__

#include "MBusDefines.h"
#include "MBusRecord.h"
#include "MBusFrame.h"


#define MBUS_PROBE_NOTHING   0
#define MBUS_PROBE_SINGLE    1
#define MBUS_PROBE_COLLISION 2
#define MBUS_PROBE_ERROR     -1

#define MBUS_FRAME_PURGE_S2M  2
#define MBUS_FRAME_PURGE_M2S  1
#define MBUS_FRAME_PURGE_NONE 0

// FIXME: to big?
#ifndef SSIZE_MAX
#define SSIZE_MAX 32767
#endif

#define PACKET_BUFF_SIZE 2048

//
// HEADER FOR SECONDARY ADDRESSING
//
/*
class MBusDataSecondaryAddress
{
public:
    //Ident.Nr. Manufr. Version Medium
    //4 Byte    2 Byte  1 Byte  1 Byte

    // ex
    // 14 49 10 01 10 57 01 06

    unsigned char id_bcd[4];         // 14 49 10 01
    unsigned char manufacturer[2];   // 10 57
    unsigned char version;           // 01
    unsigned char medium;            // 06

    MBusDataSecondaryAddress();
    ~MBusDataSecondaryAddress();
};


class MBusSlaveData
{
public:
    int state_fcb;
    int state_acd;

    MBusSlaveData();
    ~MBusSlaveData();

};
*/

class MBusHandle {
public:
    int max_data_retry;
    int max_search_retry;
    char purge_first_frame;
    // bool is_serial

    MBusHandle();
    ~MBusHandle();

    virtual int open();
    virtual int close();
    virtual int send(MBusFrame *frame);
    virtual int recv(MBusFrame *frame);
    virtual int sendPingFrame(int address, bool purge_response);
    virtual int purgeFrames();

    // void free_auxdata();
    // void recv_event(unsigned char src_type, const char *buff, size_t len);
    // void send_event(unsigned char src_type, const char *buff, size_t len);
    // void scan_progress(const char *mask);
    // void found_event(MBusFrame *frame);
    // void *auxdata;
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
    // static MBusSlaveData slave_data[MBUS_MAX_PRIMARY_SLAVES];

    MBus();
    ~MBus();
    
    static int initSlaves(MBusHandle *handle);
    static int selectSecondaryAddress(MBusHandle *handle, const char *mask);
};

#endif /* __MBUS_H__ */