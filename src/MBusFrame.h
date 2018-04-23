#ifndef __MBUS_FRAME_H__
#define __MBUS_FRAME_H__

#include <stdlib.h>

#include "MBusDefines.h"
#include "MBusFrameData.h"

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

    MBusFrame *next; // pointer to next mbus_frame for multi-telegram replies


    MBusFrame(int frame_type);
    MBusFrame() : MBusFrame(0) {};
    ~MBusFrame();

    int calc_checksum();
    int calc_length();

    unsigned char get_checksum();
    size_t get_length();



    int parse(unsigned char *data, size_t data_size);
    int pack(unsigned char *data, size_t data_size);

    int verify();
    int internal_pack(MBusFrameData *frame_data);

    int selectSecondaryPack(const char *address);

    //
    // M-Bus frame data struct access/write functions
    //
    int get_type();
    int get_direction();

    MBusDataVariable *getVariableData();

    // DEBUG
    int print();

    char *get_secondary_address();
    int   select_secondary_pack(char *address);
};

#endif /* MBusFrame.h */


