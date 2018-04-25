#include <string.h>
#include <math.h>

#include "MBus.h"
#include "unit-test.h"
#include "frames.h"

#define NOT_NULL 1
#define assertNotNULL(a) if (a != NULL){assertTrue(true);}else{assertTrue(NULL);}


MBusRecord *get_record(MBusFrame *frame, int pos) {
    MBusDataVariable *data_var;
    MBusDataRecord *ptr;
    MBusRecord *rec = NULL;

    if(frame == NULL) {
        return NULL;
    }

    data_var = frame->getVariableData();
    if(data_var == NULL) {
        return NULL;
    }

    ptr = data_var->record;
    for(int i = 0; i < pos && ptr != NULL; i++) {
        ptr = ptr->next;
    }

    if(ptr == NULL) {
        delete data_var;
        return NULL;    
    }

    rec = ptr->getRecord();

    if(data_var != NULL) {
        delete data_var;    
    }
    
    return rec;
};


/*
 * Tests
 */

test(abb_f95_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_f95_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.0742f);
    delete rec;
}

test(abb_f95_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 14452154.3f);
    delete rec;
}

test(abb_f95_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 152.1543f);
    delete rec;
}

test(abb_f95_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 20.4f);
    delete rec;
}

test(abb_f95_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 20.4f);
    delete rec;
}

test(abb_f95_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_f95_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2012-01-13T16:34:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(abb_f95_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_f95_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2011-04-30T23:59:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(abb_f95_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2012-04-30T23:59:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(abb_f95_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_f95_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2011-12-31T23:59:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(abb_f95_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_f95_blob, abb_f95_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 311590800);
    delete rec;
}

test(abb_xxx_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 59070);
    delete rec;
}

test(abb_xxx_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 100);
    delete rec;
}

test(abb_xxx_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 5);
    delete rec;
}

test(abb_xxx_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(abb_xxx_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "B1.24.0", rec->value->str_val.size), 0);
    delete rec;
}

test(abb_xxx_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)abb_xxx_blob, abb_xxx_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "B24 113-100", rec->value->str_val.size), 0);
    delete rec;
}

test(allmess_cf50_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(allmess_cf50_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.3f);
    delete rec;
}

test(allmess_cf50_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(allmess_cf50_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(allmess_cf50_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 128.8f);
    delete rec;
}

test(allmess_cf50_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 51.6f);
    delete rec;
}

test(allmess_cf50_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 77.23f);
    delete rec;
}

test(allmess_cf50_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2012-01-12", rec->value->str_val.size), 0);
    delete rec;
}

test(allmess_cf50_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 292291200);
    delete rec;
}

test(allmess_cf50_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)allmess_cf50_blob, allmess_cf50_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "60 00", rec->value->str_val.size), 0);
    delete rec;
}

test(EDC_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 35000);
    delete rec;
}

test(EDC_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 465000);
    delete rec;
}

test(EDC_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 21.536703f);
    delete rec;
}

test(EDC_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 21.605042f);
    delete rec;
}

test(EDC_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 92);
    delete rec;
}

test(EDC_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 92);
    delete rec;
}

test(EDC_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.0f);
    delete rec;
}

test(EDC_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.36f);
    delete rec;
}

test(EDC_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 18511.912109f);
    delete rec;
}

test(EDC_record15_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 15);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(EDC_record16_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 16);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2012-07-10T15:25:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(EDC_record17_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 17);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 3571);
    delete rec;
}

test(EDC_record18_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 18);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 413);
    delete rec;
}

test(EDC_record19_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 19);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1);
    delete rec;
}

test(EDC_record20_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)EDC_blob, EDC_blob_len);
    rec = get_record(&frame, 20);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1);
    delete rec;
}

test(electricity_meter_1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 12520);
    delete rec;
}

test(electricity_meter_1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 12520);
    delete rec;
}

test(electricity_meter_1_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 17744330);
    delete rec;
}

test(electricity_meter_1_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 17744330);
    delete rec;
}

test(electricity_meter_1_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 237);
    delete rec;
}

test(electricity_meter_1_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 3.2f);
    delete rec;
}

test(electricity_meter_1_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 790);
    delete rec;
}

test(electricity_meter_1_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, -180);
    delete rec;
}

test(electricity_meter_1_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 231);
    delete rec;
}

test(electricity_meter_1_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 3.5f);
    delete rec;
}

test(electricity_meter_1_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 810);
    delete rec;
}

