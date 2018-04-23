#include <MBusRecord.h>
#include <string.h>

MBusString::MBusString() {
    this->value = NULL;
    this->size = 0;
};

MBusString::MBusString(char *str, unsigned int size) {
    this->value = NULL;
    this->size = 0;
    this->set(str, size);
};

MBusString::~MBusString() {
    if(this->value != NULL) {
        delete this->value;
    };
};

void
MBusString::set(char *str, unsigned int size) {
    if(this->value != NULL) {
        delete this->value;
    };

    this->value = new char[size + 1]; // +1 for NULL termination
    this->size = size;
    bcopy(str, this->value, size);
    this->value[size] = '\0'; // terminate string
};

MBusValue::MBusValue() {
    this->real_val = 0;
    this->str_val = new MBusString();
};

MBusValue::~MBusValue() {
    if(this->str_val != NULL) {
        delete this->str_val;
    }
};

MBusRecord::MBusRecord() {
    this->value = new MBusValue();
    this->is_numeric = false;
    this->unit = NULL;
    this->function_medium = NULL;
    this->quantity = NULL;
    this->device = 0;
    this->tariff = 0;
    this->storage_number = 0;
};

MBusRecord::~MBusRecord() {
    if(this->value != NULL) {
        delete this->value;
    }
};