#include "MBus.h"
#include <string.h>
#include <ctype.h>

MBus::MBus() {};

MBus::~MBus() {};

int MBus::isPrimaryAddress(int value) {
  return ((value >= 0x00) && (value <= 0xFF));
};

int MBus::isSecondaryAddress(const char *value) {
  int i;

  if (value == NULL) {
    return 0;
  }

  if (strlen(value) != 16) {
    return 0;
  }

  for (i = 0; i < 16; i++) {
    if (!isxdigit(value[i])) {
      return 0;
    }
  }

  return 1;
};

int MBus::initSlaves(MBusHandle *handle) {
  if (handle->sendPingFrame(MBUS_ADDRESS_NETWORK_LAYER, 1) == -1) {
    return 0;
  }

  //
  // resend SND_NKE, maybe the first get lost
  //
  if (handle->sendPingFrame(MBUS_ADDRESS_NETWORK_LAYER, 1) == -1) {
    return 0;
  }

  return 1;
};

// Can't compile on linux:  undefined reference to `vtable for MBusHandle'
#ifdef PLATFORM_ID

MBusHandle::MBusHandle() {
  max_data_retry = 3;
  max_search_retry = 1;
  purge_first_frame = MBUS_FRAME_PURGE_M2S;
};

MBusHandle::~MBusHandle(){

};

#endif

int
MBusHandle::sendRequestFrame(int address) {
    int retval = 0;
    MBusFrame *frame;

    if (MBus::isPrimaryAddress(address) == 0) {
        return -1;
    }

    frame = new MBusFrame(MBUS_FRAME_TYPE_SHORT);
    frame->control = MBUS_CONTROL_MASK_REQ_UD2 | MBUS_CONTROL_MASK_DIR_M2S;
    frame->address = address;

    if (this->send(frame) == -1) {
        retval = -1;
    }

    delete frame;
    return retval;
};

int
MBusHandle::sendPingFrame(int address, bool purge_response) {
  int retval = 0;
  MBusFrame *frame;

  if (MBus::isPrimaryAddress(address) == 0) {
    return 1;
  }

  frame = new MBusFrame(MBUS_FRAME_TYPE_SHORT);
  frame->control = MBUS_CONTROL_MASK_SND_NKE | MBUS_CONTROL_MASK_DIR_M2S;
  frame->address = address;

  if (this->send(frame) == -1) {
    delete frame;
    return -1;
  }

  if (purge_response) {
    this->purgeFrames();
  }

  delete frame;
  return retval;
};

int
MBusHandle::purgeFrames() {
  int err, received;
  MBusFrame reply;

  received = 0;
  while (1) {
    err = this->recv(&reply);
    if (err != MBUS_RECV_RESULT_OK && err != MBUS_RECV_RESULT_INVALID) {
      break;
    }

    received = 1;
  }

  return received;
};

