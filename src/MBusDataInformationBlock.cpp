#include "MBusDataInformationBlock.h"
#include <string.h>

MBusDataInformationBlock::MBusDataInformationBlock() {
    dif = 0;
    memset(dife, 0, sizeof(dife));
    ndife = 0;
};

MBusDataInformationBlock::~MBusDataInformationBlock() {

};

unsigned char
MBusDataInformationBlock::getDataLength() {
    switch (this->dif & MBUS_DATA_RECORD_DIF_MASK_DATA) {
        case 0x0:
            return 0;
        case 0x1:
            return 1;
        case 0x2:
            return 2;
        case 0x3:
            return 3;
        case 0x4:
            return 4;
        case 0x5:
            return 4;
        case 0x6:
            return 6;
        case 0x7:
            return 8;
        case 0x8:
            return 0;
        case 0x9:
            return 1;
        case 0xA:
            return 2;
        case 0xB:
            return 3;
        case 0xC:
            return 4;
        case 0xD:
            // variable data length,
            // data length stored in data field
            return 0;
        case 0xE:
            return 6;
        case 0xF:
            return 8;

        default: // never reached
            return 0x00;
    }
};