test(electricity_meter_1_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, -150);
    delete rec;
}

test(electricity_meter_1_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 228);
    delete rec;
}

test(electricity_meter_1_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 6.9f);
    delete rec;
}

test(electricity_meter_1_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1600);
    delete rec;
}

test(electricity_meter_1_record15_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 15);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, -320);
    delete rec;
}

test(electricity_meter_1_record16_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 16);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_1_record17_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 17);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 3200);
    delete rec;
}

test(electricity_meter_1_record18_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 18);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, -650);
    delete rec;
}

test(electricity_meter_1_record19_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_1_blob, electricity_meter_1_blob_len);
    rec = get_record(&frame, 19);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 4);
    delete rec;
}

test(electricity_meter_2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 2540);
    delete rec;
}

test(electricity_meter_2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 2540);
    delete rec;
}

test(electricity_meter_2_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 4441280);
    delete rec;
}

test(electricity_meter_2_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 4441280);
    delete rec;
}

test(electricity_meter_2_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 233);
    delete rec;
}

test(electricity_meter_2_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.1f);
    delete rec;
}

test(electricity_meter_2_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 234);
    delete rec;
}

test(electricity_meter_2_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 235);
    delete rec;
}

test(electricity_meter_2_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.1f);
    delete rec;
}

test(electricity_meter_2_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record15_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 15);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record16_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 16);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record17_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 17);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record18_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 18);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(electricity_meter_2_record19_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)electricity_meter_2_blob, electricity_meter_2_blob_len);
    rec = get_record(&frame, 19);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 4);
    delete rec;
}

test(els_falcon_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1234.567f);
    delete rec;
}

test(els_falcon_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2007-02-06T13:58:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(els_falcon_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2007-01-01", rec->value->str_val.size), 0);
    delete rec;
}

test(els_falcon_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 456.951f);
    delete rec;
}

test(els_falcon_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2008-01-01", rec->value->str_val.size), 0);
    delete rec;
}

test(els_falcon_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 5.945f);
    delete rec;
}

test(els_falcon_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2008-01-01", rec->value->str_val.size), 0);
    delete rec;
}

test(els_falcon_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 6.137f);
    delete rec;
}

test(els_falcon_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_falcon_blob, els_falcon_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "0E 42 20 01 01 01 00 05 08 5E 01 20 3D 12 08 3D 12 08 00", rec->value->str_val.size), 0);
    delete rec;
}

test(Elster_F2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 5272000);
    delete rec;
}

test(Elster_F2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1204.27f);
    delete rec;
}

test(Elster_F2_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 917.69f);
    delete rec;
}

test(Elster_F2_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 28);
    delete rec;
}

test(Elster_F2_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 34);
    delete rec;
}

test(Elster_F2_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(Elster_F2_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 149014800);
    delete rec;
}

test(Elster_F2_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 149014800);
    delete rec;
}

test(Elster_F2_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(Elster_F2_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(Elster_F2_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2013-06-29T12:12:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(Elster_F2_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(Elster_F2_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)Elster_F2_blob, Elster_F2_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(els_tmpa_telegramm1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1234.567f);
    delete rec;
}

test(els_tmpa_telegramm1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2007-02-06T13:58:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(els_tmpa_telegramm1_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2007-01-01", rec->value->str_val.size), 0);
    delete rec;
}

test(els_tmpa_telegramm1_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 456.951f);
    delete rec;
}

test(els_tmpa_telegramm1_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2008-01-01", rec->value->str_val.size), 0);
    delete rec;
}

test(els_tmpa_telegramm1_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)els_tmpa_telegramm1_blob, els_tmpa_telegramm1_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(elv_temp_humid_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(elv_temp_humid_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.64f);
    delete rec;
}

test(elv_temp_humid_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.52f);
    delete rec;
}

test(elv_temp_humid_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 58.12f);
    delete rec;
}

test(elv_temp_humid_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 22.56f);
    delete rec;
}

test(elv_temp_humid_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 21.6f);
    delete rec;
}

test(elv_temp_humid_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 23.39f);
    delete rec;
}

test(elv_temp_humid_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 86400);
    delete rec;
}

test(elv_temp_humid_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 22.76f);
    delete rec;
}

test(elv_temp_humid_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 22.69f);
    delete rec;
}

test(elv_temp_humid_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 54000834);
    delete rec;
}

test(elv_temp_humid_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)elv_temp_humid_blob, elv_temp_humid_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 262144);
    delete rec;
}

