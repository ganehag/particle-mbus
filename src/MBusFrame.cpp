#include "MBusFrame.h"
#include "MBus.h"

#include <string.h>

MBusFrame::MBusFrame(int type) {
  this->start1 = start2 = 0;
  this->length1 = length2 = 0;
  this->control = 0;
  this->address = 0;
  this->control_information = 0;
  this->checksum = 0;
  this->stop = 0;
  this->data_size = 0;
  this->timestamp = 0;
  this->next = NULL;
  memset(this->data, 0, MBUS_FRAME_DATA_LENGTH);

  this->type = type;

  switch (this->type) {
  case MBUS_FRAME_TYPE_ACK:

    this->start1 = MBUS_FRAME_ACK_START;

    break;

  case MBUS_FRAME_TYPE_SHORT:

    this->start1 = MBUS_FRAME_SHORT_START;
    this->stop = MBUS_FRAME_STOP;

    break;

  case MBUS_FRAME_TYPE_CONTROL:

    this->start1 = MBUS_FRAME_CONTROL_START;
    this->start2 = MBUS_FRAME_CONTROL_START;
    this->length1 = 3;
    this->length2 = 3;
    this->stop = MBUS_FRAME_STOP;

    break;

  case MBUS_FRAME_TYPE_LONG:

    this->start1 = MBUS_FRAME_LONG_START;
    this->start2 = MBUS_FRAME_LONG_START;
    this->stop = MBUS_FRAME_STOP;

    break;
  }
};

MBusFrame::~MBusFrame(){

};

unsigned char MBusFrame::getChecksum() {
  size_t i;
  unsigned char cksum;

  switch (this->type) {
  case MBUS_FRAME_TYPE_SHORT:

    cksum = this->control;
    cksum += this->address;

    break;

  case MBUS_FRAME_TYPE_CONTROL:

    cksum = this->control;
    cksum += this->address;
    cksum += this->control_information;

    break;

  case MBUS_FRAME_TYPE_LONG:

    cksum = this->control;
    cksum += this->address;
    cksum += this->control_information;

    for (i = 0; i < this->data_size; i++) {
      cksum += this->data[i];
    }

    break;

  case MBUS_FRAME_TYPE_ACK:
  default:
    cksum = 0;
  }

  return cksum;
};

int MBusFrame::calcChecksum() {
  switch (this->type) {
  case MBUS_FRAME_TYPE_ACK:
  case MBUS_FRAME_TYPE_SHORT:
  case MBUS_FRAME_TYPE_CONTROL:
  case MBUS_FRAME_TYPE_LONG:
    this->checksum = this->getChecksum();

    break;

  default:
    return -1;
  }

  return 0;
};

int MBusFrame::calcLength() {
  this->length1 = this->length2 = this->getLength();
  return 0;
};

size_t MBusFrame::getLength() {
  switch (this->type) {
  case MBUS_FRAME_TYPE_CONTROL:
    return 3;
  case MBUS_FRAME_TYPE_LONG:
    return this->data_size + 3;
  }

  return 0;
};

