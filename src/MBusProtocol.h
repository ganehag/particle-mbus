#ifndef __MBUS_DEFINES_H__
#define __MBUS_DEFINES_H__

#include <stdio.h>
#include <stdlib.h>

#define MBUS_FRAME_DATA_LENGTH 252

#define NITEMS(x) (sizeof(x) / sizeof(x[0]))
//
// Supported handle types
//
#define MBUS_HANDLE_TYPE_TCP 0
#define MBUS_HANDLE_TYPE_SERIAL 1

//
// Resultcodes for mbus_recv_frame
//
#define MBUS_RECV_RESULT_OK 0
#define MBUS_RECV_RESULT_ERROR -1
#define MBUS_RECV_RESULT_INVALID -2
#define MBUS_RECV_RESULT_TIMEOUT -3
#define MBUS_RECV_RESULT_RESET -4

//------------------------------------------------------------------------------
// MBUS FRAME DATA FORMATS
//

// DATA RECORDS
#define MBUS_DIB_DIF_WITHOUT_EXTENSION 0x7F
#define MBUS_DIB_DIF_EXTENSION_BIT 0x80
#define MBUS_DIB_VIF_WITHOUT_EXTENSION 0x7F
#define MBUS_DIB_VIF_EXTENSION_BIT 0x80
#define MBUS_DIB_DIF_MANUFACTURER_SPECIFIC 0x0F
#define MBUS_DIB_DIF_MORE_RECORDS_FOLLOW 0x1F
#define MBUS_DIB_DIF_IDLE_FILLER 0x2F

#define MBUS_DATA_VARIABLE_HEADER_LENGTH 12

#define MBUS_DATA_FIXED_LENGTH 16
//
// ABSTRACT DATA FORMAT (error, fixed or variable length)
//
#define MBUS_DATA_TYPE_FIXED 1
#define MBUS_DATA_TYPE_VARIABLE 2
#define MBUS_DATA_TYPE_ERROR 3

//------------------------------------------------------------------------------
// FRAME types
//
#define MBUS_FRAME_TYPE_ANY 0x00
#define MBUS_FRAME_TYPE_ACK 0x01
#define MBUS_FRAME_TYPE_SHORT 0x02
#define MBUS_FRAME_TYPE_CONTROL 0x03
#define MBUS_FRAME_TYPE_LONG 0x04

#define MBUS_FRAME_ACK_BASE_SIZE 1
#define MBUS_FRAME_SHORT_BASE_SIZE 5
#define MBUS_FRAME_CONTROL_BASE_SIZE 9
#define MBUS_FRAME_LONG_BASE_SIZE 9

#define MBUS_FRAME_BASE_SIZE_ACK 1
#define MBUS_FRAME_BASE_SIZE_SHORT 5
#define MBUS_FRAME_BASE_SIZE_CONTROL 9
#define MBUS_FRAME_BASE_SIZE_LONG 9

#define MBUS_FRAME_FIXED_SIZE_ACK 1
#define MBUS_FRAME_FIXED_SIZE_SHORT 5
#define MBUS_FRAME_FIXED_SIZE_CONTROL 6
#define MBUS_FRAME_FIXED_SIZE_LONG 6

//
// Frame start/stop bits
//
#define MBUS_FRAME_ACK_START 0xE5
#define MBUS_FRAME_SHORT_START 0x10
#define MBUS_FRAME_CONTROL_START 0x68
#define MBUS_FRAME_LONG_START 0x68
#define MBUS_FRAME_STOP 0x16

//
//
//
#define MBUS_MAX_PRIMARY_SLAVES 250

//
// Control field
//
#define MBUS_CONTROL_FIELD_DIRECTION 0x07
#define MBUS_CONTROL_FIELD_FCB 0x06
#define MBUS_CONTROL_FIELD_ACD 0x06
#define MBUS_CONTROL_FIELD_FCV 0x05
#define MBUS_CONTROL_FIELD_DFC 0x05
#define MBUS_CONTROL_FIELD_F3 0x04
#define MBUS_CONTROL_FIELD_F2 0x03
#define MBUS_CONTROL_FIELD_F1 0x02
#define MBUS_CONTROL_FIELD_F0 0x01

#define MBUS_CONTROL_MASK_SND_NKE 0x40
#define MBUS_CONTROL_MASK_SND_UD 0x53
#define MBUS_CONTROL_MASK_REQ_UD2 0x5B
#define MBUS_CONTROL_MASK_REQ_UD1 0x5A
#define MBUS_CONTROL_MASK_RSP_UD 0x08

