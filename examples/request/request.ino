#include "MBus.h"

struct Configuration {
  uint8_t version;
  String mqtt_host;
  unsigned int mqtt_port;
  char registers[16]; // Support for specifying up to 16 registers
  // char id[100][4]
  // 2047
  // 00000311B05C021B
};



MBusSerialHandle mbusSerial(&Serial1);
time_t mbusQueryTimer;
struct Configuration cfg;



void setup() {
    mbusQueryTimer = Time.now();

    Serial.begin(115200);

    EEPROM.get(0, cfg);

    if(cfg.version != 0) {
      // EEPROM was empty -> initialize myObj
      cfg.version = 0;
      cfg.mqtt_host = String("");
      cfg.mqtt_port = 1883;
      for(unsigned int i=0; i < sizeof(cfg.registers); i++) {
        cfg.registers[i] = -1;
      }
    }
}

int
request_data(char *addr_str) {
    int address;
    MBusFrame reply;

    mbusSerial.setBaudrate(2400);
    MBus::initSlaves(&mbusSerial);


    if (MBusUtils::is_secondary_address(addr_str)) {
        int ret;

        ret = MBus::selectSecondaryAddress(&mbusSerial, addr_str);

        if (ret == MBUS_PROBE_COLLISION) {
            Serial.printlnf("%s: Error: The address mask [%s] matches more than one device.", __PRETTY_FUNCTION__, addr_str);
            // mbus_disconnect(handle);
            // mbus_context_free(handle);
            return 1;
        }
        else if (ret == MBUS_PROBE_NOTHING) {
            Serial.printlnf("%s: Error: The selected secondary address does not match any device [%s].", __PRETTY_FUNCTION__, addr_str);
            // mbus_disconnect(handle);
            // mbus_context_free(handle);
            return 1;
        } else if (ret == MBUS_PROBE_ERROR) {
            Serial.printlnf("%s: Error: Failed to select secondary address [%s].", __PRETTY_FUNCTION__, addr_str);
            // mbus_disconnect(handle);
            // mbus_context_free(handle);
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
        char topic[128];
        char msg[128];

        if(record->is_numeric) {
          if(round(record->value->real_val) == record->value->real_val) {
            snprintf(msg, sizeof(msg), "{\"unit\":\"%s\",\"value\":%i,\"record\":%i,\"medium\":\"%s\",\"quantity\":\"%s\"}",
              record->unit, (int)record->value->real_val, i, record->function_medium, record->quantity);  
          } else {
            snprintf(msg, sizeof(msg), "{\"unit\":\"%s\",\"value\":%.2f,\"record\":%i,\"medium\":\"%s\",\"quantity\":\"%s\"}",
              record->unit, record->value->real_val, i, record->function_medium, record->quantity);
          }
        }

        /* 
          // MQTT 
          snprintf(topic, sizeof(topic), "/mbus/%s", reply.get_secondary_address());
          Serial.println(topic);
          Serial.println(msg);
          client.publish(topic, msg);
        */

        // Particle Publish
        if(record->is_numeric) {
          Particle.publish(reply.get_secondary_address(), msg);
          Particle.process();
          delay(500);
          Particle.process();
          delay(500);
        }

        if(record) {
          delete record;
        }

        ptr = ptr->next;
      }

      delete data_var;
    }
};



void loop() {
    /*
    if (client.isConnected()) {
        client.loop();
    } else {
        client.connect(MQTTname.c_str());
    }
    */


    if(Time.now() > mbusQueryTimer + 60) {
        // request_data("00000021B05C021B");
        // request_data("00000311B05C021B");
                         // 00000102384D021B
        request_data("00000311FFFFFFFF");

        String s1 = String::format("SystemMem: %d\n", System.freeMemory());
        Serial.println(s1);

        mbusQueryTimer = Time.now();
    }
}
