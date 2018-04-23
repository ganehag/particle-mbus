// Example usage for MBus library by Mikael Ganehag Brorsson.

#include "MBus.h"

// Initialize objects from the lib
MBus mBus;

void setup() {
    // Call functions on initialized library objects that require hardware
    mBus.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    mBus.process();
}
