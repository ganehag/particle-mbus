#include <string.h>

#include "MBusDataVariable.h"

/*
 * Variable Header
 */
MBusDataVariableHeader::MBusDataVariableHeader() {
  memset(id_bcd, 0, sizeof(id_bcd));
  memset(manufacturer, 0, sizeof(manufacturer));
  version = 0;
  medium = 0;
  access_no = 0;
  status = 0;
  memset(signature, 0, sizeof(signature));
}

MBusDataVariableHeader::~MBusDataVariableHeader() {}

unsigned long MBusDataVariableHeader::decodeID() {
  unsigned long val = 0;
  size_t i;

  if (this->id_bcd) {
    for (i = 4; i > 0; i--) {
      val = (val * 10) + ((this->id_bcd[i - 1] >> 4) & 0xF);
      val = (val * 10) + (this->id_bcd[i - 1] & 0xF);
    }

    return val;
  }

  return -1;
}

MBusDataVariable::MBusDataVariable() {
  header = new MBusDataVariableHeader();
  record = NULL;
  nrecords = 0;
  data = NULL;
  data_len = 0;
  more_records_follow = 0;

  // are these needed/used?
  mdh = 0;
  mfg_data = NULL;
  mfg_data_len = 0;
};

MBusDataVariable::~MBusDataVariable() {
  if (header) {
    delete header;
  }

  if (this->record != NULL) {
    delete this->record;
  }
}

void MBusDataVariable::append_record(MBusDataRecord *record) {
  MBusDataRecord *iter;

  if (record != NULL) {
    if (this->record == NULL) {
      this->record = record;
    } else {
      // find the end of the list
      for (iter = this->record; iter->next; iter = iter->next) {
        // loop
      }

      iter->next = record;
    }
  }
};

