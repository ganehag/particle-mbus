# M-Bus (Meter-Bus) for Photon, Electron

M-Bus master-mode library for Photon and Electron.

## Source Code

Ported from the RScada C library <a href="https://github.com/rscada/libmbus" target="_blank">Libmbus</a>, 
to C++ for use with Particle Photon and Electron. Maybe even the Core, but it will probably not work due to
memory constraints.

## Usage

Before you start, it is highly recommended to learn as much about <a href="http://www.m-bus.com/" target="_blank">M-Bus</a>
as possible before you begin.

```
#include "MBus.h"

MBusSerialHandle mbusSerial(&Serial1); // Or other serial port

// Read data using primary address (0-255)
int get_primary_addr_data(unsigned char addr) {
    int max_frames = 8; // Max number of accepted frames in multiframe reply
    MBusDataVariable *data_var;
    MBusFrame reply;

    mbusSerial.requestSendRecv(addr, &reply, max_frame);

    data_var = reply.getVariableData();
    parse_vardata(data_var);
    delete data_var;

    return 0;
}

// Read data using secondary address ("0000000000000000"-"FFFFFFFFFFFFFFFF")
int get_secondary_addr_data(const char *addr_str) {
    int max_frames = 8; // Max number of accepted frames in multiframe reply
    MBusDataVariable *data_var;
    MBusFrame reply;
    unsigned char addr = 0;

    if (MBus::isSecondaryAddress(addr_str)) {
        int ret = mbusSerial.selectSecondaryAddress(addr_str);

        if (ret == MBUS_PROBE_COLLISION) {
            return 1;
        } else if (ret == MBUS_PROBE_NOTHING) {
            return 1;
        } else if (ret == MBUS_PROBE_ERROR) {
            return 1;
        }

        address = MBUS_ADDRESS_NETWORK_LAYER;
    }

    mbusSerial.requestSendRecv(addr, &reply, max_frame);

    data_var = reply.getVariableData();
    parse_vardata(data_var);
    delete data_var;

    return 0;
}

int parse_vardata(MBusDataVariable *vardata) {
    MBusDataRecord *ptr;
    MBusRecord *record;

    if(data_var != NULL) {
        ptr = data_var->record;

        for(unsigned int i = 0; i < data_var->nrecords && ptr != NULL; i++) {
            record = ptr->getRecord();

            // record->isNumeric       /* Bool */
            // record->value->real_val /* Float */
            // record->value->str_val  /* MBusString see MbusRecord.h */
            // record->quantity        /* Quantity type (e.g. Energy) */
            // record->unit            /* Quantity medium or function (e.g. Electricity) */
            // record->function_medium /* Quantity device */
            // record->quantity        /* Quantity tariff */
            // record->storage_number  /* Quantity storage number */

            if(record) {
                delete record;
            }

            ptr = ptr->next;
        }

        return 0;
    }

    return -1;
}

void setup() {
  // No setup necessary if you run mbusSerial.setBaudrate for each request.
  // Otherwise run it here with the desired baudrate, in the range of 300 to 9600.
}

void loop() {
  // Do whatever
}
```

See the [examples](examples) folder for more details.


## Documentation

TODO: Describe each class here.


## LICENSE

BSD 3-Clause License, same as the original Libmbus library.
