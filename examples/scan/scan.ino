/*
 * Perform a scan of secondary addresses
 * report result using Particle.publish
 * 
 * This solution uses a state machine
 * to handle the scan iterations.
 *
*/

#include "MBus.h"

#define STATEM_IDLE 0
#define STATEM_PROBE 1
#define STATEM_NEXT_POS 2
#define STATEM_PREV_POS 3
#define STATEM_WILDCARD_INC 4
#define STATEM_SET_MASK 5
#define WILDCARD_FLAG 128

struct stateMachine {
    unsigned char state;
    unsigned char pos;
    char queryMask[17];
    char mask[17];
};


bool success = Particle.function("scanBus", scanBus);
struct stateMachine machine;
MBusSerialHandle mbusSerial(&Serial1);


int scanBus(String extra) {
    const char *mask = extra.c_str();

    mbusSerial.setBaudrate(2400);
    MBus::initSlaves(&mbusSerial);

    if (MBus::isSecondaryAddress(mask)) {
        snprintf(machine.queryMask, sizeof(machine.queryMask), mask);
        for(int i = 0; i < 16; i++) {
            if (machine.queryMask[i] == 'f' || machine.queryMask[i] == 'F') {
                // Assign WILDCARD_FLAG to this position to keep track of it
                // as wildcards needs to be interated over.
                machine.queryMask[i] |= WILDCARD_FLAG;
            }
        }
        machine.state = STATEM_WILDCARD_INC;
        return 0;
    }

    return -1;
}


void setup() {
  Serial.begin(9600);

  machine.state = STATEM_IDLE;
  machine.pos = 0;
  memset(machine.queryMask, 0, sizeof(machine.queryMask));
  memset(machine.mask, 0, sizeof(machine.mask));
  
  pinMode(D0, OUTPUT);
  digitalWrite(D0, HIGH);
}


void loop() {
    switch(machine.state) {
        case STATEM_PROBE:
            char matching_mask[17];
            Serial.printlnf("Scanning: %s", machine.mask);
            
            switch(mbusSerial.probeSecondaryAddress(machine.mask, matching_mask)) {
                case MBUS_PROBE_SINGLE:
                    Particle.publish("mbus/found", matching_mask, 3600, PRIVATE);
                    machine.state = STATEM_WILDCARD_INC;
                break;
                case MBUS_PROBE_COLLISION:
                    machine.state = STATEM_NEXT_POS;
                break;
                case MBUS_PROBE_NOTHING:
                    machine.state = STATEM_WILDCARD_INC;
                break;
            }
        break;
        case STATEM_NEXT_POS:
            if (machine.pos < 15) {
                machine.pos++;
                machine.state = STATEM_WILDCARD_INC;
            } else {
                machine.state = STATEM_IDLE;
                Particle.publish("mbus/event", "stop", 3600, PRIVATE);
            }
            
        break;
        case STATEM_PREV_POS:
            if (machine.pos > 0) {
                if(machine.queryMask[machine.pos] & WILDCARD_FLAG) {
                    machine.queryMask[machine.pos] = 'F' | WILDCARD_FLAG;
                }
                machine.pos--;
                machine.state = STATEM_WILDCARD_INC;
            } else {
                machine.state = STATEM_IDLE;
                Particle.publish("mbus/event", "stop", 3600, PRIVATE);
                // We are done here
            }
        break;
        case STATEM_WILDCARD_INC:
            machine.state = STATEM_SET_MASK;

            if (machine.queryMask[machine.pos] & WILDCARD_FLAG) {
                char mask_c = machine.queryMask[machine.pos] & (WILDCARD_FLAG ^ 0xFF);

                if(mask_c == 'f' || mask_c == 'F') {
                    machine.queryMask[machine.pos] = '0' | WILDCARD_FLAG;
                } else if(mask_c >= '0' && mask_c < '9') {
                    machine.queryMask[machine.pos]++;
                } else {
                    // Nothing more to scan here
                    machine.state = STATEM_PREV_POS;
                }
            }
            
        break;
        case STATEM_SET_MASK:
            for(int i = 0; i < 16; i++) {
                machine.mask[i] = machine.queryMask[i] & (WILDCARD_FLAG ^ 0xFF);
            }
            machine.state = STATEM_PROBE;
        break;
    }
}
