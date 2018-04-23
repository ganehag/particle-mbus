#ifndef __MBUS_DATA_RECORD_H__
#define __MBUS_DATA_RECORD_H__

#include "MBusDataInformationBlock.h"
#include "MBusDefines.h"
#include "MBusRecord.h"
#include "MBusValueInformationBlock.h"

#define FUNC_MORE_RECORDS_FOLLOW "MORE_REC_FOLLOW"
#define FUNC_MANUFACTURER_SPECIFIC "MANU_SPEC"
#define FUNC_INSTANTANEOUS_VALUE "INST_VAL"
#define FUNC_MAXIMUM_VALUE "MAX_VAL"
#define FUNC_MINIMUM_VALUE "MIN_VAL"
#define FUNC_VALUE_DUR_ERROR_STATE "VAL_ERR_STATE"
#define FUNC_UNKNOWN "UNKNOWN"

class MBusDataRecordHeader {
public:
  MBusDataInformationBlock *dib;
  MBusValueInformationBlock *vib;

  MBusDataRecordHeader();
  ~MBusDataRecordHeader();
};

class MBusDataRecord {
public:
  MBusDataRecordHeader *drh;

  unsigned char data[234]; // FIXME: dynamic or static...
  size_t data_len;

  time_t timestamp;

  MBusDataRecord *next;

  MBusDataRecord();
  ~MBusDataRecord();

  long getStorageNumber();
  long getTariff();
  int getDevice();
  const char *getFunction();

  int decodeInt(size_t int_data_size, int *value);
  int decodeLong(size_t int_data_size, long *value);
  int decodeLongLong(size_t int_data_size, long long *value);
  float decodeFloat();
  long long decodeBCD(size_t bcd_data_size);
  void decodeStr(unsigned char *dst, const unsigned char *src, size_t len);
  void decodeBin(unsigned char *dst, const unsigned char *src, size_t len,
                 size_t max_len);
  void decodeTM(struct tm *t, size_t t_data_size);
  int decodeValue(double *value_out_real, char **value_out_str,
                  int *value_out_str_size);

  MBusRecord *getRecord();
};

#endif /* MBusDataRecord.h */