int MBusFrame::parse(unsigned char *data, size_t data_size) {
  size_t i, len;

  if (data != NULL && data_size > 0) {
    this->next = NULL;

    MBUS_DEBUG("%s: Attempting to parse binary data [size = %zu]\n",
               __PRETTY_FUNCTION__, data_size);

    for (i = 0; i < data_size; i++) {
      MBUS_DEBUG("%.2X ", data[i] & 0xFF);
    }

    MBUS_DEBUG("\n%s: done.\n", __PRETTY_FUNCTION__);

    switch (data[0]) {
    case MBUS_FRAME_ACK_START:

      // OK, got a valid ack frame, require no more data
      this->start1 = data[0];
      this->type = MBUS_FRAME_TYPE_ACK;
      return 0;

    case MBUS_FRAME_SHORT_START:

      if (data_size < MBUS_FRAME_BASE_SIZE_SHORT) {
        // OK, got a valid short packet start, but we need more data
        return MBUS_FRAME_BASE_SIZE_SHORT - data_size;
      }

      if (data_size != MBUS_FRAME_BASE_SIZE_SHORT) {
        // snprintf(error_str, sizeof(error_str), "Too much data in frame.");

        // too much data... ?
        return -2;
      }

      // init frame data structure
      this->start1 = data[0];
      this->control = data[1];
      this->address = data[2];
      this->checksum = data[3];
      this->stop = data[4];

      this->type = MBUS_FRAME_TYPE_SHORT;

      // verify the frame
      if (this->verify() != 0) {
        return -3;
      }

      // successfully parsed data
      return 0;

    case MBUS_FRAME_LONG_START: // (also CONTROL)

      if (data_size < 3) {
        // OK, got a valid long/control packet start, but we need
        // more data to determine the length
        return 3 - data_size;
      }

      // init frame data structure
      this->start1 = data[0];
      this->length1 = data[1];
      this->length2 = data[2];

      if (this->length1 < 3) {
        // snprintf(error_str, sizeof(error_str), "Invalid M-Bus frame
        // length.");

        // not a valid M-bus frame
        return -2;
      }

      if (this->length1 != this->length2) {
        // snprintf(error_str, sizeof(error_str), "Invalid M-Bus frame
        // length.");

        // not a valid M-bus frame
        return -2;
      }

      // check length of packet:
      len = this->length1;

      if (data_size < (size_t)(MBUS_FRAME_FIXED_SIZE_LONG + len)) {
        // OK, but we need more data
        return MBUS_FRAME_FIXED_SIZE_LONG + len - data_size;
      }

      if (data_size > (size_t)(MBUS_FRAME_FIXED_SIZE_LONG + len)) {
        // snprintf(error_str, sizeof(error_str), "Too much data in frame.");

        // too much data... ?
        return -2;
      }

      // we got the whole packet, continue parsing
      this->start2 = data[3];
      this->control = data[4];
      this->address = data[5];
      this->control_information = data[6];

      this->data_size = len - 3;
      for (i = 0; i < this->data_size; i++) {
        this->data[i] = data[7 + i];
      }

      this->checksum = data[data_size - 2]; // data[6 + this->data_size + 1]
      this->stop = data[data_size - 1];     // data[6 + this->data_size + 2]

      if (this->data_size == 0) {
        this->type = MBUS_FRAME_TYPE_CONTROL;
      } else {
        this->type = MBUS_FRAME_TYPE_LONG;
      }

      // verify the frame
      if (this->verify() != 0) {
        return -3;
      }

      // successfully parsed data

      MBUS_DEBUG("%s: parsed successfully.\n", __PRETTY_FUNCTION__);

      return 0;
    default:
      MBUS_ERROR("Invalid M-Bus frame start.");
      // not a valid M-Bus frame header (start byte)
      return -4;
    }
  }

  MBUS_ERROR("Got null pointer to frame, data or zero data_size.");

  return -1;
}

char *MBusFrame::getSecondaryAddress() {
  static char addr[32];
  MBusFrameData *data = NULL;
  unsigned long id = 0;

  if ((data = new MBusFrameData()) == NULL) {
    return NULL;
  }

  if (this->control_information != MBUS_CONTROL_INFO_RESP_VARIABLE && 
      this->control_information != MBUS_CONTROL_INFO_RESP_VARIABLE_MSB) {
    MBUS_ERROR("Non-variable data response (can't get secondary address from response).");
    return NULL;
  }

  if (data->parse(this) == -1) {
    return NULL;
  }

  id = (unsigned long)data->data_var->header->decodeID();

  snprintf(addr, sizeof(addr), "%08lu%02X%02X%02X%02X", id,
           data->data_var->header->manufacturer[0],
           data->data_var->header->manufacturer[1],
           data->data_var->header->version, data->data_var->header->medium);

  delete data;

  return addr;
};

