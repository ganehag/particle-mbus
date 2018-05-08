#include "MBusProtocol.h"

int MBusProtocol::decodeBCD(unsigned char *data, size_t size, long long *value) {
    if (data) {
        for (size_t i = size; i > 0; i--) {
            *value = (*value * 10) + ((data[i - 1] >> 4) & 0xF);
            *value = (*value * 10) + (data[i - 1] & 0xF);
        }

        return 0;
    }

    return -1;
};


int MBusProtocol::decodeLong(unsigned char *data, size_t int_data_size, long *value) {
  size_t i;
  int neg;
  *value = 0;

  if (!data || (int_data_size < 1)) {
    return -1;
  }

  neg = data[int_data_size - 1] & 0x80;

  for (i = int_data_size; i > 0; i--) {
    if (neg) {
      *value = (*value << 8) + (data[i - 1] ^ 0xFF);
    } else {
      *value = (*value << 8) + data[i - 1];
    }
  }

  if (neg) {
    *value = *value * -1 - 1;
  }

  return 0;
};
