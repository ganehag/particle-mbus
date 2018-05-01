#include <stdio.h>

#include "MBus.h"
#include "frames.h"

MBusRecord *get_record(MBusFrame *frame, int pos) {
    MBusDataVariable *data_var;
    MBusDataRecord *ptr;
    MBusRecord *rec = NULL;

    if(frame == NULL) {
        return NULL;
    }

    data_var = frame->getVariableData();
    if(data_var == NULL) {
        printf("VarData is NULL\n");
        return NULL;
    }

    ptr = data_var->record;
    for(int i = 0; i < pos && ptr != NULL; i++) {
        ptr = ptr->next;
    }

    if(ptr == NULL) {
        printf("Record PTR is NULL\n");
        delete data_var;
        return NULL;
    }

    rec = ptr->getRecord();

    if(rec == NULL) {
        printf("Record is NULL\n");
    }

    if(data_var != NULL) {
        delete data_var;
    }

    return rec;
};

int main() {
    MBusFrame frame;
    MBusRecord *rec;
    MBusDataVariable *vard;
    unsigned int num_records = 0;
    // frame.parse((unsigned char *)manual_frame2_blob, manual_frame2_blob_len);
    // frame.parse((unsigned char *)rel_padpuls3_blob, rel_padpuls3_blob_len);
    // frame.parse((unsigned char *)invalid_length2_blob, invalid_length2_blob_len);
    frame.parse((unsigned char *)apator_lqm3_blob, apator_lqm3_blob_len);
    vard = frame.getVariableData();
    if(vard == NULL) {
        fprintf(stderr, "No variable record");
        exit(1);
    }

    num_records = vard->nrecords;

    delete vard; // clean-up

    for(unsigned int i=0; i < num_records; i++) {
      rec = get_record(&frame, i);
      if (rec) {
        if(rec->isNumeric) {
            printf("%02i: %f\n", i, rec->value->real_val);
        } else if(rec->value->str_val.value != NULL) {
            printf("%02i: %s\n", i, rec->value->str_val.value);
        }
        delete rec;
      }
    }

    return 0;
}
