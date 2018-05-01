#include <cppunit/extensions/HelperMacros.h>
#include "frame_test.h"

CPPUNIT_TEST_SUITE_REGISTRATION( abbDeltaTest );

MBusRecord* abbDeltaTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void abbDeltaTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void abbDeltaTest::tearDown() {
  delete frame;
  frame = NULL;
};

void abbDeltaTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord10(void) {
};
void abbDeltaTest::TestRecord11(void) {
};
void abbDeltaTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord13(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( abbF95Test );

MBusRecord* abbF95Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void abbF95Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void abbF95Test::tearDown() {
  delete frame;
  frame = NULL;
};

void abbF95Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0742", 0.0742, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("14452154.3", 14452154.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("152.1543", 152.1543, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.4", 20.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.4", 20.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord7(void) {
};
void abbF95Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord9(void) {
};
void abbF95Test::TestRecord10(void) {
};
void abbF95Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord12(void) {
};
void abbF95Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("311590800.0", 311590800.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( abbXxxTest );

MBusRecord* abbXxxTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void abbXxxTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void abbXxxTest::tearDown() {
  delete frame;
  frame = NULL;
};

void abbXxxTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("59070.0", 59070.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord1(void) {
};
void abbXxxTest::TestRecord2(void) {
};
void abbXxxTest::TestRecord3(void) {
};
void abbXxxTest::TestRecord4(void) {
};
void abbXxxTest::TestRecord5(void) {
};
void abbXxxTest::TestRecord6(void) {
};
void abbXxxTest::TestRecord7(void) {
};
void abbXxxTest::TestRecord8(void) {
};
void abbXxxTest::TestRecord9(void) {
};
void abbXxxTest::TestRecord10(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( ACWItronBMPlusMTest );

MBusRecord* ACWItronBMPlusMTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ACWItronBMPlusMTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ACWItronBMPlusMTest::tearDown() {
  delete frame;
  frame = NULL;
};

void ACWItronBMPlusMTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11490378.0", 11490378.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("54.321", 54.321, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord2(void) {
};
void ACWItronBMPlusMTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord4(void) {
};
void ACWItronBMPlusMTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.0", 2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6.0", 6.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( ACWItronCYBLEMBus_14Test );

MBusRecord* ACWItronCYBLEMBus_14Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ACWItronCYBLEMBus_14Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ACWItronCYBLEMBus_14Test::tearDown() {
  delete frame;
  frame = NULL;
};

void ACWItronCYBLEMBus_14Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("9011523.0", 9011523.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord1(void) {
};
void ACWItronCYBLEMBus_14Test::TestRecord2(void) {
};
void ACWItronCYBLEMBus_14Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2516.0", 2516.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.031", 0.031, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.031", 0.031, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( allmessCf50Test );

MBusRecord* allmessCf50Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void allmessCf50Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void allmessCf50Test::tearDown() {
  delete frame;
  frame = NULL;
};

void allmessCf50Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.3", 0.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("128.8", 128.8, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("51.6", 51.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("77.23", 77.23, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord7(void) {
};
void allmessCf50Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3383.0", 3383.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( apatorLqm3Test );

MBusRecord* apatorLqm3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void apatorLqm3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void apatorLqm3Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( bergDzPlusTest );

MBusRecord* bergDzPlusTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void bergDzPlusTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void bergDzPlusTest::tearDown() {
  delete frame;
  frame = NULL;
};

void bergDzPlusTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord10(void) {
};
void bergDzPlusTest::TestRecord11(void) {
};
void bergDzPlusTest::TestRecord12(void) {
};
void bergDzPlusTest::TestRecord13(void) {
};
void bergDzPlusTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord15(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( EDCTest );

MBusRecord* EDCTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void EDCTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void EDCTest::tearDown() {
  delete frame;
  frame = NULL;
};

void EDCTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("35000.0", 35000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("465000.0", 465000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.5367031097", 21.5367031097, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.6050415039", 21.6050415039, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("92.0", 92.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("92.0", 92.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.000707039117813", 0.000707039117813, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.357621734619", 0.357621734619, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("18511.9121094", 18511.9121094, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord16(void) {
};
void EDCTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3571.0", 3571.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("413.0", 413.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.0", 1.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.0", 1.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( EFEEngelmannElsterSensoStar_2Test );

MBusRecord* EFEEngelmannElsterSensoStar_2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void EFEEngelmannElsterSensoStar_2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void EFEEngelmannElsterSensoStar_2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void EFEEngelmannElsterSensoStar_2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24083345.0", 24083345.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord1(void) {
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord11(void) {
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord12(void) {
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.025", 0.025, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11.0", 11.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.0", 22.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.0", 21.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.09", 0.09, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("524.0", 524.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.1e-05", 1.1e-05, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( EFEEngelmannWaterStarTest );

MBusRecord* EFEEngelmannWaterStarTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void EFEEngelmannWaterStarTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void EFEEngelmannWaterStarTest::tearDown() {
  delete frame;
  frame = NULL;
};

void EFEEngelmannWaterStarTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4990254.0", 4990254.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord1(void) {
};
void EFEEngelmannWaterStarTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.332", 0.332, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.331", 0.331, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.332", 0.332, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord5(void) {
};
void EFEEngelmannWaterStarTest::TestRecord6(void) {
};
void EFEEngelmannWaterStarTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.07", 2.07, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1191.0", 1191.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8e-06", 8e-06, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( electricityMeter_1Test );

MBusRecord* electricityMeter_1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void electricityMeter_1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void electricityMeter_1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void electricityMeter_1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12520.0", 12520.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12520.0", 12520.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("17744330.0", 17744330.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("17744330.0", 17744330.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("237.0", 237.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.2", 3.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("790.0", 790.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("655180.0", 655180.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("231.0", 231.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.5", 3.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("810.0", 810.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("655210.0", 655210.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("228.0", 228.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6.9", 6.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1600.0", 1600.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("655040.0", 655040.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord16(void) {
};
void electricityMeter_1Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3200.0", 3200.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("654710.0", 654710.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord19(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( electricityMeter_2Test );

MBusRecord* electricityMeter_2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void electricityMeter_2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void electricityMeter_2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void electricityMeter_2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2540.0", 2540.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2540.0", 2540.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4441280.0", 4441280.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4441280.0", 4441280.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("233.0", 233.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.1", 0.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("234.0", 234.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("235.0", 235.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.1", 0.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord16(void) {
};
void electricityMeter_2Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord19(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( ELSElsterF96PlusTest );

MBusRecord* ELSElsterF96PlusTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ELSElsterF96PlusTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ELSElsterF96PlusTest::tearDown() {
  delete frame;
  frame = NULL;
};

void ELSElsterF96PlusTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord4(void) {
};
void ELSElsterF96PlusTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1445.223", 1445.223, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.7", 22.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.6", 22.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.1", 0.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("730.0", 730.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord10(void) {
};
void ELSElsterF96PlusTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord15(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( elsFalconTest );

MBusRecord* elsFalconTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void elsFalconTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void elsFalconTest::tearDown() {
  delete frame;
  frame = NULL;
};

void elsFalconTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1234.567", 1234.567, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord1(void) {
};
void elsFalconTest::TestRecord2(void) {
};
void elsFalconTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("456.951", 456.951, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord4(void) {
};
void elsFalconTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5.945", 5.945, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord6(void) {
};
void elsFalconTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6.137", 6.137, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( elsTmpaTelegramm1Test );

MBusRecord* elsTmpaTelegramm1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void elsTmpaTelegramm1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void elsTmpaTelegramm1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void elsTmpaTelegramm1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1234.567", 1234.567, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord1(void) {
};
void elsTmpaTelegramm1Test::TestRecord2(void) {
};
void elsTmpaTelegramm1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("456.951", 456.951, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord4(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( ElsterF2Test );

MBusRecord* ElsterF2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ElsterF2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ElsterF2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void ElsterF2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5272000.0", 5272000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1204.27", 1204.27, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("917.69", 917.69, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28.0", 28.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("34.0", 34.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41393.0", 41393.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41393.0", 41393.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord10(void) {
};
void ElsterF2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( ELVElvacoCMa10Test );

MBusRecord* ELVElvacoCMa10Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ELVElvacoCMa10Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ELVElvacoCMa10Test::tearDown() {
  delete frame;
  frame = NULL;
};

void ELVElvacoCMa10Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.0", 2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5410.0", 5410.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3364.0", 3364.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7363.0", 7363.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.94", 20.94, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("13.72", 13.72, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("29.78", 29.78, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24.0", 24.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.92", 20.92, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.79", 20.79, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24011561.0", 24011561.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELVElvacoCMa10Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("262144.0", 262144.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( elvTempHumidTest );

MBusRecord* elvTempHumidTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void elvTempHumidTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void elvTempHumidTest::tearDown() {
  delete frame;
  frame = NULL;
};

void elvTempHumidTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4564.0", 4564.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4552.0", 4552.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5812.0", 5812.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.56", 22.56, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.6", 21.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("23.39", 23.39, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24.0", 24.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.76", 22.76, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.69", 22.69, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("54000834.0", 54000834.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elvTempHumidTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("262144.0", 262144.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( emhDizTest );

MBusRecord* emhDizTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void emhDizTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void emhDizTest::tearDown() {
  delete frame;
  frame = NULL;
};

void emhDizTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4090.0", 4090.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void emhDizTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void emhDizTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( EMUEMUProfessional_375MBusTest );

MBusRecord* EMUEMUProfessional_375MBusTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void EMUEMUProfessional_375MBusTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void EMUEMUProfessional_375MBusTest::tearDown() {
  delete frame;
  frame = NULL;
};

void EMUEMUProfessional_375MBusTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("32629.0", 32629.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1364.0", 1364.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7854.0", 7854.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-2.0", -2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-2.0", -2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("14.0", 14.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("14.0", 14.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("225.7", 225.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("187.4", 187.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("241.0", 241.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-0.066", -0.066, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-0.066", -0.066, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord26(void) {
};
void EMUEMUProfessional_375MBusTest::TestRecord27(void) {
};
void EMUEMUProfessional_375MBusTest::TestRecord28(void) {
};
void EMUEMUProfessional_375MBusTest::TestRecord29(void) {
};
void EMUEMUProfessional_375MBusTest::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("56.0", 56.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord31(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(31);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( engelmannSensostar2cTest );

MBusRecord* engelmannSensostar2cTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void engelmannSensostar2cTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void engelmannSensostar2cTest::tearDown() {
  delete frame;
  frame = NULL;
};

void engelmannSensostar2cTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10380010.0", 10380010.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord1(void) {
};
void engelmannSensostar2cTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.9", 12.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("800000.0", 800000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("95.0", 95.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("43.0", 43.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("52.58", 52.58, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("506.0", 506.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.1", 0.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord14(void) {
};
void engelmannSensostar2cTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.9", 12.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("800000.0", 800000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord19(void) {
};
void engelmannSensostar2cTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8.4", 8.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("500000.0", 500000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( exampleData_01Test );

MBusRecord* exampleData_01Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void exampleData_01Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void exampleData_01Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( exampleData_02Test );

MBusRecord* exampleData_02Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void exampleData_02Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void exampleData_02Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( f4Test );

MBusRecord* f4Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void f4Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void f4Test::tearDown() {
  delete frame;
  frame = NULL;
};

void f4Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3126504000.0", 3126504000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41566.09", 41566.09, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41565.85", 41565.85, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("97.0", 97.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.0", 21.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("75.2", 75.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31977.0", 31977.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("29648.0", 29648.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.535", 1.535, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("132900.0", 132900.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord10(void) {
};
void f4Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void f4Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( fillerTest );

MBusRecord* fillerTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void fillerTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void fillerTest::tearDown() {
  delete frame;
  frame = NULL;
};

void fillerTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5000.0", 5000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( FINFinder_7E_23_8_230_0020Test );

MBusRecord* FINFinder_7E_23_8_230_0020Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void FINFinder_7E_23_8_230_0020Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void FINFinder_7E_23_8_230_0020Test::tearDown() {
  delete frame;
  frame = NULL;
};

void FINFinder_7E_23_8_230_0020Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1728680.0", 1728680.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void FINFinder_7E_23_8_230_0020Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1728680.0", 1728680.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void FINFinder_7E_23_8_230_0020Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("230.0", 230.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void FINFinder_7E_23_8_230_0020Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.6", 0.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void FINFinder_7E_23_8_230_0020Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("90.0", 90.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void FINFinder_7E_23_8_230_0020Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("655330.0", 655330.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( frame1Test );

MBusRecord* frame1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void frame1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void frame1Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( frame2Test );

MBusRecord* frame2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void frame2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void frame2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void frame2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void frame2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void frame2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("218370.0", 218370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( gmcEmmod206Test );

MBusRecord* gmcEmmod206Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void gmcEmmod206Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void gmcEmmod206Test::tearDown() {
  delete frame;
  frame = NULL;
};

void gmcEmmod206Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("86.4", 86.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("95.9", 95.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("105.6", 105.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.957", 0.957, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.055", 1.055, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.15", 1.15, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("224.0", 224.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("65334.0", 65334.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("103880.0", 103880.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("150000.0", 150000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("201590.0", 201590.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("250000.0", 250000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("300910.0", 300910.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("350000.0", 350000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("402370.0", 402370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("450000.0", 450000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("224.0", 224.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void gmcEmmod206Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("202.0", 202.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( GWFMTKcoderTest );

MBusRecord* GWFMTKcoderTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void GWFMTKcoderTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void GWFMTKcoderTest::tearDown() {
  delete frame;
  frame = NULL;
};

void GWFMTKcoderTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("182007.0", 182007.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void GWFMTKcoderTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("269.0", 269.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( invalidLengthTest );

MBusRecord* invalidLengthTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void invalidLengthTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void invalidLengthTest::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( invalidLength2Test );

MBusRecord* invalidLength2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void invalidLength2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void invalidLength2Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( itronBm_MTest );

MBusRecord* itronBm_MTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronBm_MTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronBm_MTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronBm_MTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11490378.0", 11490378.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("54.321", 54.321, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord2(void) {
};
void itronBm_MTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord4(void) {
};
void itronBm_MTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.0", 2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6.0", 6.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCf51BemaTest );

MBusRecord* itronCf51BemaTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCf51BemaTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCf51BemaTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCf51BemaTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("14242391.0", 14242391.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8270000000.0", 8270000000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("51.7", 51.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.007", 0.007, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41.1", 41.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("33.4", 33.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7.75", 7.75, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord8(void) {
};
void itronCf51BemaTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("29.0", 29.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.0", 12.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28.0", 28.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf51BemaTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCf_51Test );

MBusRecord* itronCf_51Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCf_51Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCf_51Test::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCf_51Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11155185.0", 11155185.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("99999900.0", 99999900.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("999.9", 999.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("999.9", 999.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("9999.99", 9999.99, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord8(void) {
};
void itronCf_51Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("104.0", 104.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11.0", 11.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("26.0", 26.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("321.0", 321.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.23", 1.23, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCf_55Test );

MBusRecord* itronCf_55Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCf_55Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCf_55Test::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCf_55Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11127667.0", 11127667.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("99999900.0", 99999900.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("999.9", 999.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("999.9", 999.9, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("9999.99", 9999.99, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord8(void) {
};
void itronCf_55Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("252.0", 252.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10.0", 10.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.0", 21.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCfEcho_2Test );

MBusRecord* itronCfEcho_2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCfEcho_2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCfEcho_2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCfEcho_2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11100091.0", 11100091.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("99999900.0", 99999900.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("999.999", 999.999, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.5", 20.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.6", 20.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.09", 0.09, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord8(void) {
};
void itronCfEcho_2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("385.0", 385.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19.0", 19.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("45.0", 45.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCybleMBusV1_4ColdWaterTest );

MBusRecord* itronCybleMBusV1_4ColdWaterTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCybleMBusV1_4ColdWaterTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCybleMBusV1_4ColdWaterTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCybleMBusV1_4ColdWaterTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10020380.0", 10020380.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord1(void) {
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord2(void) {
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4050.0", 4050.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("453.5", 453.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("453.5", 453.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCybleMBusV1_4GasTest );

MBusRecord* itronCybleMBusV1_4GasTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCybleMBusV1_4GasTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCybleMBusV1_4GasTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCybleMBusV1_4GasTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10020387.0", 10020387.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord1(void) {
};
void itronCybleMBusV1_4GasTest::TestRecord2(void) {
};
void itronCybleMBusV1_4GasTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4050.0", 4050.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.26", 0.26, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.25", 0.25, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronCybleMBusV1_4WaterTest );

MBusRecord* itronCybleMBusV1_4WaterTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronCybleMBusV1_4WaterTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronCybleMBusV1_4WaterTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronCybleMBusV1_4WaterTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12000071.0", 12000071.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord1(void) {
};
void itronCybleMBusV1_4WaterTest::TestRecord2(void) {
};
void itronCybleMBusV1_4WaterTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4338.0", 4338.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("123.49", 123.49, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.2", 0.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( itronIntegralMkMaxxTest );

MBusRecord* itronIntegralMkMaxxTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void itronIntegralMkMaxxTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void itronIntegralMkMaxxTest::tearDown() {
  delete frame;
  frame = NULL;
};

void itronIntegralMkMaxxTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11817314.0", 11817314.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.02", 0.02, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.2", 21.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.1", 21.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.07", 0.07, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("397.0", 397.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord9(void) {
};
void itronIntegralMkMaxxTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.23", 1.23, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.21", 3.21, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.0", 3.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("18.0", 18.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( kam_114F1Test );

MBusRecord* kam_114F1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void kam_114F1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void kam_114F1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void kam_114F1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("69104310.0", 69104310.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4505160000.0", 4505160000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("109006.2", 109006.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("40751.0", 40751.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("82.3", 82.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28.13", 28.13, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("54.17", 54.17, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("54100.0", 54100.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("313700.0", 313700.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.864", 0.864, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10.907", 10.907, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord16(void) {
};
void kam_114F1Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4043790000.0", 4043790000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("98089.0", 98089.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("295400.0", 295400.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11.256", 11.256, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kam_114F1Test::TestRecord26(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( kamstrup_382_005Test );

MBusRecord* kamstrup_382_005Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void kamstrup_382_005Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void kamstrup_382_005Test::tearDown() {
  delete frame;
  frame = NULL;
};

void kamstrup_382_005Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("9.0", 9.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( kamstrupMultical_601Test );

MBusRecord* kamstrupMultical_601Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void kamstrupMultical_601Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void kamstrupMultical_601Test::tearDown() {
  delete frame;
  frame = NULL;
};

void kamstrupMultical_601Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6855817.0", 6855817.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("37351000.0", 37351000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("561.08", 561.08, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("985.0", 985.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("101.69", 101.69, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("46.16", 46.16, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("55.53", 55.53, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("34700.0", 34700.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44800.0", 44800.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.543", 0.543, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.628", 0.628, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord16(void) {
};
void kamstrupMultical_601Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("33361000.0", 33361000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("500.98", 500.98, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("55000.0", 55000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.027", 1.027, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord26(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( landisGyrUltraheatT230Test );

MBusRecord* landisGyrUltraheatT230Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void landisGyrUltraheatT230Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void landisGyrUltraheatT230Test::tearDown() {
  delete frame;
  frame = NULL;
};

void landisGyrUltraheatT230Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.0", 4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8.0", 8.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19.5", 19.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19.7", 19.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-0.2", -0.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("66660205.0", 66660205.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7.0", 7.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3769.0", 3769.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3769.0", 3769.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("30.7", 30.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("50.7", 50.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41065374.6", 41065374.6, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("40953732.3", 40953732.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3469.0", 3469.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("30.7", 30.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord31(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(31);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("50.7", 50.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord32(void) {
};
void landisGyrUltraheatT230Test::TestRecord33(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( LGBG350Test );

MBusRecord* LGBG350Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void LGBG350Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void LGBG350Test::tearDown() {
  delete frame;
  frame = NULL;
};

void LGBG350Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10834.092", 10834.092, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.67873347584e+11", 1.67873347584e+11, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord2(void) {
};
void LGBG350Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.0", 1.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("15.0", 15.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( manualFrame2Test );

MBusRecord* manualFrame2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void manualFrame2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void manualFrame2Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( manualFrame3Test );

MBusRecord* manualFrame3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void manualFrame3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void manualFrame3Test::tearDown() {
  delete frame;
  frame = NULL;
};

void manualFrame3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void manualFrame3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void manualFrame3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("218370.0", 218370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( manualFrame7Test );

MBusRecord* manualFrame7Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void manualFrame7Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void manualFrame7Test::tearDown() {
  delete frame;
  frame = NULL;
};

void manualFrame7Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1020304.0", 1020304.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( metronaPolluthermTest );

MBusRecord* metronaPolluthermTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void metronaPolluthermTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void metronaPolluthermTest::tearDown() {
  delete frame;
  frame = NULL;
};

void metronaPolluthermTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44950146.0", 44950146.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaPolluthermTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44950146.0", 44950146.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( metronaUltraheatXsTest );

MBusRecord* metronaUltraheatXsTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void metronaUltraheatXsTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void metronaUltraheatXsTest::tearDown() {
  delete frame;
  frame = NULL;
};

void metronaUltraheatXsTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.0", 4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.0", 4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19969000.0", 19969000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("26492.18", 26492.18, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("26492.18", 26492.18, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19969000.0", 19969000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("65110054.0", 65110054.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("60.0", 60.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31600.0", 31600.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31600.0", 31600.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8.82", 8.82, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44.0", 44.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("40.0", 40.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("70067.0", 70067.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("51609.0", 51609.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("47817.0", 47817.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord21(void) {
};
void metronaUltraheatXsTest::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("36.0", 36.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("40.0", 40.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord31(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(31);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("51465.0", 51465.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord33(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(33);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19969000.0", 19969000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord34(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(34);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord35(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(35);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord36(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(36);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord37(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(37);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("26492.18", 26492.18, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord38(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( minolMinocalC2Test );

MBusRecord* minolMinocalC2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void minolMinocalC2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void minolMinocalC2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void minolMinocalC2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord2(void) {
};
void minolMinocalC2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.073", 0.073, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.043", 0.043, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord8(void) {
};
void minolMinocalC2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2000.0", 2000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord11(void) {
};
void minolMinocalC2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.09", 20.09, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("19.27", 19.27, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord14(void) {
};
void minolMinocalC2Test::TestRecord15(void) {
};
void minolMinocalC2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord17(void) {
};
void minolMinocalC2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord19(void) {
};
void minolMinocalC2Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord21(void) {
};
void minolMinocalC2Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord23(void) {
};
void minolMinocalC2Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord25(void) {
};
void minolMinocalC2Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord27(void) {
};
void minolMinocalC2Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord29(void) {
};
void minolMinocalC2Test::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord31(void) {
};
void minolMinocalC2Test::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord33(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(33);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( minolMinocalWr3Test );

MBusRecord* minolMinocalWr3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void minolMinocalWr3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void minolMinocalWr3Test::tearDown() {
  delete frame;
  frame = NULL;
};

void minolMinocalWr3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.01", 0.01, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord7(void) {
};
void minolMinocalWr3Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord9(void) {
};
void minolMinocalWr3Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.01", 0.01, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord11(void) {
};
void minolMinocalWr3Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7.0", 7.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("7.0", 7.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.0", 4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord21(void) {
};
void minolMinocalWr3Test::TestRecord22(void) {
};
void minolMinocalWr3Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.001", 0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord26(void) {
};
void minolMinocalWr3Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( nzrDhz_5_63Test );

MBusRecord* nzrDhz_5_63Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void nzrDhz_5_63Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void nzrDhz_5_63Test::tearDown() {
  delete frame;
  frame = NULL;
};

void nzrDhz_5_63Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1274.0", 1274.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1274.0", 1274.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("237.2", 237.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("30100608.0", 30100608.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( omsFrame1Test );

MBusRecord* omsFrame1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void omsFrame1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void omsFrame1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void omsFrame1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28504.27", 28504.27, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame1Test::TestRecord1(void) {
};
void omsFrame1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( omsFrame2Test );

MBusRecord* omsFrame2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void omsFrame2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void omsFrame2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void omsFrame2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2850.427", 2850.427, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.127", 0.127, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1445.419", 1445.419, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame2Test::TestRecord3(void) {
};
void omsFrame2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( omsFrame3Test );

MBusRecord* omsFrame3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void omsFrame3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void omsFrame3Test::tearDown() {
  delete frame;
  frame = NULL;
};

void omsFrame3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2850427000.0", 2850427000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("703.476", 703.476, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1445419000.0", 1445419000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord3(void) {
};
void omsFrame3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.127", 0.127, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("329.7", 329.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44.3", 44.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("25.1", 25.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfData1Test );

MBusRecord* prematureEndOfData1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfData1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfData1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void prematureEndOfData1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfData1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfData1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("17270.0", 17270.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfData2Test );

MBusRecord* prematureEndOfData2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfData2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfData2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void prematureEndOfData2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfData2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfData2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1618370.0", 1618370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfDif1Test );

MBusRecord* prematureEndOfDif1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfDif1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfDif1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void prematureEndOfDif1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfDif1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfDif1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfDif2Test );

MBusRecord* prematureEndOfDif2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfDif2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfDif2Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfVarVif1Test );

MBusRecord* prematureEndOfVarVif1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfVarVif1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfVarVif1Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( prematureEndOfVif1Test );

MBusRecord* prematureEndOfVif1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void prematureEndOfVif1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void prematureEndOfVif1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void prematureEndOfVif1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfVif1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfVif1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( ramModularisTest );

MBusRecord* ramModularisTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ramModularisTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ramModularisTest::tearDown() {
  delete frame;
  frame = NULL;
};

void ramModularisTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10.116", 10.116, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord1(void) {
};
void ramModularisTest::TestRecord2(void) {
};
void ramModularisTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8.393", 8.393, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord4(void) {
};
void ramModularisTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("25776.0", 25776.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord6(void) {
};
void ramModularisTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8.527", 8.527, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord8(void) {
};
void ramModularisTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("99999.995", 99999.995, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord10(void) {
};
void ramModularisTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("99999.993", 99999.993, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord12(void) {
};
void ramModularisTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.782", 0.782, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord14(void) {
};
void ramModularisTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.929", 1.929, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord16(void) {
};
void ramModularisTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.092", 3.092, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord18(void) {
};
void ramModularisTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.661", 4.661, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord20(void) {
};
void ramModularisTest::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4.767", 4.767, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord22(void) {
};
void ramModularisTest::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5.124", 5.124, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord24(void) {
};
void ramModularisTest::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5.176", 5.176, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord26(void) {
};
void ramModularisTest::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5.246", 5.246, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord28(void) {
};
void ramModularisTest::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5.668", 5.668, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( RELRelayPadpuls2Test );

MBusRecord* RELRelayPadpuls2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void RELRelayPadpuls2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void RELRelayPadpuls2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void RELRelayPadpuls2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28760.81", 28760.81, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord1(void) {
};
void RELRelayPadpuls2Test::TestRecord2(void) {
};
void RELRelayPadpuls2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("25973.82", 25973.82, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord4(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( relPadpuls2Test );

MBusRecord* relPadpuls2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void relPadpuls2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void relPadpuls2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void relPadpuls2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord1(void) {
};
void relPadpuls2Test::TestRecord2(void) {
};
void relPadpuls2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord4(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( relPadpuls3Test );

MBusRecord* relPadpuls3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void relPadpuls3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void relPadpuls3Test::tearDown() {
  delete frame;
  frame = NULL;
};

void relPadpuls3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1987.0", 1987.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord1(void) {
};
void relPadpuls3Test::TestRecord2(void) {
};
void relPadpuls3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1302.0", 1302.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord4(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( rspUdExampleTest );

MBusRecord* rspUdExampleTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void rspUdExampleTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void rspUdExampleTest::tearDown() {
  delete frame;
  frame = NULL;
};

void rspUdExampleTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void rspUdExampleTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void rspUdExampleTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("218370.0", 218370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( SBCSaiaBurgessALE3Test );

MBusRecord* SBCSaiaBurgessALE3Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void SBCSaiaBurgessALE3Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void SBCSaiaBurgessALE3Test::tearDown() {
  delete frame;
  frame = NULL;
};

void SBCSaiaBurgessALE3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2930.0", 2930.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2930.0", 2930.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("60.0", 60.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("60.0", 60.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("223.0", 223.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord16(void) {
};
void SBCSaiaBurgessALE3Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord19(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( senPollusonic_2Test );

MBusRecord* senPollusonic_2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void senPollusonic_2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void senPollusonic_2Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( SENPollustatTest );

MBusRecord* SENPollustatTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void SENPollustatTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void SENPollustatTest::tearDown() {
  delete frame;
  frame = NULL;
};

void SENPollustatTest::TestRecord0(void) {
};
void SENPollustatTest::TestRecord1(void) {
};
void SENPollustatTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("67108864.0", 67108864.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("15803026.0", 15803026.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("15145636.0", 15145636.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("39831000.0", 39831000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6162.878", 6162.878, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-170.721784234", -170.721784234, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.2300388813", 3.2300388813, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31.1473236084", 31.1473236084, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31.1930999756", 31.1930999756, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-0.0457763671875", -0.0457763671875, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11582321.0", 11582321.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("756.0", 756.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11788.0", 11788.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord15(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( senPolluthermTest );

MBusRecord* senPolluthermTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void senPolluthermTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void senPolluthermTest::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( SENSensusPolluStatETest );

MBusRecord* SENSensusPolluStatETest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void SENSensusPolluStatETest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void SENSensusPolluStatETest::tearDown() {
  delete frame;
  frame = NULL;
};

void SENSensusPolluStatETest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.1", 20.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.2", 20.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21265095.0", 21265095.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluStatETest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21265095.0", 21265095.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( SENSensusPolluThermTest );

MBusRecord* SENSensusPolluThermTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void SENSensusPolluThermTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void SENSensusPolluThermTest::tearDown() {
  delete frame;
  frame = NULL;
};

void SENSensusPolluThermTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24351689.0", 24351689.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENSensusPolluThermTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("24351689.0", 24351689.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( siemensRvd235Test );

MBusRecord* siemensRvd235Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void siemensRvd235Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void siemensRvd235Test::tearDown() {
  delete frame;
  frame = NULL;
};

void siemensRvd235Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("47120.0", 47120.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensRvd235Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.93280672764e+11", 1.93280672764e+11, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensRvd235Test::TestRecord2(void) {
};
void siemensRvd235Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.0", 1.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensRvd235Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensRvd235Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( siemensWaterTest );

MBusRecord* siemensWaterTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void siemensWaterTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void siemensWaterTest::tearDown() {
  delete frame;
  frame = NULL;
};

void siemensWaterTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.101", 0.101, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20952.0", 20952.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord2(void) {
};
void siemensWaterTest::TestRecord3(void) {
};
void siemensWaterTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8021382.0", 8021382.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.17325351732e+12", 2.17325351732e+12, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord6(void) {
};
void siemensWaterTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( siemensWfh21Test );

MBusRecord* siemensWfh21Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void siemensWfh21Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void siemensWfh21Test::tearDown() {
  delete frame;
  frame = NULL;
};

void siemensWfh21Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("44086.0", 44086.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord2(void) {
};
void siemensWfh21Test::TestRecord3(void) {
};
void siemensWfh21Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("8006491.0", 8006491.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.17325351732e+12", 2.17325351732e+12, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord6(void) {
};
void siemensWfh21Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord9(void) {
};

CPPUNIT_TEST_SUITE_REGISTRATION( SLBCFCompactIntegralMKMaXXTest );

MBusRecord* SLBCFCompactIntegralMKMaXXTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void SLBCFCompactIntegralMKMaXXTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void SLBCFCompactIntegralMKMaXXTest::tearDown() {
  delete frame;
  frame = NULL;
};

void SLBCFCompactIntegralMKMaXXTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11817314.0", 11817314.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.02", 0.02, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.8", 21.8, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.0", 22.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("-0.18", -0.18, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1176.0", 1176.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord9(void) {
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1.23", 1.23, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.21", 3.21, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3.0", 3.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("18.0", 18.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( sontexSupercal_531Telegram1Test );

MBusRecord* sontexSupercal_531Telegram1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void sontexSupercal_531Telegram1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void sontexSupercal_531Telegram1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void sontexSupercal_531Telegram1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void sontexSupercal_531Telegram1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( svm_114F1Test );

MBusRecord* svm_114F1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void svm_114F1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void svm_114F1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void svm_114F1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("374560000.0", 374560000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5318.57", 5318.57, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5318.51", 5318.51, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("87.0", 87.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21.0", 21.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("66.4", 66.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3453.0", 3453.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3453.0", 3453.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.157", 2.157, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("165300.0", 165300.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord10(void) {
};
void svm_114F1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F1Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( svm_114F2Test );

MBusRecord* svm_114F2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void svm_114F2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void svm_114F2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void svm_114F2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("1159745000.0", 1159745000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("18955.25", 18955.25, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("18955.15", 18955.15, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("84.0", 84.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("31.0", 31.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("52.7", 52.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("45602.0", 45602.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("45602.0", 45602.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.198", 0.198, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("11730.0", 11730.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord10(void) {
};
void svm_114F2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_114F2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( svm_121F1Test );

MBusRecord* svm_121F1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void svm_121F1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void svm_121F1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void svm_121F1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3615076000.0", 3615076000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("56238.88", 56238.88, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("56238.84", 56238.84, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("71.0", 71.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("30.0", 30.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("41.2", 41.2, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21933.0", 21933.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("21931.0", 21931.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.028", 2.028, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("96130.0", 96130.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord10(void) {
};
void svm_121F1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svm_121F1Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( svmF22Telegram1Test );

MBusRecord* svmF22Telegram1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void svmF22Telegram1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void svmF22Telegram1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void svmF22Telegram1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("28014000.0", 28014000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("640.581", 640.581, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("640.581", 640.581, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("243.0", 243.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("243.0", 243.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6370.0", 6370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("6363.0", 6363.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord10(void) {
};
void svmF22Telegram1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( svmF22Telegram2Test );

MBusRecord* svmF22Telegram2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void svmF22Telegram2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void svmF22Telegram2Test::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( tchTelegramm1Test );

MBusRecord* tchTelegramm1Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void tchTelegramm1Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void tchTelegramm1Test::tearDown() {
  delete frame;
  frame = NULL;
};

void tchTelegramm1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord1(void) {
};
void tchTelegramm1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord3(void) {
};
void tchTelegramm1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("23.4", 23.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.4", 22.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.064", 0.064, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( THICma10Test );

MBusRecord* THICma10Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void THICma10Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void THICma10Test::tearDown() {
  delete frame;
  frame = NULL;
};

void THICma10Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.0", 2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("4660.0", 4660.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3782.0", 3782.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5122.0", 5122.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.62", 22.62, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.5", 22.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("23.26", 23.26, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2.0", 2.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void THICma10Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("772.0", 772.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( tooLongVarVifTest );

MBusRecord* tooLongVarVifTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void tooLongVarVifTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void tooLongVarVifTest::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( tooManyDifeTest );

MBusRecord* tooManyDifeTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void tooManyDifeTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void tooManyDifeTest::tearDown() {
  delete frame;
  frame = NULL;
};

void tooManyDifeTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooManyDifeTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooManyDifeTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("218370.0", 218370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( tooManyVifeTest );

MBusRecord* tooManyVifeTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void tooManyVifeTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void tooManyVifeTest::tearDown() {
  delete frame;
  frame = NULL;
};

void tooManyVifeTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("12.565", 12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooManyVifeTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.113", 0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooManyVifeTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("218370.0", 218370.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( tooShortHeaderTest );

MBusRecord* tooShortHeaderTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void tooShortHeaderTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void tooShortHeaderTest::tearDown() {
  delete frame;
  frame = NULL;
};


CPPUNIT_TEST_SUITE_REGISTRATION( WEPIndoorTest );

MBusRecord* WEPIndoorTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void WEPIndoorTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void WEPIndoorTest::tearDown() {
  delete frame;
  frame = NULL;
};

void WEPIndoorTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("64000449.0", 64000449.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void WEPIndoorTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("10.0", 10.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void WEPIndoorTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("30.0", 30.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void WEPIndoorTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("22.0", 22.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void WEPIndoorTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("53.1", 53.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void WEPIndoorTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( wmbusConvertedTest );

MBusRecord* wmbusConvertedTest::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void wmbusConvertedTest::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void wmbusConvertedTest::tearDown() {
  delete frame;
  frame = NULL;
};

void wmbusConvertedTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("5000.0", 5000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION( ZRMMinolMinocalC2Test );

MBusRecord* ZRMMinolMinocalC2Test::getRecord(unsigned int pos) {
 MBusDataRecord *ptr;
 if(vard == NULL) return NULL;
 ptr = vard->record;
 for(unsigned int i = 0; i < pos && ptr != NULL; i++)
   ptr = ptr->next;
 if(ptr == NULL) return NULL;
 return ptr->getRecord();
};

void ZRMMinolMinocalC2Test::setUp() {
  frame = new MBusFrame();
  frame->parse((unsigned char *)frame_data, frame_data_len);
};

void ZRMMinolMinocalC2Test::tearDown() {
  delete frame;
  frame = NULL;
};

void ZRMMinolMinocalC2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord2(void) {
};
void ZRMMinolMinocalC2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.074", 0.074, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.043", 0.043, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord8(void) {
};
void ZRMMinolMinocalC2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("2000.0", 2000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord11(void) {
};
void ZRMMinolMinocalC2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.71", 20.71, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("20.38", 20.38, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord14(void) {
};
void ZRMMinolMinocalC2Test::TestRecord15(void) {
};
void ZRMMinolMinocalC2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord17(void) {
};
void ZRMMinolMinocalC2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord19(void) {
};
void ZRMMinolMinocalC2Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord21(void) {
};
void ZRMMinolMinocalC2Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord23(void) {
};
void ZRMMinolMinocalC2Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord25(void) {
};
void ZRMMinolMinocalC2Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord27(void) {
};
void ZRMMinolMinocalC2Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord29(void) {
};
void ZRMMinolMinocalC2Test::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("3000.0", 3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord31(void) {
};
void ZRMMinolMinocalC2Test::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord33(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );


  record = getRecord(33);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL_MESSAGE("0.0", 0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