#define MBUS_CONTROL_MASK_FCB 0x20
#define MBUS_CONTROL_MASK_FCV 0x10

#define MBUS_CONTROL_MASK_ACD 0x20
#define MBUS_CONTROL_MASK_DFC 0x10

#define MBUS_CONTROL_MASK_DIR 0x40
#define MBUS_CONTROL_MASK_DIR_M2S 0x40
#define MBUS_CONTROL_MASK_DIR_S2M 0x00

//
// Address field
//
#define MBUS_ADDRESS_BROADCAST_REPLY 0xFE
#define MBUS_ADDRESS_BROADCAST_NOREPLY 0xFF
#define MBUS_ADDRESS_NETWORK_LAYER 0xFD

//
// Control Information field
//
// Mode 1 Mode 2                   Application                   Definition in
// 51h    55h                       data send                    EN1434-3
// 52h    56h                  selection of slaves           Usergroup July  ́93
// 50h                          application reset           Usergroup March  ́94
// 54h                          synronize action                 suggestion
// B8h                     set baudrate to 300 baud          Usergroup July  ́93
// B9h                     set baudrate to 600 baud          Usergroup July  ́93
// BAh                    set baudrate to 1200 baud          Usergroup July  ́93
// BBh                    set baudrate to 2400 baud          Usergroup July  ́93
// BCh                    set baudrate to 4800 baud          Usergroup July  ́93
// BDh                    set baudrate to 9600 baud          Usergroup July  ́93
// BEh                   set baudrate to 19200 baud              suggestion
// BFh                   set baudrate to 38400 baud              suggestion
// B1h           request readout of complete RAM content     Techem suggestion
// B2h          send user data (not standardized RAM write) Techem suggestion
// B3h                 initialize test calibration mode      Usergroup July  ́93
// B4h                           EEPROM read                 Techem suggestion
// B6h                         start software test           Techem suggestion
// 90h to 97h              codes used for hashing           longer recommended

#define MBUS_CONTROL_INFO_DATA_SEND 0x51
#define MBUS_CONTROL_INFO_DATA_SEND_MSB 0x55
#define MBUS_CONTROL_INFO_SELECT_SLAVE 0x52
#define MBUS_CONTROL_INFO_SELECT_SLAVE_MSB 0x56
#define MBUS_CONTROL_INFO_APPLICATION_RESET 0x50
#define MBUS_CONTROL_INFO_SYNC_ACTION 0x54
#define MBUS_CONTROL_INFO_SET_BAUDRATE_300 0xB8
#define MBUS_CONTROL_INFO_SET_BAUDRATE_600 0xB9
#define MBUS_CONTROL_INFO_SET_BAUDRATE_1200 0xBA
#define MBUS_CONTROL_INFO_SET_BAUDRATE_2400 0xBB
#define MBUS_CONTROL_INFO_SET_BAUDRATE_4800 0xBC
#define MBUS_CONTROL_INFO_SET_BAUDRATE_9600 0xBD
#define MBUS_CONTROL_INFO_SET_BAUDRATE_19200 0xBE
#define MBUS_CONTROL_INFO_SET_BAUDRATE_38400 0xBF
#define MBUS_CONTROL_INFO_REQUEST_RAM_READ 0xB1
#define MBUS_CONTROL_INFO_SEND_USER_DATA 0xB2
#define MBUS_CONTROL_INFO_INIT_TEST_CALIB 0xB3
#define MBUS_CONTROL_INFO_EEPROM_READ 0xB4
#define MBUS_CONTROL_INFO_SW_TEST_START 0xB6

// Mode 1 Mode 2                   Application                   Definition in
// 70h             report of general application errors     Usergroup March 94
// 71h                      report of alarm status          Usergroup March 94
// 72h   76h                variable data respond                EN1434-3
// 73h   77h                 fixed data respond                  EN1434-3
#define MBUS_CONTROL_INFO_ERROR_GENERAL 0x70
#define MBUS_CONTROL_INFO_STATUS_ALARM 0x71

#define MBUS_CONTROL_INFO_RESP_FIXED 0x73
#define MBUS_CONTROL_INFO_RESP_FIXED_MSB 0x77

#define MBUS_CONTROL_INFO_RESP_VARIABLE 0x72
#define MBUS_CONTROL_INFO_RESP_VARIABLE_MSB 0x76

