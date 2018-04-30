#include "MBus.h"

// SerialLogHandler logHandler(LOG_LEVEL_TRACE);
MBusSerialHandle mbusSerial(&Serial1);

bool success = Particle.function("requestData", requestData);

int requestData(String extra) {
  MBusFrame reply;
  const char *addr_str = extra.c_str();
  int address;
  
  mbusSerial.setBaudrate(2400);
  MBus::initSlaves(&mbusSerial);

  if (MBus::isSecondaryAddress(addr_str)) {
    int ret = mbusSerial.selectSecondaryAddress(addr_str);

    if (ret == MBUS_PROBE_COLLISION) {
        Log.error("Error: The address mask [%s] matches more than one device.", addr_str);
        return 1;
    } else if (ret == MBUS_PROBE_NOTHING) {
        Log.error("Error: The selected secondary address does not match any device [%s].", addr_str);
        return 1;
    } else if (ret == MBUS_PROBE_ERROR) {
        Log.error("Error: Failed to select secondary address [%s].", addr_str);
        return 1;
    }

    address = MBUS_ADDRESS_NETWORK_LAYER;

  } else {
      address = atoi(addr_str);
  }
  
  mbusSerial.requestSendRecv(address, &reply, 8);

  MBusDataVariable *data_var = reply.getVariableData();
  if(data_var != NULL) {
    MBusDataRecord *ptr = data_var->record;

    for(unsigned int i = 0; i < data_var->nrecords && ptr != NULL; i++) {
      MBusRecord *record = ptr->getRecord();
      char msg[255];

      // Only publish records with numeric value
      if(record->isNumeric) {
        if(round(record->value->real_val) == record->value->real_val) {
          snprintf(msg, sizeof(msg), "{\"unit\":\"%s\",\"value\":%i,\"record\":%i,\"medium\":\"%s\",\"quantity\":\"%s\"}",
            record->unit, (int)record->value->real_val, i, record->function_medium, record->quantity);  
        } else {
          snprintf(msg, sizeof(msg), "{\"unit\":\"%s\",\"value\":%.2f,\"record\":%i,\"medium\":\"%s\",\"quantity\":\"%s\"}",
            record->unit, record->value->real_val, i, record->function_medium, record->quantity);
        }

        Particle.publish(reply.getSecondaryAddress(), msg, 3600, PRIVATE);

        Particle.process();
        // Wait one second, so not to overwhelm "publish"
        delay(1000); 
      }

      if(record) {
        delete record;
      }

      ptr = ptr->next;
    }

    delete data_var;
  }

  return 0;
}

void setup() {
  Serial.begin(9600);
  pinMode(D0, OUTPUT);
  digitalWrite(D0, HIGH);
}

void loop() {

}