MBusDataVariable *MBusFrame::getVariableData() {
  MBusFrameData *data = NULL;
  MBusDataVariable *data_var = NULL;

  if ((data = new MBusFrameData()) == NULL) {
    return NULL;
  }

  // FIXME
  if (this->control_information != MBUS_CONTROL_INFO_RESP_VARIABLE && 
    this->control_information != MBUS_CONTROL_INFO_RESP_VARIABLE_MSB) {
    MBUS_ERROR("Non-variable data response (has no records?).\n");
    return NULL;
  }

  // Parse data from Frame into MBusDrameData
  if (data->parse(this) == -1) {
    return NULL;
  }

  data_var = data->data_var; // Move target
  data->data_var = NULL;     // Remove reference, so to avoid deletion
  delete data;

  return data_var; // Return the root (delete, needs to be managed on the other
                   // side)
}

int MBusFrame::verify() {
  unsigned char checksum;

  switch (this->type) {
  case MBUS_FRAME_TYPE_ACK:
    return this->start1 == MBUS_FRAME_ACK_START;

  case MBUS_FRAME_TYPE_SHORT:
    if (this->start1 != MBUS_FRAME_SHORT_START) {
      // snprintf(error_str, sizeof(error_str), "No frame start");

      return -1;
    }

    if ((this->control != MBUS_CONTROL_MASK_SND_NKE) &&
        (this->control != MBUS_CONTROL_MASK_REQ_UD1) &&
        (this->control !=
         (MBUS_CONTROL_MASK_REQ_UD1 | MBUS_CONTROL_MASK_FCB)) &&
        (this->control != MBUS_CONTROL_MASK_REQ_UD2) &&
        (this->control !=
         (MBUS_CONTROL_MASK_REQ_UD2 | MBUS_CONTROL_MASK_FCB))) {
      MBUS_ERROR("Unknown Control Code 0x%.2x", this->control);
      return -1;
    }

    break;

  case MBUS_FRAME_TYPE_CONTROL:
  case MBUS_FRAME_TYPE_LONG:
    if (this->start1 != MBUS_FRAME_CONTROL_START ||
        this->start2 != MBUS_FRAME_CONTROL_START) {
      MBUS_ERROR("No frame start");
      return -1;
    }

    if ((this->control != MBUS_CONTROL_MASK_SND_UD) &&
        (this->control != (MBUS_CONTROL_MASK_SND_UD | MBUS_CONTROL_MASK_FCB)) &&
        (this->control != MBUS_CONTROL_MASK_RSP_UD) &&
        (this->control != (MBUS_CONTROL_MASK_RSP_UD | MBUS_CONTROL_MASK_DFC)) &&
        (this->control != (MBUS_CONTROL_MASK_RSP_UD | MBUS_CONTROL_MASK_ACD)) &&
        (this->control != (MBUS_CONTROL_MASK_RSP_UD | MBUS_CONTROL_MASK_DFC |
                           MBUS_CONTROL_MASK_ACD))) {
      MBUS_ERROR("Unknown Control Code 0x%.2x", this->control);
      return -1;
    }

    if (this->length1 != this->length2) {
      MBUS_ERROR("Frame length 1 != 2");
      return -1;
    }

    if (this->length1 != this->getLength()) {
      MBUS_ERROR("Frame length 1 != calc");
      return -1;
    }

    break;

  default:
    MBUS_ERROR("Unknown frame type 0x%.2x", this->type);
    return -1;
  }

  if (this->stop != MBUS_FRAME_STOP) {
    
    return -1;
  }

  checksum = this->getChecksum();

  if (this->checksum != checksum) {
    MBUS_ERROR("Invalid checksum (0x%.2x != 0x%.2x", this->checksum, checksum);
    return -1;
  }

  return 0;
};