int
MBusHandle::requestSendRecv(int address, MBusFrame *reply,
                                      int max_frames) {
  int retval = 0, more_frames = 1, retry = 0;
  MBusFrameData reply_data;
  MBusFrame *frame, *next_frame;
  int frame_count = 0, result;

  if (MBus::isPrimaryAddress(address) == 0) {
    return 1;
  }

  frame = new MBusFrame(MBUS_FRAME_TYPE_SHORT);
  frame->control = MBUS_CONTROL_MASK_REQ_UD2 | MBUS_CONTROL_MASK_DIR_M2S |
                   MBUS_CONTROL_MASK_FCV | MBUS_CONTROL_MASK_FCB;

  frame->address = address;

  //
  // continue to read until no more records are available (usually only one
  // reply frame, but can be more for so-called multi-telegram replies)
  //
  next_frame = reply;

  while (more_frames) {
    if (retry > this->max_data_retry) {
      // Give up
      retval = 1;
      break;
    }

    if (this->send(frame) == -1) {
      retval = -1;
      break;
    }

    result = this->recv(next_frame);

    if (result == MBUS_RECV_RESULT_OK) {
      retry = 0;
      this->purgeFrames();
    } else if (result == MBUS_RECV_RESULT_TIMEOUT) {
      retry++;
      continue;
    } else if (result == MBUS_RECV_RESULT_INVALID) {
      retry++;
      this->purgeFrames();
      continue;
    } else {
      retval = 1;
      break;
    }

    frame_count++;

    //
    // We need to parse the data in the received frame to be able to tell
    // if more records are available or not.
    //
    if (reply_data.parse(next_frame) == -1) {
      retval = 1;
      break;
    }

    //
    // Continue a cycle of sending requests and reading replies until the
    // reply do not have DIF=0x1F in the last record (which signals that
    // more records are available.
    //

    if (reply_data.type != MBUS_DATA_TYPE_VARIABLE) {
      // only single frame replies for FIXED type frames
      more_frames = 0;
    } else {
      more_frames = 0;

      if (reply_data.data_var->more_records_follow &&
          ((max_frames > 0) &&
           (frame_count < max_frames))) // only readout max_frames
      {
        more_frames = 1;

        // allocate new frame and increment next_frame pointer
        next_frame->next = new MBusFrame(MBUS_FRAME_TYPE_ANY);

        if (next_frame->next == NULL) {
          retval = -1;
          more_frames = 0;
        }

        next_frame = next_frame->next;

        // toogle FCB bit
        frame->control ^= MBUS_CONTROL_MASK_FCB;
      } else {
        /* No more frames */
      }
    }

    // Is this needed? Or will reply_data clean it up anyway? When it does
    // recursive child delete at end of scope?
    if (reply_data.data_var->record) {
      // free's up the whole list
      delete reply_data.data_var->record;
      reply_data.data_var->record = NULL;
    }
  }

  delete frame;
  return retval;
};

int
MBusHandle::probeSecondaryAddress(const char *mask, char *matching_addr) {
    int ret;
    MBusFrame reply;

    if (mask == NULL || matching_addr == NULL || strlen(mask) != 16) {
        return MBUS_PROBE_ERROR;
    }

    for (int i = 0; i <= this->max_search_retry; i++) {
        ret = this->selectSecondaryAddress(mask);

        if (ret == MBUS_PROBE_SINGLE) {
            // send a data request command to find out the full address
            if (this->sendRequestFrame(MBUS_ADDRESS_NETWORK_LAYER) == -1) {
                return MBUS_PROBE_ERROR;
            }

            ret = this->recv(&reply);

            if (ret == MBUS_RECV_RESULT_TIMEOUT) {
                return MBUS_PROBE_NOTHING;
            }

            if (ret == MBUS_RECV_RESULT_INVALID) {
                /* check for more data (collision) */
                this->purgeFrames();
                return MBUS_PROBE_COLLISION;
            }

            /* check for more data (collision) */
            if (this->purgeFrames()) {
                return MBUS_PROBE_COLLISION;
            }

            if (reply.type == MBUS_FRAME_TYPE_LONG) {
                char *addr = reply.getSecondaryAddress();

                if (addr == NULL) {
                    // show error message, but procede with scan
                    return MBUS_PROBE_NOTHING;
                }

                snprintf(matching_addr, 17, "%s", addr);

                // if (handle->found_event) {
                //     handle->found_event(handle,&reply);
                // }

                return MBUS_PROBE_SINGLE;
            } else {
                return MBUS_PROBE_NOTHING;
            }
        } else if ((ret == MBUS_PROBE_ERROR) ||
                 (ret == MBUS_PROBE_COLLISION)) {
            break;
        }
    }

    return ret;
};

