#include <cppunit/extensions/HelperMacros.h>
#include <cstring>
#include "frame_test.h"

using namespace std;

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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1000000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbDeltaTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0742, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(14452154.3, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(152.1543, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  const string abbF95_record_7 { "2012-01-13T16:34:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-13T16:34:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbF95_record_7.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string abbF95_record_9 { "2011-04-30T23:59:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-04-30T23:59:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbF95_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string abbF95_record_10 { "2012-04-30T23:59:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-04-30T23:59:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbF95_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  const string abbF95_record_12 { "2011-12-31T23:59:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-12-31T23:59:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbF95_record_12.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbF95Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(311590800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(59070.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(100.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string abbXxx_record_9 { "B1.24.0" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("B1.24.0", 7, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbXxx_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void abbXxxTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string abbXxx_record_10 { "B24 113-100" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("B24 113-100", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(abbXxx_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11490378.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(54.321, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronBMPlusM_record_2 { "2000-00-00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-00-00", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronBMPlusM_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronBMPlusM_record_4 { "2014-03-13T11:11:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T11:11:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronBMPlusM_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronBMPlusMTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronBMPlusM_record_8 { "00 01 75 13" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 01 75 13", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronBMPlusM_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(9011523.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronCYBLEMBus_14_record_1 { "09LA076755" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("09LA076755", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronCYBLEMBus_14_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronCYBLEMBus_14_record_2 { "2014-03-13T14:26:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T14:26:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronCYBLEMBus_14_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2516.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.031, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.031, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ACWItronCYBLEMBus_14Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  const string ACWItronCYBLEMBus_14_record_7 { "00 01 1F" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 01 1F", 8, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ACWItronCYBLEMBus_14_record_7.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.3, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(128.8, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(51.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(77.23, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  const string allmessCf50_record_7 { "2012-01-12" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-12", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(allmessCf50_record_7.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(292291200.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void allmessCf50Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string allmessCf50_record_9 { "60 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("60 00", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(allmessCf50_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
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

void apatorLqm3Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  const string apatorLqm3_record_0 { "2015-05-17" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2015-05-17", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(apatorLqm3_record_0.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.44108e+11, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5633.188, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.3, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(286354800.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(838800.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void apatorLqm3Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void bergDzPlusTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(35000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(465000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.536703, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.605042, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(92.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(92.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.000707, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.357622, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(18511.912109, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  const string EDC_record_16 { "2012-07-10T15:25:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-07-10T15:25:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EDC_record_16.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EDCTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3571.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(413.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(24083345.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannElsterSensoStar_2_record_1 { "2014-03-12T14:23:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-12T14:23:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannElsterSensoStar_2_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannElsterSensoStar_2_record_11 { "2013-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannElsterSensoStar_2_record_11.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannElsterSensoStar_2_record_12 { "2014-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannElsterSensoStar_2_record_12.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannElsterSensoStar_2Test::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.025, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.09, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45273600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.1e-05, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4990254.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannWaterStar_record_1 { "2014-03-13T12:10:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T12:10:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannWaterStar_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.332, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.331, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.332, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannWaterStar_record_5 { "2013-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannWaterStar_record_5.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string EFEEngelmannWaterStar_record_6 { "2014-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(EFEEngelmannWaterStar_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EFEEngelmannWaterStarTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.07, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(102902400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8e-06, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12520.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12520.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(17744330.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(17744330.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(237.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(790.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-180.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(231.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.5, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(810.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-150.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(228.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-320.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3200.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-650.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_1Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2540.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2540.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4441280.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4441280.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(233.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(234.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(235.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void electricityMeter_2Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(144445223.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1445.223, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(63072000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string ELSElsterF96Plus_record_10 { "2014-03-13T13:09:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T13:09:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ELSElsterF96Plus_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ELSElsterF96PlusTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  const string ELSElsterF96Plus_record_15 { "2013-05-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-05-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ELSElsterF96Plus_record_15.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1234.567, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string elsFalcon_record_1 { "2007-02-06T13:58:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-02-06T13:58:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsFalcon_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string elsFalcon_record_2 { "2007-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsFalcon_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(456.951, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string elsFalcon_record_4 { "2008-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2008-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsFalcon_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.945, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string elsFalcon_record_6 { "2008-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2008-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsFalcon_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6.137, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsFalconTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string elsFalcon_record_8 { "0E 42 20 01 01 01 00 05 08 5E 01 20 3D 12 08 3D 12 08 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("0E 42 20 01 01 01 00 05 08 5E 01 20 3D 12 08 3D 12 08 00", 56, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsFalcon_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1234.567, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string elsTmpaTelegramm1_record_1 { "2007-02-06T13:58:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-02-06T13:58:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsTmpaTelegramm1_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string elsTmpaTelegramm1_record_2 { "2007-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsTmpaTelegramm1_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(456.951, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string elsTmpaTelegramm1_record_4 { "2008-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2008-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(elsTmpaTelegramm1_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void elsTmpaTelegramm1Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5272000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1204.27, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(917.69, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(28.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(34.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(149014800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(149014800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string ElsterF2_record_10 { "2013-06-29T12:12:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-06-29T12:12:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ElsterF2_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ElsterF2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(54.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(33.64, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(73.63, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.94, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(13.72, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(29.78, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(86400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.92, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.79, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(24011561.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(262144.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.64, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.52, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(58.12, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.56, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(23.39, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(86400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.76, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.69, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(54000834.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(262144.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4090.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(32629.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1364.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(7854.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(14.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(14.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(225.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(187.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(241.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-0.066, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-0.066, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(13.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(500.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void EMUEMUProfessional_375MBusTest::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(56.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10380010.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string engelmannSensostar2c_record_1 { "2012-06-06T20:50:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-06-06T20:50:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(engelmannSensostar2c_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(800000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(95.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(43.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(52.58, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(43718400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.1, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string engelmannSensostar2c_record_14 { "2011-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(engelmannSensostar2c_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(800000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  const string engelmannSensostar2c_record_19 { "2010-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2010-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(engelmannSensostar2c_record_19.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void engelmannSensostar2cTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(500000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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

void exampleData_01Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1389817000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_01Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(504647.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_01Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_01Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_01Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(41.737434, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_01Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(35.46365, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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

void exampleData_02Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1389817000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_02Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(504647.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_02Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_02Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_02Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(41.211052, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void exampleData_02Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(35.385593, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1728680.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1728680.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(230.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(90.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-30.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(218370.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(86.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(95.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(105.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.957, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.055, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.15, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(224.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-202.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(103880.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(150000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(201590.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(250000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(300910.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(350000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(402370.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(450000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(224.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(202.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(182007.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(269.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

/*
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

void invalidLength2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void invalidLength2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
*/

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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11490378.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(54.321, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string itronBm_M_record_2 { "2000-00-00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-00-00", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronBm_M_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string itronBm_M_record_4 { "2012-01-24T13:29:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T13:29:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronBm_M_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronBm_MTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string itronBm_M_record_8 { "00 00 8F 13" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 00 8F 13", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronBm_M_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11155185.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(99999900.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(999.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(999.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(9999.99, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCf_51_record_8 { "2012-01-24T13:24:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T13:24:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCf_51_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8985600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(26.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(321.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.23, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_51Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCf_51_record_15 { "03 20" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("03 20", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCf_51_record_15.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11127667.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(99999900.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(999.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(999.9, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(9999.99, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCf_55_record_8 { "2012-01-24T11:47:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T11:47:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCf_55_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21772800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCf_55Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCf_55_record_12 { "03 20" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("03 20", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCf_55_record_12.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11100091.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(99999900.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(999.999, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.5, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.09, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCfEcho_2_record_8 { "2012-01-24T13:29:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T13:29:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCfEcho_2_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(33264000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCfEcho_2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCfEcho_2_record_12 { "20 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("20 00", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCfEcho_2_record_12.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
/*
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10020380.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCybleMBusV1_4ColdWater_record_1 { "2011-10-25T15:39:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-10-25T15:39:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4ColdWater_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4050.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4ColdWaterTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(453.5, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(453.5, record->value->real_val, 0.000001);
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
  const string itronCybleMBusV1_4ColdWater_record_6 { "00 04 1F" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 04 1F", 8, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4ColdWater_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10020387.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCybleMBusV1_4Gas_record_1 { "2011-10-25T15:43:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-10-25T15:43:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4Gas_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4050.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4GasTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.26, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.25, record->value->real_val, 0.000001);
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
  const string itronCybleMBusV1_4Gas_record_6 { "00 02 1F" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 02 1F", 8, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4Gas_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
*/
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12000071.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCybleMBusV1_4Water_record_1 { "TEST CYBLE" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("TEST CYBLE", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4Water_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCybleMBusV1_4Water_record_2 { "2012-01-24T13:43:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T13:43:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4Water_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4338.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(123.49, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronCybleMBusV1_4WaterTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  const string itronCybleMBusV1_4Water_record_7 { "10 01 1F" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("10 01 1F", 8, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronCybleMBusV1_4Water_record_7.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11817314.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.02, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.07, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(34300800.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string itronIntegralMkMaxx_record_9 { "2012-01-24T14:17:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-24T14:17:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronIntegralMkMaxx_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.23, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.21, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(18.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void itronIntegralMkMaxxTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string itronIntegralMkMaxx_record_14 { "00 16" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 16", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(itronIntegralMkMaxx_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(32400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrup_382_005Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string kamstrup_382_005_record_6 { "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 10" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 10", 47, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(kamstrup_382_005_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6855817.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(37351000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(561.08, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3546000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(101.69, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(46.16, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(55.53, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(34700.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(44800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.543, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.628, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  const string kamstrupMultical_601_record_16 { "2011-01-05T15:26:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-01-05T15:26:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(kamstrupMultical_601_record_16.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(33361000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(500.98, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(55000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.027, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  const string kamstrupMultical_601_record_26 { "2010-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2010-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(kamstrupMultical_601_record_26.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void kamstrupMultical_601Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  const string kamstrupMultical_601_record_27 { "00 00 00 00 E7 E4 00 00 63 66 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5B C9 A5 02 34 53 00 00 E0 B2 03 00 89 9C 68 00 00 00 00 00 01 00 01 07 07 09 01 03 00 00 00 00 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 00 00 00 E7 E4 00 00 63 66 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5B C9 A5 02 34 53 00 00 E0 B2 03 00 89 9C 68 00 00 00 00 00 01 00 01 07 07 09 01 03 00 00 00 00 00", 170, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(kamstrupMultical_601_record_27.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19.5, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(150000.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(66660205.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(420.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(13568400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(13568400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(30.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(50.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(41065374.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(40953732.3, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12488400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(30.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(50.7, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  const string landisGyrUltraheatT230_record_32 { "2127-01-01T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2127-01-01T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(landisGyrUltraheatT230_record_32.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord33(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(33);
  CPPUNIT_ASSERT( record != NULL );
  const string landisGyrUltraheatT230_record_33 { "2012-01-13T12:04:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-13T12:04:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(landisGyrUltraheatT230_record_33.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void landisGyrUltraheatT230Test::TestRecord34(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(34);
  CPPUNIT_ASSERT( record != NULL );
  const string landisGyrUltraheatT230_record_34 { "09 07 00 66 01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("09 07 00 66 01", 14, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(landisGyrUltraheatT230_record_34.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10834.092, record->value->real_val, 0.000001);
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
  const string LGBG350_record_1 { "2016-07-22T08:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2016-07-22T08:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(LGBG350_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string LGBG350_record_2 { "G0017591208205814" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("G0017591208205814", 17, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(LGBG350_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void LGBG350Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(15.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

/*
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

void manualFrame2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void manualFrame2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(135.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(218370.0, record->value->real_val, 0.000001);
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
*/

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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(44950146.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(44950146.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19969000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(26492.18, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(26492.18, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19969000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(65110054.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(31600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(31600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8.82, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(44.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(40.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(252241200.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(185792400.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(172141200.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  const string metronaUltraheatXs_record_21 { "2000-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(metronaUltraheatXs_record_21.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(36.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(40.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(185274000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19969000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(26492.18, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord38(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(38);
  CPPUNIT_ASSERT( record != NULL );
  const string metronaUltraheatXs_record_38 { "2012-06-07T00:38:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-06-07T00:38:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(metronaUltraheatXs_record_38.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void metronaUltraheatXsTest::TestRecord39(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(39);
  CPPUNIT_ASSERT( record != NULL );
  const string metronaUltraheatXs_record_39 { "03 02 00 00 23" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("03 02 00 00 23", 14, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(metronaUltraheatXs_record_39.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_2 { "2013-01-01T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-01-01T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.073, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.043, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_8 { "2011-09-01T08:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-01T08:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_11 { "2011-09-01T08:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-01T08:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_11.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.09, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(19.27, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_14 { "2012-01-13T11:53:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-13T11:53:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_15 { "2012-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_15.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_17 { "2011-12-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-12-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_17.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_19 { "2011-11-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-11-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_19.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_21 { "2011-10-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-10-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_21.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_23 { "2011-09-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_23.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_25 { "2011-08-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-08-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_25.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_27 { "2011-07-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-07-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_27.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_29 { "2011-06-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-06-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_29.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord31(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(31);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalC2_record_31 { "2012-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalC2_record_31.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalC2Test::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.01, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_7 { "2012-01-01T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-01T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_7.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_9 { "2012-01-13T11:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-13T11:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.01, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_11 { "2011-03-24T07:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-03-24T07:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_11.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(7.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(7.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_21 { "2012-01-13T12:01:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-13T12:01:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_21.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_22 { "2012-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_22.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.001, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  const string minolMinocalWr3_record_26 { "2012-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(minolMinocalWr3_record_26.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void minolMinocalWr3Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1274.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1274.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(237.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(30100608.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void nzrDhz_5_63Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string nzrDhz_5_63_record_6 { "0E" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("0E", 2, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(nzrDhz_5_63_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(28504.27, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string omsFrame1_record_1 { "2008-05-31T23:50:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2008-05-31T23:50:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(omsFrame1_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2850.427, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.127, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1445.419, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  const string omsFrame2_record_3 { "2007-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(omsFrame2_record_3.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2850427000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(703.476, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1445419000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  const string omsFrame3_record_3 { "2007-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2007-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(omsFrame3_record_3.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void omsFrame3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.127, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(329.7, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(44.3, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(25.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

/*
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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

void prematureEndOfDif2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfDif2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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

void prematureEndOfVarVif1Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfVarVif1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.64, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void prematureEndOfVarVif1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.52, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
*/

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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(10.116, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_1 { "2013-10-18T21:40:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-10-18T21:40:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_2 { "2013-09-28" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-09-28", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8.393, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_4 { "2014-09-28" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-09-28", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(25776.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_6 { "2013-09-30" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-09-30", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8.527, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_8 { "2012-10-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-10-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(99999.995, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_10 { "2012-11-30" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-11-30", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(99999.993, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_12 { "2012-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2012-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_12.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord13(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(13);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.782, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_14 { "2013-01-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-01-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.929, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_16 { "2013-02-28" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-02-28", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_16.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.092, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_18 { "2013-03-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-03-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_18.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.661, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_20 { "2013-04-30" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-04-30", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_20.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(4.767, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_22 { "2013-05-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-05-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_22.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.124, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_24 { "2013-06-30" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-06-30", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_24.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.176, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_26 { "2013-07-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-07-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_26.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.246, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_28 { "2013-08-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-08-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_28.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(5.668, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ramModularisTest::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  const string ramModularis_record_30 { "01 00 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("01 00 00", 8, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ramModularis_record_30.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(28760.81, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string RELRelayPadpuls2_record_1 { "1900-01-00T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("1900-01-00T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(RELRelayPadpuls2_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string RELRelayPadpuls2_record_2 { "2014-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(RELRelayPadpuls2_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(25973.82, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string RELRelayPadpuls2_record_4 { "2015-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2015-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(RELRelayPadpuls2_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void RELRelayPadpuls2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  const string RELRelayPadpuls2_record_5 { "C0 01 01 0C" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("C0 01 01 0C", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(RELRelayPadpuls2_record_5.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls2_record_1 { "2001-09-20T13:16:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2001-09-20T13:16:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls2_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls2_record_2 { "2000-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls2_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls2_record_4 { "2001-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2001-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls2_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls2Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls2_record_5 { "43 01 01 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("43 01 01 00", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls2_record_5.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1987.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls3_record_1 { "2000-12-31T10:41:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-12-31T10:41:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls3_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls3_record_2 { "2000-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls3_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1302.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls3_record_4 { "2001-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2001-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls3_record_4.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void relPadpuls3Test::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  const string relPadpuls3_record_5 { "C0 01 01 0C" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("C0 01 01 0C", 11, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(relPadpuls3_record_5.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2930.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2930.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(60.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(60.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(223.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SBCSaiaBurgessALE3Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

/*
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

void senPollusonic_2Test::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6531.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPollusonic_2Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(69.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
*/
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
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  const string SENPollustat_record_0 { "2015-04-07T14:59:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2015-04-07T14:59:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(SENPollustat_record_0.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string SENPollustat_record_1 { "2000-01-01T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-01-01T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(SENPollustat_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(67108864.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(15803026.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(15145636.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(39831000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(6162.878, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-170.721784, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.230039, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(31.147324, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(31.1931, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-0.045776, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11582321.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(756.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11788.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SENPollustatTest::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(-19184.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
/*
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

void senPolluthermTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8640000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(7998.92, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(54580.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(75.5, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(59.4, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord5(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(5);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(16.076, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21050076.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void senPolluthermTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21050076.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
*/

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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.1, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.2, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21265095.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21265095.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(24351689.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(24351689.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.101, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(75427200.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWater_record_2 { "2011-09-14T08:56:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-14T08:56:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWater_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWater_record_3 { "2000-00-00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-00-00", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWater_record_3.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8021382.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2173253517322, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWater_record_6 { "WFH21" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("WFH21", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWater_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWaterTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWater_record_9 { "37 FD 17 00 00 00 00 00 00 00 00 02 7A 0D 00 02 78 0D 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("37 FD 17 00 00 00 00 00 00 00 00 02 7A 0D 00 02 78 0D 00", 56, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWater_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(158709600.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWfh21_record_2 { "2011-12-01T10:36:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-12-01T10:36:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWfh21_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWfh21_record_3 { "2000-00-00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-00-00", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWfh21_record_3.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(8006491.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2173253517322, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord6(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(6);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWfh21_record_6 { "WFH21" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("WFH21", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWfh21_record_6.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord7(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(7);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWfh21_record_9 { "2010-12-31" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2010-12-31", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWfh21_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void siemensWfh21Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string siemensWfh21_record_10 { "37 FD 17 00 00 00 00 00 00 00 00 02 7A 25 00 02 78 25 00" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("37 FD 17 00 00 00 00 00 00 00 00 02 7A 25 00 02 78 25 00", 56, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(siemensWfh21_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(11817314.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.02, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(21.8, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(15000.18, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(101606400.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  const string SLBCFCompactIntegralMKMaXX_record_9 { "2014-03-13T14:02:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T14:02:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(SLBCFCompactIntegralMKMaXX_record_9.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(1.23, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.21, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(18.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void SLBCFCompactIntegralMKMaXXTest::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string SLBCFCompactIntegralMKMaXX_record_14 { "00 16" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("00 16", 5, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(SLBCFCompactIntegralMKMaXX_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(28014000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(640.581, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(640.581, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(243.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(243.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22932000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22906800.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord10(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(10);
  CPPUNIT_ASSERT( record != NULL );
  const string svmF22Telegram1_record_10 { "2021-02-08T21:12:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2021-02-08T21:12:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(svmF22Telegram1_record_10.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void svmF22Telegram1Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  const string tchTelegramm1_record_1 { "2000-09-29T13:50:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-09-29T13:50:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(tchTelegramm1_record_1.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  const string tchTelegramm1_record_3 { "2000-05-29" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2000-05-29", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(tchTelegramm1_record_3.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tchTelegramm1Test::TestRecord4(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(4);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(23.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.4, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.064, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(46.6, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(37.82, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(51.22, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.62, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.5, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(23.26, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(772.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

/*
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

void tooLongVarVifTest::TestRecord0(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(0);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooLongVarVifTest::TestRecord1(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(1);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.64, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void tooLongVarVifTest::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(45.52, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(12.565, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.113, record->value->real_val, 0.000001);
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
*/


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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(64000449.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(600.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(30.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(22.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(531.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord2(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(2);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_2 { "2015-01-01T00:00:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2015-01-01T00:00:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_2.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord3(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(3);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.074, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.043, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord8(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(8);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_8 { "2011-09-01T08:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-01T08:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_8.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord9(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(9);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(2000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord11(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(11);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_11 { "2011-09-01T08:30:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2011-09-01T08:30:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_11.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord12(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(12);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.71, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(20.38, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord14(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(14);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_14 { "2014-03-13T12:45:00Z" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-13T12:45:00Z", 20, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_14.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord15(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(15);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_15 { "2014-03-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_15.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord16(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(16);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord17(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(17);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_17 { "2014-02-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-02-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_17.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord18(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(18);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord19(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(19);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_19 { "2014-01-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-01-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_19.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord20(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(20);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord21(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(21);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_21 { "2013-12-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-12-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_21.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord22(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(22);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord23(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(23);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_23 { "2013-11-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-11-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_23.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord24(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(24);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord25(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(25);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_25 { "2013-10-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-10-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_25.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord26(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(26);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord27(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(27);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_27 { "2013-09-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-09-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_27.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord28(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(28);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord29(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(29);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_29 { "2013-08-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2013-08-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_29.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord30(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(30);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(3000.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord31(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(31);
  CPPUNIT_ASSERT( record != NULL );
  const string ZRMMinolMinocalC2_record_31 { "2014-03-01" };
  CPPUNIT_ASSERT_EQUAL_MESSAGE("2014-03-01", 10, record->value->str_val.size);
  CPPUNIT_ASSERT(!strncmp(ZRMMinolMinocalC2_record_31.c_str(), record->value->str_val.value, record->value->str_val.size));
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};
void ZRMMinolMinocalC2Test::TestRecord32(void) {
  MBusRecord *record = NULL;
  vard = frame->getVariableData();

  CPPUNIT_ASSERT( vard != NULL );

  record = getRecord(32);
  CPPUNIT_ASSERT( record != NULL );
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
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
  CPPUNIT_ASSERT_DOUBLES_EQUAL(0.0, record->value->real_val, 0.000001);
  if(record != NULL) {
    delete record;
  }

  if(vard != NULL) {
    delete vard;
    vard = NULL;
  }
};

