
test(apator_lqm3_record0_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 0);
    assertNotNULL(rec);
    assertEqual(strncmp(rec->value->str_val.value, "2015-05-17", rec->value->str_val.size), 0);
    delete rec;
}

test(apator_lqm3_record1_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 1);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 144108000000);
    delete rec;
}

test(apator_lqm3_record2_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 2);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record3_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 3);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 5633.188f);
    delete rec;
}

test(apator_lqm3_record4_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 4);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record5_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 5);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record6_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 6);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record7_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 7);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record8_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 8);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record9_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 9);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}

test(apator_lqm3_record10_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 10);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 21.3f);
    delete rec;
}

test(apator_lqm3_record11_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 11);
    assertNotNULL(rec);
    assertEqual((float)rec->value->real_val, 21.3f);
    delete rec;
}

test(apator_lqm3_record12_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 12);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 286354800);
    delete rec;
}

test(apator_lqm3_record13_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 13);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 838800);
    delete rec;
}

test(apator_lqm3_record14_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    rec = get_record(&frame, 14);
    assertNotNULL(rec);
    assertEqual((long long)rec->value->real_val, 0);
    delete rec;
}