int MBusDataVariable::parse(MBusFrame *frame) {
  MBusDataRecord *record = NULL;
  size_t i, j;

  if (frame != NULL) {
    // parse header
    this->nrecords = 0;
    this->more_records_follow = 0;
    i = MBUS_DATA_VARIABLE_HEADER_LENGTH;

    if (frame->data_size < i) {
      // snprintf(error_str, sizeof(error_str), "Variable header too short.");
      return -1;
    }

    // Before copying, is the data in MSB or LSB order?
    if (frame->control_information == MBUS_CONTROL_INFO_RESP_VARIABLE_MSB) {
      j = 0;
      for (size_t k = sizeof(this->header->id_bcd); k > 0; k--) {
        this->header->id_bcd[k-1] = frame->data[j++];          
      }

      for (size_t k = sizeof(this->header->manufacturer); k > 0; k--) {
        this->header->manufacturer[k-1] = frame->data[j++];
      }
            
      this->header->version = frame->data[j++];
      this->header->medium = frame->data[j++];
      this->header->access_no = frame->data[j++];
      this->header->status = frame->data[j++];

      for (size_t k = sizeof(this->header->signature); k > 0; k--) {
        this->header->manufacturer[k-1] = frame->data[j++];
      }
    } else {
      this->header->id_bcd[0] = frame->data[0];
      this->header->id_bcd[1] = frame->data[1];
      this->header->id_bcd[2] = frame->data[2];
      this->header->id_bcd[3] = frame->data[3];
      this->header->manufacturer[0] = frame->data[4];
      this->header->manufacturer[1] = frame->data[5];
      this->header->version = frame->data[6];
      this->header->medium = frame->data[7];
      this->header->access_no = frame->data[8];
      this->header->status = frame->data[9];
      this->header->signature[0] = frame->data[10];
      this->header->signature[1] = frame->data[11];
    }

    this->record = NULL;

    while (i < frame->data_size) {
      // Skip filler dif=2F
      if ((frame->data[i] & 0xFF) == MBUS_DIB_DIF_IDLE_FILLER) {
        i++;
        continue;
      }

      if ((record = new MBusDataRecord()) == NULL) {
        // clean up...
        return (-2);
      }

      // copy timestamp
      memcpy((void *)&(record->timestamp), (void *)&(frame->timestamp),
             sizeof(time_t));

      // read and parse DIB (= DIF + DIFE)

      // DIF
      record->drh->dib->dif = frame->data[i];

      if ((record->drh->dib->dif == MBUS_DIB_DIF_MANUFACTURER_SPECIFIC) ||
          (record->drh->dib->dif == MBUS_DIB_DIF_MORE_RECORDS_FOLLOW)) {
        if ((record->drh->dib->dif & 0xFF) ==
            MBUS_DIB_DIF_MORE_RECORDS_FOLLOW) {
          this->more_records_follow = 1;
        }

        i++;
        // just copy the remaining data as it is vendor specific
        record->data_len = frame->data_size - i;
        for (j = 0; j < record->data_len; j++) {
          record->data[j] = frame->data[i++];
        }

        // append the record and move on to next one
        this->append_record(record);
        this->nrecords++;
        continue;
      }

      // calculate length of data record
      record->data_len = record->drh->dib->getDataLength();

      // read DIF extensions
      record->drh->dib->ndife = 0;
      while ((i < frame->data_size) &&
             (frame->data[i] & MBUS_DIB_DIF_EXTENSION_BIT)) {
        unsigned char dife;

        if (record->drh->dib->ndife >= NITEMS(record->drh->dib->dife)) {
          delete record;
          // snprintf(error_str, sizeof(error_str), "Too many DIFE.");
          return -1;
        }

        dife = frame->data[i + 1];
        record->drh->dib->dife[record->drh->dib->ndife] = dife;

        record->drh->dib->ndife++;
        i++;
      }
      i++;

      if (i > frame->data_size) {
        delete record;
        // snprintf(error_str, sizeof(error_str), "Premature end of record at
        // DIF.");
        return -1;
      }

      // read and parse VIB (= VIF + VIFE)

      // VIF
      record->drh->vib->vif = frame->data[i++];

      if ((record->drh->vib->vif & MBUS_DIB_VIF_WITHOUT_EXTENSION) == 0x7C) {
        // variable length VIF in ASCII format
        unsigned int var_vif_len;
        var_vif_len = frame->data[i++];
        if (var_vif_len > sizeof(record->drh->vib->custom_vif)) {
          delete record;
          // snprintf(error_str, sizeof(error_str), "Too long variable length
          // VIF.");
          return -1;
        }

        if (i + var_vif_len > frame->data_size) {
          delete record;
          // snprintf(error_str, sizeof(error_str), "Premature end of record at
          // variable length VIF.");
          return -1;
        }

        // Decode Str
        unsigned char *dst = record->drh->vib->custom_vif;
        unsigned char *src = &(frame->data[i]);
        unsigned int len = var_vif_len;
        unsigned int v = 0;
        if (dst && src) {
          dst[len] = '\0';
          while (len > 0) {
            dst[v++] = src[--len];
          }
        }

        i += var_vif_len;
      }

      // VIFE
      record->drh->vib->nvife = 0;

      if (record->drh->vib->vif & MBUS_DIB_VIF_EXTENSION_BIT) {
        record->drh->vib->vife[0] = frame->data[i];
        record->drh->vib->nvife++;

        while ((i < frame->data_size) &&
               (frame->data[i] & MBUS_DIB_VIF_EXTENSION_BIT)) {
          unsigned char vife;

          if (record->drh->vib->nvife >= NITEMS(record->drh->vib->vife)) {
            delete record;
            // snprintf(error_str, sizeof(error_str), "Too many VIFE.");
            return -1;
          }

          vife = frame->data[i + 1];
          record->drh->vib->vife[record->drh->vib->nvife] = vife;

          record->drh->vib->nvife++;
          i++;
        }
        i++;
      }

      if (i > frame->data_size) {
        delete record;
        // snprintf(error_str, sizeof(error_str), "Premature end of record at
        // VIF.");
        return -1;
      }

      // re-calculate data length, if of variable length type
      if ((record->drh->dib->dif & MBUS_DATA_RECORD_DIF_MASK_DATA) ==
          0x0D) { // flag for variable length data
        if (frame->data[i] <= 0xBF) {
          record->data_len = frame->data[i++];
        } else if (frame->data[i] >= 0xC0 && frame->data[i] <= 0xCF) {
          record->data_len = (frame->data[i++] - 0xC0) * 2;
        } else if (frame->data[i] >= 0xD0 && frame->data[i] <= 0xDF) {
          record->data_len = (frame->data[i++] - 0xD0) * 2;
        } else if (frame->data[i] >= 0xE0 && frame->data[i] <= 0xEF) {
          record->data_len = frame->data[i++] - 0xE0;
        } else if (frame->data[i] >= 0xF0 && frame->data[i] <= 0xFA) {
          record->data_len = frame->data[i++] - 0xF0;
        }
      }

      if (i + record->data_len > frame->data_size) {
        delete record;
        // snprintf(error_str, sizeof(error_str), "Premature end of record at
        // data.");
        return -1;
      }

      // copy data
      if (frame->control_information == MBUS_CONTROL_INFO_RESP_VARIABLE_MSB) {
          for (j = record->data_len; j > 0 ; j--) {
              record->data[j-1] = frame->data[i++];
          }
      } else {
          for (j = 0; j < record->data_len; j++) {
              record->data[j] = frame->data[i++];
          }
      }

      // append the record and move on to next one
      this->append_record(record);

      this->nrecords++;
    }

    return 0;
  }

  return -1;
};