int MBusFrame::pack(unsigned char *data, size_t data_size) {
  size_t i, offset = 0;

  if (data) {
    if (this->calcLength() == -1) {
      return -2;
    }

    if (this->calcChecksum() == -1) {
      return -3;
    }

    switch (this->type) {
    case MBUS_FRAME_TYPE_ACK:

      if (data_size < MBUS_FRAME_ACK_BASE_SIZE) {
        return -4;
      }

      data[offset++] = this->start1;

      return offset;

    case MBUS_FRAME_TYPE_SHORT:

      if (data_size < MBUS_FRAME_SHORT_BASE_SIZE) {
        return -4;
      }

      data[offset++] = this->start1;
      data[offset++] = this->control;
      data[offset++] = this->address;
      data[offset++] = this->checksum;
      data[offset++] = this->stop;

      return offset;

    case MBUS_FRAME_TYPE_CONTROL:

      if (data_size < MBUS_FRAME_CONTROL_BASE_SIZE) {
        return -4;
      }

      data[offset++] = this->start1;
      data[offset++] = this->length1;
      data[offset++] = this->length2;
      data[offset++] = this->start2;

      data[offset++] = this->control;
      data[offset++] = this->address;
      data[offset++] = this->control_information;

      data[offset++] = this->checksum;
      data[offset++] = this->stop;

      return offset;

    case MBUS_FRAME_TYPE_LONG:

      if (data_size < this->data_size + MBUS_FRAME_LONG_BASE_SIZE) {
        return -4;
      }

      data[offset++] = this->start1;
      data[offset++] = this->length1;
      data[offset++] = this->length2;
      data[offset++] = this->start2;

      data[offset++] = this->control;
      data[offset++] = this->address;
      data[offset++] = this->control_information;

      for (i = 0; i < this->data_size; i++) {
        data[offset++] = this->data[i];
      }

      data[offset++] = this->checksum;
      data[offset++] = this->stop;

      return offset;

    default:
      return -5;
    }
  }

  return -1;
};

int MBusFrame::selectSecondaryPack(const char *address) {
  int val, i, j, k;
  char tmp[16];

  if (address == NULL) {
    // snprintf(error_str, sizeof(error_str), "%s: frame or address arguments
    // are NULL.", __PRETTY_FUNCTION__);
    return -1;
  }

  if (MBus::isSecondaryAddress(address) == 0) {
    // snprintf(error_str, sizeof(error_str), "%s: address is invalid.",
    // __PRETTY_FUNCTION__);
    return -1;
  }

  this->control = MBUS_CONTROL_MASK_SND_UD | MBUS_CONTROL_MASK_DIR_M2S |
                  MBUS_CONTROL_MASK_FCB;
  this->address = MBUS_ADDRESS_NETWORK_LAYER; // for addressing secondary slaves
  this->control_information = MBUS_CONTROL_INFO_SELECT_SLAVE; // mode 1

  this->data_size = 8;

  // parse secondary_addr_str and populate frame->data[0-7]
  // ex: secondary_addr_str = "14491001 1057 01 06"
  // (excluding the blank spaces)

  strncpy(tmp, &address[14], 2);
  tmp[2] = 0;
  val = strtol(tmp, NULL, 16);
  this->data[7] = val & 0xFF;

  strncpy(tmp, &address[12], 2);
  tmp[2] = 0;
  val = strtol(tmp, NULL, 16);
  this->data[6] = val & 0xFF;

  strncpy(tmp, &address[8], 4);
  tmp[4] = 0;
  val = strtol(tmp, NULL, 16);
  this->data[4] = (val >> 8) & 0xFF;
  this->data[5] = val & 0xFF;

  // parse the ID string, allowing for F wildcard characters.
  this->data[0] = 0;
  this->data[1] = 0;
  this->data[2] = 0;
  this->data[3] = 0;
  j = 3;
  k = 1;
  for (i = 0; i < 8; i++) {
    if (address[i] == 'F' || address[i] == 'f') {
      this->data[j] |= 0x0F << (4 * k--);
    } else {
      this->data[j] |= (0x0F & (address[i] - '0')) << (4 * k--);
    }

    if (k < 0) {
      k = 1;
      j--;
    }
  }

  return 0;
};
