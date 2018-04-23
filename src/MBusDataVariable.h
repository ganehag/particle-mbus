#ifndef __MBUS_DATA_VARIABLE_H__
#define __MBUS_DATA_VARIABLE_H__

#include "MBusDefines.h"

#include "MBusDataRecord.h"
#include "MBusFrame.h"

class MBusDataVariableHeader {
public:
  // Ident.Nr. Manufr. Version Medium Access No. Status  Signature
  // 4 Byte    2 Byte  1 Byte  1 Byte   1 Byte   1 Byte  2 Byte

  // ex
  // 88 63 80 09 82 4D 02 04 15 00 00 00

  unsigned char id_bcd[4];       // 88 63 80 09
  unsigned char manufacturer[2]; // 82 4D
  unsigned char version;         // 02
  unsigned char medium;          // 04
  unsigned char access_no;       // 15
  unsigned char status;          // 00
  unsigned char signature[2];    // 00 00

  MBusDataVariableHeader();
  ~MBusDataVariableHeader();

  unsigned long decodeID();
};

//
// VARIABLE LENGTH DATA FORMAT
//
class MBusDataVariable {
public:
  MBusDataVariableHeader *header;

  MBusDataRecord *record;
  size_t nrecords;

  unsigned char *data;
  size_t data_len;

  unsigned char more_records_follow;

  // are these needed/used?
  unsigned char mdh;
  unsigned char *mfg_data;
  size_t mfg_data_len;

  MBusDataVariable();
  ~MBusDataVariable();

  int parse(MBusFrame *frame);
  void append_record(MBusDataRecord *record);
};

#endif /* MBusDataVariable.h */