test(emh_diz_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)emh_diz_blob, emh_diz_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 4090);
    delete rec;
}

test(emh_diz_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)emh_diz_blob, emh_diz_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(emh_diz_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)emh_diz_blob, emh_diz_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(frame2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)frame2_blob, frame2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(frame2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)frame2_blob, frame2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(frame2_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)frame2_blob, frame2_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 218370);
    delete rec;
}

test(gmc_emmod206_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 86.4f);
    delete rec;
}

test(gmc_emmod206_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 95.9f);
    delete rec;
}

test(gmc_emmod206_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 105.6f);
    delete rec;
}

test(gmc_emmod206_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.957f);
    delete rec;
}

test(gmc_emmod206_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1.055f);
    delete rec;
}

test(gmc_emmod206_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1.15f);
    delete rec;
}

test(gmc_emmod206_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 224);
    delete rec;
}

test(gmc_emmod206_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, -202);
    delete rec;
}

test(gmc_emmod206_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 103880);
    delete rec;
}

test(gmc_emmod206_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 150000);
    delete rec;
}

test(gmc_emmod206_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 201590);
    delete rec;
}

test(gmc_emmod206_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 250000);
    delete rec;
}

test(gmc_emmod206_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 300910);
    delete rec;
}

test(gmc_emmod206_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 350000);
    delete rec;
}

test(gmc_emmod206_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 402370);
    delete rec;
}

test(gmc_emmod206_record15_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 15);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 450000);
    delete rec;
}

test(gmc_emmod206_record16_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 16);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 224);
    delete rec;
}

test(gmc_emmod206_record17_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 17);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(gmc_emmod206_record18_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 18);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(gmc_emmod206_record19_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)gmc_emmod206_blob, gmc_emmod206_blob_len);
    rec = get_record(&frame, 19);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 202);
    delete rec;
}

/*
test(invalid_length2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)invalid_length2_blob, invalid_length2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(invalid_length2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)invalid_length2_blob, invalid_length2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}
*/

test(kamstrup_multical_601_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 6855817);
    delete rec;
}

test(kamstrup_multical_601_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 37351000);
    delete rec;
}

test(kamstrup_multical_601_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 561.08f);
    delete rec;
}

test(kamstrup_multical_601_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 3546000);
    delete rec;
}

test(kamstrup_multical_601_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 101.69f);
    delete rec;
}

test(kamstrup_multical_601_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 46.16f);
    delete rec;
}

test(kamstrup_multical_601_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 55.53f);
    delete rec;
}

test(kamstrup_multical_601_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 34700);
    delete rec;
}

test(kamstrup_multical_601_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 44800);
    delete rec;
}

test(kamstrup_multical_601_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.543f);
    delete rec;
}

test(kamstrup_multical_601_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.628f);
    delete rec;
}

test(kamstrup_multical_601_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record15_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 15);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record16_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 16);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2011-01-05T15:26:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(kamstrup_multical_601_record17_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 17);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 33361000);
    delete rec;
}

test(kamstrup_multical_601_record18_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 18);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 500.98f);
    delete rec;
}

test(kamstrup_multical_601_record19_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 19);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 55000);
    delete rec;
}

test(kamstrup_multical_601_record20_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 20);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 1.027f);
    delete rec;
}

test(kamstrup_multical_601_record21_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 21);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record22_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 22);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record23_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 23);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record24_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 24);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record25_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 25);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(kamstrup_multical_601_record26_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 26);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2010-12-31", rec->value->str_val.size), 0);
    delete rec;
}

test(kamstrup_multical_601_record27_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)kamstrup_multical_601_blob, kamstrup_multical_601_blob_len);
    rec = get_record(&frame, 27);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "00 00 00 00 E7 E4 00 00 63 66 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5B C9 A5 02 34 53 00 00 E0 B2 03 00 89 9C 68 00 00 00 00 00 01 00 01 07 07 09 01 03 00 00 00 00 00", rec->value->str_val.size), 0);
    delete rec;
}

test(manual_frame2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)manual_frame2_blob, manual_frame2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1);
    delete rec;
}

test(manual_frame2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)manual_frame2_blob, manual_frame2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 135);
    delete rec;
}

test(manual_frame3_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)manual_frame3_blob, manual_frame3_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(manual_frame3_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)manual_frame3_blob, manual_frame3_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(manual_frame3_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)manual_frame3_blob, manual_frame3_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 218370);
    delete rec;
}

