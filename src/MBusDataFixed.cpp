#include "MBusDataFixed.h"
#include <string.h>

MBusDataFixed::MBusDataFixed() {
    memset(id_bcd, 0, sizeof(id_bcd));
    tx_cnt = 0;
    status = 0;
    cnt1_type = 0;
    cnt1_type = 0;
    memset(cnt1_val, 0, sizeof(cnt1_val));
    memset(cnt2_val, 0, sizeof(cnt2_val));
};

MBusDataFixed::~MBusDataFixed() {

};

int
MBusDataFixed::parse(MBusFrame *frame) {
    if (frame != NULL) {
        if (frame->data_size != MBUS_DATA_FIXED_LENGTH) {
            // snprintf(error_str, sizeof(error_str), "Invalid length for fixed data.");
            return -1;
        }

        // copy the fixed-length data structure bytewise
        this->id_bcd[0]   = frame->data[0];
        this->id_bcd[1]   = frame->data[1];
        this->id_bcd[2]   = frame->data[2];
        this->id_bcd[3]   = frame->data[3];
        this->tx_cnt      = frame->data[4];
        this->status      = frame->data[5];
        this->cnt1_type   = frame->data[6];
        this->cnt2_type   = frame->data[7];
        this->cnt1_val[0] = frame->data[8];
        this->cnt1_val[1] = frame->data[9];
        this->cnt1_val[2] = frame->data[10];
        this->cnt1_val[3] = frame->data[11];
        this->cnt2_val[0] = frame->data[12];
        this->cnt2_val[1] = frame->data[13];
        this->cnt2_val[2] = frame->data[14];
        this->cnt2_val[3] = frame->data[15];

        return 0;
    }

    return -1;
};