#ifndef __MBUS_RECORD_H__
#define __MBUS_RECORD_H__

class MBusString {
public:
  char *value; /**< Buffer */
  int size;    /**< _size */

  MBusString();
  MBusString(char *str, unsigned int size);
  ~MBusString();

  void set(char *str, unsigned int size);
};

class MBusValue {
public:
  double real_val;
  MBusString str_val;

  MBusValue();
  ~MBusValue();
};

class MBusRecord {
public:
  MBusValue *value; /**< Quantity value */
  bool isNumeric;
  char *unit; /**< Quantity unit (e.g. Wh) */
  const char
      *function_medium; /**< Quantity medium or function (e.g. Electricity) */
  char *quantity;       /**< Quantity type (e.g. Energy) */
  int device;           /**< Quantity device */
  long tariff;          /**< Quantity tariff */
  long storage_number;  /**< Quantity storage number */

  MBusRecord();
  ~MBusRecord();

  int setValue(double value);
  int setValue(char *str, unsigned int size);

  double getValue();
  char *getString();
};

#endif /* MBusRecord.h */