//
// DATA BITS
//
#define MBUS_DATA_FIXED_STATUS_FORMAT_MASK 0x80
#define MBUS_DATA_FIXED_STATUS_FORMAT_BCD 0x00
#define MBUS_DATA_FIXED_STATUS_FORMAT_INT 0x80
#define MBUS_DATA_FIXED_STATUS_DATE_MASK 0x40
#define MBUS_DATA_FIXED_STATUS_DATE_STORED 0x40
#define MBUS_DATA_FIXED_STATUS_DATE_CURRENT 0x00

//
// data record fields
//
#define MBUS_DATA_RECORD_DIF_MASK_INST 0x00
#define MBUS_DATA_RECORD_DIF_MASK_MIN 0x10

#define MBUS_DATA_RECORD_DIF_MASK_TYPE_INT32 0x04
#define MBUS_DATA_RECORD_DIF_MASK_DATA 0x0F
#define MBUS_DATA_RECORD_DIF_MASK_FUNCTION 0x30
#define MBUS_DATA_RECORD_DIF_MASK_STORAGE_NO 0x40
#define MBUS_DATA_RECORD_DIF_MASK_EXTENTION 0x80
#define MBUS_DATA_RECORD_DIF_MASK_NON_DATA 0xF0

#define MBUS_DATA_RECORD_DIFE_MASK_STORAGE_NO 0x0F
#define MBUS_DATA_RECORD_DIFE_MASK_TARIFF 0x30
#define MBUS_DATA_RECORD_DIFE_MASK_DEVICE 0x40
#define MBUS_DATA_RECORD_DIFE_MASK_EXTENSION 0x80

//
// GENERAL APPLICATION ERRORS
//
#define MBUS_ERROR_DATA_UNSPECIFIED 0x00
#define MBUS_ERROR_DATA_UNIMPLEMENTED_CI 0x01
#define MBUS_ERROR_DATA_BUFFER_TOO_LONG 0x02
#define MBUS_ERROR_DATA_TOO_MANY_RECORDS 0x03
#define MBUS_ERROR_DATA_PREMATURE_END 0x04
#define MBUS_ERROR_DATA_TOO_MANY_DIFES 0x05
#define MBUS_ERROR_DATA_TOO_MANY_VIFES 0x06
#define MBUS_ERROR_DATA_RESERVED 0x07
#define MBUS_ERROR_DATA_APPLICATION_BUSY 0x08
#define MBUS_ERROR_DATA_TOO_MANY_READOUTS 0x09

//
// FIXED DATA FLAGS
//

//
// VARIABLE DATA FLAGS
//
#define MBUS_VARIABLE_DATA_MEDIUM_OTHER 0x00
#define MBUS_VARIABLE_DATA_MEDIUM_OIL 0x01
#define MBUS_VARIABLE_DATA_MEDIUM_ELECTRICITY 0x02
#define MBUS_VARIABLE_DATA_MEDIUM_GAS 0x03
#define MBUS_VARIABLE_DATA_MEDIUM_HEAT_OUT 0x04
#define MBUS_VARIABLE_DATA_MEDIUM_STEAM 0x05
#define MBUS_VARIABLE_DATA_MEDIUM_HOT_WATER 0x06
#define MBUS_VARIABLE_DATA_MEDIUM_WATER 0x07
#define MBUS_VARIABLE_DATA_MEDIUM_HEAT_COST 0x08
#define MBUS_VARIABLE_DATA_MEDIUM_COMPR_AIR 0x09
#define MBUS_VARIABLE_DATA_MEDIUM_COOL_OUT 0x0A
#define MBUS_VARIABLE_DATA_MEDIUM_COOL_IN 0x0B
#define MBUS_VARIABLE_DATA_MEDIUM_HEAT_IN 0x0C
#define MBUS_VARIABLE_DATA_MEDIUM_HEAT_COOL 0x0D
#define MBUS_VARIABLE_DATA_MEDIUM_BUS 0x0E
#define MBUS_VARIABLE_DATA_MEDIUM_UNKNOWN 0x0F
#define MBUS_VARIABLE_DATA_MEDIUM_COLD_WATER 0x16
#define MBUS_VARIABLE_DATA_MEDIUM_DUAL_WATER 0x17
#define MBUS_VARIABLE_DATA_MEDIUM_PRESSURE 0x18
#define MBUS_VARIABLE_DATA_MEDIUM_ADC 0x19

class MBusDataFixed;
class MBusDataInformationBlock;
class MBusDataRecord;
class MBusDataVariable;
class MBusFrame;
class MBusFrameData;
class MBusValueInformationBlock;

class MBusProtocol {
public:
    static int decodeBCD(unsigned char *, size_t, long long *);
    static int decodeLong(unsigned char *, size_t , long *);
};

#endif /* MBusProtocol.h */