int
MBusHandle::selectSecondaryAddress(const char *mask) {
  int ret;
  MBusFrame reply;
  MBusFrame select_frame(MBUS_FRAME_TYPE_LONG);

  if (mask == NULL || strlen(mask) != 16) {
    return MBUS_PROBE_ERROR;
  }

  if (select_frame.selectSecondaryPack(mask) == -1) {
    return MBUS_PROBE_ERROR;
  }

  if (this->send(&select_frame) == -1) {
    return -1;
  }

  ret = this->recv(&reply);

  if (ret == MBUS_RECV_RESULT_TIMEOUT) {
    return MBUS_PROBE_NOTHING;
  }

  if (ret == MBUS_RECV_RESULT_INVALID) {
    // check for more data (collision)
    this->purgeFrames();
    return MBUS_PROBE_COLLISION;
  }

  if (reply.type == MBUS_FRAME_TYPE_ACK) {
    // check for more data (collision)
    if (this->purgeFrames()) {
      return MBUS_PROBE_COLLISION;
    }

    return MBUS_PROBE_SINGLE;
  }

  return MBUS_PROBE_NOTHING;
};


#ifdef PLATFORM_ID

MBusSerialHandle::MBusSerialHandle(USARTSerial *handle) {
  this->handle = handle;
};
MBusSerialHandle::~MBusSerialHandle(){};

int MBusSerialHandle::open() { return this->setBaudrate(2400); };

int MBusSerialHandle::close() {
  if (this->handle != NULL) {
    this->handle->end();
    return 0;
  }

  return -1;
};

int MBusSerialHandle::setBaudrate(long baudrate) {
  if (this->handle != NULL) {
    // this->handle->flush();
    this->handle->end();
    this->handle->begin(baudrate, SERIAL_8E1);
    this->handle->setTimeout(1000); // FIXME
    return 0;
  }

  return -1;
};

int MBusSerialHandle::send(MBusFrame *frame) {
  unsigned char buff[PACKET_BUFF_SIZE];
  int len, ret;

  if (frame == NULL) {
    return -1;
  }

  if ((len = frame->pack(buff, sizeof(buff))) == -1) {
    return -1;
  }

  if ((ret = this->handle->write(buff, len)) == len) {
    //
    // call the send event function, if the callback function is registered
    //
    /*
    if (handle->send_event) {
        handle->send_event(MBUS_HANDLE_TYPE_SERIAL, buff, len);
    }
    */
  } else {
    return -1;
  }

  //
  // wait until complete frame has been transmitted
  //
  this->handle->flush();

  return 0;
};

int MBusSerialHandle::recv(MBusFrame *frame) {
  char buff[PACKET_BUFF_SIZE];
  int remaining, timeouts;
  ssize_t len, nread;

  if (frame == NULL) {
    return MBUS_RECV_RESULT_ERROR;
  }

  memset((void *)buff, 0, sizeof(buff));

  //
  // read data until a packet is received
  //
  remaining = 1; // start by reading 1 byte
  len = 0;
  timeouts = 0;

  do {
    if (len + remaining > PACKET_BUFF_SIZE) {
      // avoid out of bounds access
      return MBUS_RECV_RESULT_ERROR;
    }

    nread = this->handle->readBytes(&buff[len], remaining);

    if (nread == 0) {
      timeouts++;

      if (timeouts >= 3) {
        // abort to avoid endless loop
        break;
      }
    }

    if (len > (SSIZE_MAX - nread)) {
      // avoid overflow
      return MBUS_RECV_RESULT_ERROR;
    }

    len += nread;

  } while ((remaining = frame->parse((unsigned char *)buff, len)) > 0);

  if (len == 0) {
    // No data received
    return MBUS_RECV_RESULT_TIMEOUT;
  }

  //
  // call the receive event function, if the callback function is registered
  //
  /*
  if (handle->recv_event)
      handle->recv_event(MBUS_HANDLE_TYPE_SERIAL, buff, len);
  */

  if (remaining != 0) {
    // Would be OK when e.g. scanning the bus, otherwise it is a failure.
    return MBUS_RECV_RESULT_INVALID;
  }

  if (len == -1) {
    return MBUS_RECV_RESULT_ERROR;
  }

  return MBUS_RECV_RESULT_OK;
};

#endif