test(nzr_dhz_5_63_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1274);
    delete rec;
}

test(nzr_dhz_5_63_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1274);
    delete rec;
}

test(nzr_dhz_5_63_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 237.2f);
    delete rec;
}

test(nzr_dhz_5_63_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(nzr_dhz_5_63_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(nzr_dhz_5_63_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 30100608);
    delete rec;
}

test(nzr_dhz_5_63_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)nzr_dhz_5_63_blob, nzr_dhz_5_63_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "0E", rec->value->str_val.size), 0);
    delete rec;
}

/*
test(premature_end_of_data1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_data1_blob, premature_end_of_data1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(premature_end_of_data1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_data1_blob, premature_end_of_data1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(premature_end_of_data2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_data2_blob, premature_end_of_data2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(premature_end_of_data2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_data2_blob, premature_end_of_data2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(premature_end_of_dif1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_dif1_blob, premature_end_of_dif1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(premature_end_of_dif1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_dif1_blob, premature_end_of_dif1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(premature_end_of_dif2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_dif2_blob, premature_end_of_dif2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(premature_end_of_dif2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_dif2_blob, premature_end_of_dif2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(premature_end_of_var_vif1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_var_vif1_blob, premature_end_of_var_vif1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(premature_end_of_var_vif1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_var_vif1_blob, premature_end_of_var_vif1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.64f);
    delete rec;
}

test(premature_end_of_var_vif1_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_var_vif1_blob, premature_end_of_var_vif1_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.52f);
    delete rec;
}

test(premature_end_of_vif1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_vif1_blob, premature_end_of_vif1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(premature_end_of_vif1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)premature_end_of_vif1_blob, premature_end_of_vif1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}
*/

test(rel_padpuls2_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(rel_padpuls2_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2001-09-20T13:16:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls2_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2000-12-31", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls2_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(rel_padpuls2_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2001-12-31", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls2_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls2_blob, rel_padpuls2_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "43 01 01 00", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls3_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1987);
    delete rec;
}

test(rel_padpuls3_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2000-12-31T10:41:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls3_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2000-12-31", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls3_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 1302);
    delete rec;
}

test(rel_padpuls3_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2001-12-31", rec->value->str_val.size), 0);
    delete rec;
}

test(rel_padpuls3_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "C0 01 01 0C", rec->value->str_val.size), 0);
    delete rec;
}

test(svm_f22_telegram1_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 28014000);
    delete rec;
}

test(svm_f22_telegram1_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 640.581f);
    delete rec;
}

test(svm_f22_telegram1_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 640.581f);
    delete rec;
}

test(svm_f22_telegram1_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 243);
    delete rec;
}

test(svm_f22_telegram1_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 243);
    delete rec;
}

test(svm_f22_telegram1_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(svm_f22_telegram1_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 22932000);
    delete rec;
}

test(svm_f22_telegram1_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 22906800);
    delete rec;
}

test(svm_f22_telegram1_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(svm_f22_telegram1_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(svm_f22_telegram1_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2021-02-08T21:12:00Z", rec->value->str_val.size), 0);
    delete rec;
}

test(svm_f22_telegram1_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(svm_f22_telegram1_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)svm_f22_telegram1_blob, svm_f22_telegram1_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}
/*
test(too_long_var_vif_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_long_var_vif_blob, too_long_var_vif_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}

test(too_long_var_vif_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_long_var_vif_blob, too_long_var_vif_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.64f);
    delete rec;
}

test(too_long_var_vif_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_long_var_vif_blob, too_long_var_vif_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 45.52f);
    delete rec;
}
*/
/*
test(too_many_dife_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_many_dife_blob, too_many_dife_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(too_many_dife_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_many_dife_blob, too_many_dife_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}

test(too_many_vife_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_many_vife_blob, too_many_vife_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 12.565f);
    delete rec;
}

test(too_many_vife_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)too_many_vife_blob, too_many_vife_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 0.113f);
    delete rec;
}
*/

test(WEP_indoor_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 64000449);
    delete rec;
}

test(WEP_indoor_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 600);
    delete rec;
}

test(WEP_indoor_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 30);
    delete rec;
}

test(WEP_indoor_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 22);
    delete rec;
}

test(WEP_indoor_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 531);
    delete rec;
}

test(WEP_indoor_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)WEP_indoor_blob, WEP_indoor_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((int)rec->value->real_val, 0);
    delete rec;
}


UNIT_TEST_APP();
