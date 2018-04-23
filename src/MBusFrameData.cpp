#include "MBusFrameData.h"

MBusFrameData::MBusFrameData() {
    data_var = new MBusDataVariable();
    data_fix = new MBusDataFixed();
    type = 0;
    error = 0;
};

MBusFrameData::~MBusFrameData() {
    if(data_var) {
        delete data_var;
    }

    if(data_fix) {
        delete data_fix;
    }
};


int
MBusFrameData::parse(MBusFrame *frame) {
    char direction;

    if (frame == NULL) {
        return -1;
    }

    direction = (frame->control & MBUS_CONTROL_MASK_DIR);

    if (direction == MBUS_CONTROL_MASK_DIR_S2M) {
        if (frame->control_information == MBUS_CONTROL_INFO_ERROR_GENERAL) {
            this->type = MBUS_DATA_TYPE_ERROR;

            if (frame->data_size > 0) {
                this->error = (int) frame->data[0];
            } else {
                this->error = 0;
            }

            return 0;

        } else if (frame->control_information == MBUS_CONTROL_INFO_RESP_FIXED) {
            if (frame->data_size == 0) {
                // snprintf(error_str, sizeof(error_str), "Got zero data_size.");

                return -1;
            }

            this->type = MBUS_DATA_TYPE_FIXED;
            return this->data_fix->parse(frame);

        } else if (frame->control_information == MBUS_CONTROL_INFO_RESP_VARIABLE) {
            if (frame->data_size == 0) {
                // snprintf(error_str, sizeof(error_str), "Got zero data_size.");

                return -1;
            }

            this->type = MBUS_DATA_TYPE_VARIABLE;
            return this->data_var->parse(frame);

        } else {
            // snprintf(error_str, sizeof(error_str), "Unknown control information 0x%.2x", frame->control_information);

            return -1;
        }
    }

    // snprintf(error_str, sizeof(error_str), "Wrong direction in frame (master to slave)");

    return -1;
};