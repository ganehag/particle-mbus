#include "MBusVifTable.h"

const mbus_variable_vif vif_table[] = {
    /*  Primary VIFs (main table), range 0x00 - 0xFF */

    /*  E000 0nnn    Energy Wh (0.001Wh to 10000Wh) */
    { 0x00, 1.0e-3, "Wh", "Energy" },
    { 0x01, 1.0e-2, "Wh", "Energy" },
    { 0x02, 1.0e-1, "Wh", "Energy" },
    { 0x03, 1.0e0,  "Wh", "Energy" },
    { 0x04, 1.0e1,  "Wh", "Energy" },
    { 0x05, 1.0e2,  "Wh", "Energy" },
    { 0x06, 1.0e3,  "Wh", "Energy" },
    { 0x07, 1.0e4,  "Wh", "Energy" },

    /* E000 1nnn    Energy  J (0.001kJ to 10000kJ) */
    { 0x08, 1.0e0, "J", "Energy" },
    { 0x09, 1.0e1, "J", "Energy" },
    { 0x0A, 1.0e2, "J", "Energy" },
    { 0x0B, 1.0e3, "J", "Energy" },
    { 0x0C, 1.0e4, "J", "Energy" },
    { 0x0D, 1.0e5, "J", "Energy" },
    { 0x0E, 1.0e6, "J", "Energy" },
    { 0x0F, 1.0e7, "J", "Energy" },

    /* E001 0nnn    Volume m^3 (0.001l to 10000l) */
    { 0x10, 1.0e-6, "m^3", "Volume" },
    { 0x11, 1.0e-5, "m^3", "Volume" },
    { 0x12, 1.0e-4, "m^3", "Volume" },
    { 0x13, 1.0e-3, "m^3", "Volume" },
    { 0x14, 1.0e-2, "m^3", "Volume" },
    { 0x15, 1.0e-1, "m^3", "Volume" },
    { 0x16, 1.0e0,  "m^3", "Volume" },
    { 0x17, 1.0e1,  "m^3", "Volume" },

    /* E001 1nnn    Mass kg (0.001kg to 10000kg) */
    { 0x18, 1.0e-3, "kg", "Mass" },
    { 0x19, 1.0e-2, "kg", "Mass" },
    { 0x1A, 1.0e-1, "kg", "Mass" },
    { 0x1B, 1.0e0,  "kg", "Mass" },
    { 0x1C, 1.0e1,  "kg", "Mass" },
    { 0x1D, 1.0e2,  "kg", "Mass" },
    { 0x1E, 1.0e3,  "kg", "Mass" },
    { 0x1F, 1.0e4,  "kg", "Mass" },

    /* E010 00nn    On Time s */
    { 0x20,     1.0, "s", "On time" },  /* seconds */
    { 0x21,    60.0, "s", "On time" },  /* minutes */
    { 0x22,  3600.0, "s", "On time" },  /* hours   */
    { 0x23, 86400.0, "s", "On time" },  /* days    */

    /* E010 01nn    Operating Time s */
    { 0x24,     1.0, "s", "Operating time" },  /* seconds */
    { 0x25,    60.0, "s", "Operating time" },  /* minutes */
    { 0x26,  3600.0, "s", "Operating time" },  /* hours   */
    { 0x27, 86400.0, "s", "Operating time" },  /* days    */

    /* E010 1nnn    Power W (0.001W to 10000W) */
    { 0x28, 1.0e-3, "W", "Power" },
    { 0x29, 1.0e-2, "W", "Power" },
    { 0x2A, 1.0e-1, "W", "Power" },
    { 0x2B, 1.0e0,  "W", "Power" },
    { 0x2C, 1.0e1,  "W", "Power" },
    { 0x2D, 1.0e2,  "W", "Power" },
    { 0x2E, 1.0e3,  "W", "Power" },
    { 0x2F, 1.0e4,  "W", "Power" },

    /* E011 0nnn    Power J/h (0.001kJ/h to 10000kJ/h) */
    { 0x30, 1.0e0, "J/h", "Power" },
    { 0x31, 1.0e1, "J/h", "Power" },
    { 0x32, 1.0e2, "J/h", "Power" },
    { 0x33, 1.0e3, "J/h", "Power" },
    { 0x34, 1.0e4, "J/h", "Power" },
    { 0x35, 1.0e5, "J/h", "Power" },
    { 0x36, 1.0e6, "J/h", "Power" },
    { 0x37, 1.0e7, "J/h", "Power" },

    /* E011 1nnn    Volume Flow m3/h (0.001l/h to 10000l/h) */
    { 0x38, 1.0e-6, "m^3/h", "Volume flow" },
    { 0x39, 1.0e-5, "m^3/h", "Volume flow" },
    { 0x3A, 1.0e-4, "m^3/h", "Volume flow" },
    { 0x3B, 1.0e-3, "m^3/h", "Volume flow" },
    { 0x3C, 1.0e-2, "m^3/h", "Volume flow" },
    { 0x3D, 1.0e-1, "m^3/h", "Volume flow" },
    { 0x3E, 1.0e0,  "m^3/h", "Volume flow" },
    { 0x3F, 1.0e1,  "m^3/h", "Volume flow" },

    /* E100 0nnn     Volume Flow ext.  m^3/min (0.0001l/min to 1000l/min) */
    { 0x40, 1.0e-7, "m^3/min", "Volume flow" },
    { 0x41, 1.0e-6, "m^3/min", "Volume flow" },
    { 0x42, 1.0e-5, "m^3/min", "Volume flow" },
    { 0x43, 1.0e-4, "m^3/min", "Volume flow" },
    { 0x44, 1.0e-3, "m^3/min", "Volume flow" },
    { 0x45, 1.0e-2, "m^3/min", "Volume flow" },
    { 0x46, 1.0e-1, "m^3/min", "Volume flow" },
    { 0x47, 1.0e0,  "m^3/min", "Volume flow" },

    /* E100 1nnn     Volume Flow ext.  m^3/s (0.001ml/s to 10000ml/s) */
    { 0x48, 1.0e-9, "m^3/s", "Volume flow" },
    { 0x49, 1.0e-8, "m^3/s", "Volume flow" },
    { 0x4A, 1.0e-7, "m^3/s", "Volume flow" },
    { 0x4B, 1.0e-6, "m^3/s", "Volume flow" },
    { 0x4C, 1.0e-5, "m^3/s", "Volume flow" },
    { 0x4D, 1.0e-4, "m^3/s", "Volume flow" },
    { 0x4E, 1.0e-3, "m^3/s", "Volume flow" },
    { 0x4F, 1.0e-2, "m^3/s", "Volume flow" },

    /* E101 0nnn     Mass flow kg/h (0.001kg/h to 10000kg/h) */
    { 0x50, 1.0e-3, "kg/h", "Mass flow" },
    { 0x51, 1.0e-2, "kg/h", "Mass flow" },
    { 0x52, 1.0e-1, "kg/h", "Mass flow" },
    { 0x53, 1.0e0,  "kg/h", "Mass flow" },
    { 0x54, 1.0e1,  "kg/h", "Mass flow" },
    { 0x55, 1.0e2,  "kg/h", "Mass flow" },
    { 0x56, 1.0e3,  "kg/h", "Mass flow" },
    { 0x57, 1.0e4,  "kg/h", "Mass flow" },

    /* E101 10nn     Flow Temperature °C (0.001°C to 1°C) */
    { 0x58, 1.0e-3, "°C", "Flow temperature" },
    { 0x59, 1.0e-2, "°C", "Flow temperature" },
    { 0x5A, 1.0e-1, "°C", "Flow temperature" },
    { 0x5B, 1.0e0,  "°C", "Flow temperature" },

    /* E101 11nn Return Temperature °C (0.001°C to 1°C) */
    { 0x5C, 1.0e-3, "°C", "Return temperature" },
    { 0x5D, 1.0e-2, "°C", "Return temperature" },
    { 0x5E, 1.0e-1, "°C", "Return temperature" },
    { 0x5F, 1.0e0,  "°C", "Return temperature" },

    /* E110 00nn    Temperature Difference  K   (mK to  K) */
    { 0x60, 1.0e-3, "K", "Temperature difference" },
    { 0x61, 1.0e-2, "K", "Temperature difference" },
    { 0x62, 1.0e-1, "K", "Temperature difference" },
    { 0x63, 1.0e0,  "K", "Temperature difference" },

    /* E110 01nn     External Temperature °C (0.001°C to 1°C) */
    { 0x64, 1.0e-3, "°C", "External temperature" },
    { 0x65, 1.0e-2, "°C", "External temperature" },
    { 0x66, 1.0e-1, "°C", "External temperature" },
    { 0x67, 1.0e0,  "°C", "External temperature" },

    /* E110 10nn     Pressure bar (1mbar to 1000mbar) */
    { 0x68, 1.0e-3, "bar", "Pressure" },
    { 0x69, 1.0e-2, "bar", "Pressure" },
    { 0x6A, 1.0e-1, "bar", "Pressure" },
    { 0x6B, 1.0e0,  "bar", "Pressure" },

    /* E110 110n     Time Point */
    { 0x6C, 1.0e0, "-", "Time point (date)" },            /* n = 0        date, data type G */
    { 0x6D, 1.0e0, "-", "Time point (date & time)" },     /* n = 1 time & date, data type F */

    /* E110 1110     Units for H.C.A. dimensionless */
    { 0x6E, 1.0e0,  "Units for H.C.A.", "H.C.A." },

    /* E110 1111     Reserved */
    { 0x6F, 0.0,  "Reserved", "Reserved" },

    /* E111 00nn     Averaging Duration s */
    { 0x70,     1.0, "s", "Averaging Duration" },  /* seconds */
    { 0x71,    60.0, "s", "Averaging Duration" },  /* minutes */
    { 0x72,  3600.0, "s", "Averaging Duration" },  /* hours   */
    { 0x73, 86400.0, "s", "Averaging Duration" },  /* days    */

    /* E111 01nn     Actuality Duration s */
    { 0x74,     1.0, "s", "Averaging Duration" },  /* seconds */
    { 0x75,    60.0, "s", "Averaging Duration" },  /* minutes */
    { 0x76,  3600.0, "s", "Averaging Duration" },  /* hours   */
    { 0x77, 86400.0, "s", "Averaging Duration" },  /* days    */

    /* Fabrication No */
    { 0x78, 1.0, "", "Fabrication No" },

    /* E111 1001 (Enhanced) Identification */
    { 0x79, 1.0, "", "(Enhanced) Identification" },

    /* E111 1010 Bus Address */
    { 0x7A, 1.0, "", "Bus Address" },

    /* Any VIF: 7Eh */
    { 0x7E, 1.0, "", "Any VIF" },

    /* Manufacturer specific: 7Fh */
    { 0x7F, 1.0, "", "Manufacturer specific" },

    /* Any VIF: 7Eh */
    { 0xFE, 1.0, "", "Any VIF" },

    /* Manufacturer specific: FFh */
    { 0xFF, 1.0, "", "Manufacturer specific" },


/* Main VIFE-Code Extension table (following VIF=FDh for primary VIF)
   See 8.4.4 a, only some of them are here. Using range 0x100 - 0x1FF */

    /* E000 00nn   Credit of 10nn-3 of the nominal local legal currency units */
    { 0x100, 1.0e-3, "Currency units", "Credit" },
    { 0x101, 1.0e-2, "Currency units", "Credit" },
    { 0x102, 1.0e-1, "Currency units", "Credit" },
    { 0x103, 1.0e0,  "Currency units", "Credit" },

    /* E000 01nn   Debit of 10nn-3 of the nominal local legal currency units */
    { 0x104, 1.0e-3, "Currency units", "Debit" },
    { 0x105, 1.0e-2, "Currency units", "Debit" },
    { 0x106, 1.0e-1, "Currency units", "Debit" },
    { 0x107, 1.0e0,  "Currency units", "Debit" },

    /* E000 1000 Access Number (transmission count) */
    { 0x108, 1.0e0,  "", "Access Number (transmission count)" },

    /* E000 1001 Medium (as in fixed header) */
    { 0x109, 1.0e0,  "", "Device type" },

    /* E000 1010 Manufacturer (as in fixed header) */
    { 0x10A, 1.0e0,  "", "Manufacturer" },

    /* E000 1011 Parameter set identification */
    { 0x10B, 1.0e0,  "", "Parameter set identification" },

    /* E000 1100 Model / Version */
    { 0x10C, 1.0e0,  "", "Device type" },

    /* E000 1101 Hardware version # */
    { 0x10D, 1.0e0,  "", "Hardware version" },

    /* E000 1110 Firmware version # */
    { 0x10E, 1.0e0,  "", "Firmware version" },

    /* E000 1111 Software version # */
    { 0x10F, 1.0e0,  "", "Software version" },


    /* E001 0000 Customer location */
    { 0x110, 1.0e0,  "", "Customer location" },

    /* E001 0001 Customer */
    { 0x111, 1.0e0,  "", "Customer" },

    /* E001 0010 Access Code User */
    { 0x112, 1.0e0,  "", "Access Code User" },

    /* E001 0011 Access Code Operator */
    { 0x113, 1.0e0,  "", "Access Code Operator" },

    /* E001 0100 Access Code System Operator */
    { 0x114, 1.0e0,  "", "Access Code System Operator" },

    /* E001 0101 Access Code Developer */
    { 0x115, 1.0e0,  "", "Access Code Developer" },

    /* E001 0110 Password */
    { 0x116, 1.0e0,  "", "Password" },

    /* E001 0111 Error flags (binary) */
    { 0x117, 1.0e0,  "", "Error flags" },

    /* E001 1000 Error mask */
    { 0x118, 1.0e0,  "", "Error mask" },

    /* E001 1001 Reserved */
    { 0x119, 1.0e0,  "Reserved", "Reserved" },


    /* E001 1010 Digital Output (binary) */
    { 0x11A, 1.0e0,  "", "Digital Output" },

    /* E001 1011 Digital Input (binary) */
    { 0x11B, 1.0e0,  "", "Digital Input" },

    /* E001 1100 Baudrate [Baud] */
    { 0x11C, 1.0e0,  "Baud", "Baudrate" },

    /* E001 1101 Response delay time [bittimes] */
    { 0x11D, 1.0e0,  "Bittimes", "Response delay time" },

    /* E001 1110 Retry */
    { 0x11E, 1.0e0,  "", "Retry" },

    /* E001 1111 Reserved */
    { 0x11F, 1.0e0,  "Reserved", "Reserved" },


    /* E010 0000 First storage # for cyclic storage */
    { 0x120, 1.0e0,  "", "First storage # for cyclic storage" },

    /* E010 0001 Last storage # for cyclic storage */
    { 0x121, 1.0e0,  "", "Last storage # for cyclic storage" },

    /* E010 0010 Size of storage block */
    { 0x122, 1.0e0,  "", "Size of storage block" },

    /* E010 0011 Reserved */
    { 0x123, 1.0e0,  "Reserved", "Reserved" },

    /* E010 01nn Storage interval [sec(s)..day(s)] */
    { 0x124,        1.0,  "s", "Storage interval" },   /* second(s) */
    { 0x125,       60.0,  "s", "Storage interval" },   /* minute(s) */
    { 0x126,     3600.0,  "s", "Storage interval" },   /* hour(s)   */
    { 0x127,    86400.0,  "s", "Storage interval" },   /* day(s)    */
    { 0x128,  2629743.83, "s", "Storage interval" },   /* month(s)  */
    { 0x129, 31556926.0,  "s", "Storage interval" },   /* year(s)   */

    /* E010 1010 Reserved */
    { 0x12A, 1.0e0,  "Reserved", "Reserved" },

    /* E010 1011 Reserved */
    { 0x12B, 1.0e0,  "Reserved", "Reserved" },

    /* E010 11nn Duration since last readout [sec(s)..day(s)] */
    { 0x12C,     1.0, "s", "Duration since last readout" },  /* seconds */
    { 0x12D,    60.0, "s", "Duration since last readout" },  /* minutes */
    { 0x12E,  3600.0, "s", "Duration since last readout" },  /* hours   */
    { 0x12F, 86400.0, "s", "Duration since last readout" },  /* days    */

    /* E011 0000 Start (date/time) of tariff  */
    /* The information about usage of data type F (date and time) or data type G (date) can */
    /* be derived from the datafield (0010b: type G / 0100: type F). */
    { 0x130, 1.0e0,  "Reserved", "Reserved" }, /* ???? */

    /* E011 00nn Duration of tariff (nn=01 ..11: min to days) */
    { 0x131,       60.0,  "s", "Storage interval" },   /* minute(s) */
    { 0x132,     3600.0,  "s", "Storage interval" },   /* hour(s)   */
    { 0x133,    86400.0,  "s", "Storage interval" },   /* day(s)    */

    /* E011 01nn Period of tariff [sec(s) to day(s)]  */
    { 0x134,        1.0, "s", "Period of tariff" },  /* seconds  */
    { 0x135,       60.0, "s", "Period of tariff" },  /* minutes  */
    { 0x136,     3600.0, "s", "Period of tariff" },  /* hours    */
    { 0x137,    86400.0, "s", "Period of tariff" },  /* days     */
    { 0x138,  2629743.83,"s", "Period of tariff" },  /* month(s) */
    { 0x139, 31556926.0, "s", "Period of tariff" },  /* year(s)  */

    /* E011 1010 dimensionless / no VIF */
    { 0x13A, 1.0e0,  "", "Dimensionless" },

    /* E011 1011 Reserved */
    { 0x13B, 1.0e0,  "Reserved", "Reserved" },

    /* E011 11xx Reserved */
    { 0x13C, 1.0e0,  "Reserved", "Reserved" },
    { 0x13D, 1.0e0,  "Reserved", "Reserved" },
    { 0x13E, 1.0e0,  "Reserved", "Reserved" },
    { 0x13F, 1.0e0,  "Reserved", "Reserved" },

    /* E100 nnnn   Volts electrical units */
    { 0x140, 1.0e-9, "V", "Voltage" },
    { 0x141, 1.0e-8, "V", "Voltage" },
    { 0x142, 1.0e-7, "V", "Voltage" },
    { 0x143, 1.0e-6, "V", "Voltage" },
    { 0x144, 1.0e-5, "V", "Voltage" },
    { 0x145, 1.0e-4, "V", "Voltage" },
    { 0x146, 1.0e-3, "V", "Voltage" },
    { 0x147, 1.0e-2, "V", "Voltage" },
    { 0x148, 1.0e-1, "V", "Voltage" },
    { 0x149, 1.0e0,  "V", "Voltage" },
    { 0x14A, 1.0e1,  "V", "Voltage" },
    { 0x14B, 1.0e2,  "V", "Voltage" },
    { 0x14C, 1.0e3,  "V", "Voltage" },
    { 0x14D, 1.0e4,  "V", "Voltage" },
    { 0x14E, 1.0e5,  "V", "Voltage" },
    { 0x14F, 1.0e6,  "V", "Voltage" },

    /* E101 nnnn   A */
    { 0x150, 1.0e-12, "A", "Current" },
    { 0x151, 1.0e-11, "A", "Current" },
    { 0x152, 1.0e-10, "A", "Current" },
    { 0x153, 1.0e-9,  "A", "Current" },
    { 0x154, 1.0e-8,  "A", "Current" },
    { 0x155, 1.0e-7,  "A", "Current" },
    { 0x156, 1.0e-6,  "A", "Current" },
    { 0x157, 1.0e-5,  "A", "Current" },
    { 0x158, 1.0e-4,  "A", "Current" },
    { 0x159, 1.0e-3,  "A", "Current" },
    { 0x15A, 1.0e-2,  "A", "Current" },
    { 0x15B, 1.0e-1,  "A", "Current" },
    { 0x15C, 1.0e0,   "A", "Current" },
    { 0x15D, 1.0e1,   "A", "Current" },
    { 0x15E, 1.0e2,   "A", "Current" },
    { 0x15F, 1.0e3,   "A", "Current" },

    /* E110 0000 Reset counter */
    { 0x160, 1.0e0,  "", "Reset counter" },

    /* E110 0001 Cumulation counter */
    { 0x161, 1.0e0,  "", "Cumulation counter" },

    /* E110 0010 Control signal */
    { 0x162, 1.0e0,  "", "Control signal" },

    /* E110 0011 Day of week */
    { 0x163, 1.0e0,  "", "Day of week" },

    /* E110 0100 Week number */
    { 0x164, 1.0e0,  "", "Week number" },

    /* E110 0101 Time point of day change */
    { 0x165, 1.0e0,  "", "Time point of day change" },

    /* E110 0110 State of parameter activation */
    { 0x166, 1.0e0,  "", "State of parameter activation" },

    /* E110 0111 Special supplier information */
    { 0x167, 1.0e0,  "", "Special supplier information" },

    /* E110 10pp Duration since last cumulation [hour(s)..years(s)] */
    { 0x168,     3600.0, "s", "Duration since last cumulation" },  /* hours    */
    { 0x169,    86400.0, "s", "Duration since last cumulation" },  /* days     */
    { 0x16A,  2629743.83,"s", "Duration since last cumulation" },  /* month(s) */
    { 0x16B, 31556926.0, "s", "Duration since last cumulation" },  /* year(s)  */

    /* E110 11pp Operating time battery [hour(s)..years(s)] */
    { 0x16C,     3600.0, "s", "Operating time battery" },  /* hours    */
    { 0x16D,    86400.0, "s", "Operating time battery" },  /* days     */
    { 0x16E,  2629743.83,"s", "Operating time battery" },  /* month(s) */
    { 0x16F, 31556926.0, "s", "Operating time battery" },  /* year(s)  */

    /* E111 0000 Date and time of battery change */
    { 0x170, 1.0e0,  "", "Date and time of battery change" },

    /* E111 0001-1111 Reserved */
    { 0x171, 1.0e0,  "Reserved", "Reserved" },
    { 0x172, 1.0e0,  "Reserved", "Reserved" },
    { 0x173, 1.0e0,  "Reserved", "Reserved" },
    { 0x174, 1.0e0,  "Reserved", "Reserved" },
    { 0x175, 1.0e0,  "Reserved", "Reserved" },
    { 0x176, 1.0e0,  "Reserved", "Reserved" },
    { 0x177, 1.0e0,  "Reserved", "Reserved" },
    { 0x178, 1.0e0,  "Reserved", "Reserved" },
    { 0x179, 1.0e0,  "Reserved", "Reserved" },
    { 0x17A, 1.0e0,  "Reserved", "Reserved" },
    { 0x17B, 1.0e0,  "Reserved", "Reserved" },
    { 0x17C, 1.0e0,  "Reserved", "Reserved" },
    { 0x17D, 1.0e0,  "Reserved", "Reserved" },
    { 0x17E, 1.0e0,  "Reserved", "Reserved" },
    { 0x17F, 1.0e0,  "Reserved", "Reserved" },


/* Alternate VIFE-Code Extension table (following VIF=0FBh for primary VIF)
   See 8.4.4 b, only some of them are here. Using range 0x200 - 0x2FF */

    /* E000 000n Energy 10(n-1) MWh 0.1MWh to 1MWh */
    { 0x200, 1.0e5,  "Wh", "Energy" },
    { 0x201, 1.0e6,  "Wh", "Energy" },

    /* E000 001n Reserved */
    { 0x202, 1.0e0,  "Reserved", "Reserved" },
    { 0x203, 1.0e0,  "Reserved", "Reserved" },

    /* E000 01nn Reserved */
    { 0x204, 1.0e0,  "Reserved", "Reserved" },
    { 0x205, 1.0e0,  "Reserved", "Reserved" },
    { 0x206, 1.0e0,  "Reserved", "Reserved" },
    { 0x207, 1.0e0,  "Reserved", "Reserved" },

    /* E000 100n Energy 10(n-1) GJ 0.1GJ to 1GJ */
    { 0x208, 1.0e8,  "Reserved", "Energy" },
    { 0x209, 1.0e9,  "Reserved", "Energy" },

    /* E000 101n Reserved */
    { 0x20A, 1.0e0,  "Reserved", "Reserved" },
    { 0x20B, 1.0e0,  "Reserved", "Reserved" },

    /* E000 11nn Reserved */
    { 0x20C, 1.0e0,  "Reserved", "Reserved" },
    { 0x20D, 1.0e0,  "Reserved", "Reserved" },
    { 0x20E, 1.0e0,  "Reserved", "Reserved" },
    { 0x20F, 1.0e0,  "Reserved", "Reserved" },

    /* E001 000n Volume 10(n+2) m3 100m3 to 1000m3 */
    { 0x210, 1.0e2,  "m^3", "Volume" },
    { 0x211, 1.0e3,  "m^3", "Volume" },

    /* E001 001n Reserved */
    { 0x212, 1.0e0,  "Reserved", "Reserved" },
    { 0x213, 1.0e0,  "Reserved", "Reserved" },

    /* E001 01nn Reserved */
    { 0x214, 1.0e0,  "Reserved", "Reserved" },
    { 0x215, 1.0e0,  "Reserved", "Reserved" },
    { 0x216, 1.0e0,  "Reserved", "Reserved" },
    { 0x217, 1.0e0,  "Reserved", "Reserved" },

    /* E001 100n Mass 10(n+2) t 100t to 1000t */
    { 0x218, 1.0e5,  "kg", "Mass" },
    { 0x219, 1.0e6,  "kg", "Mass" },

    /* E001 1010 to E010 0000 Reserved */
    { 0x21A, 1.0e0,  "Reserved", "Reserved" },
    { 0x21B, 1.0e0,  "Reserved", "Reserved" },
    { 0x21C, 1.0e0,  "Reserved", "Reserved" },
    { 0x21D, 1.0e0,  "Reserved", "Reserved" },
    { 0x21E, 1.0e0,  "Reserved", "Reserved" },
    { 0x21F, 1.0e0,  "Reserved", "Reserved" },
    { 0x220, 1.0e0,  "Reserved", "Reserved" },

    /* E010 0001 Volume 0,1 feet^3 */
    { 0x221, 1.0e-1, "feet^3", "Volume" },

    /* E010 001n Volume 0,1-1 american gallon */
    { 0x222, 1.0e-1, "American gallon", "Volume" },
    { 0x223, 1.0e-0, "American gallon", "Volume" },

    /* E010 0100    Volume flow 0,001 american gallon/min */
    { 0x224, 1.0e-3, "American gallon/min", "Volume flow" },

    /* E010 0101 Volume flow 1 american gallon/min */
    { 0x225, 1.0e0,  "American gallon/min", "Volume flow" },

    /* E010 0110 Volume flow 1 american gallon/h */
    { 0x226, 1.0e0,  "American gallon/h", "Volume flow" },

    /* E010 0111 Reserved */
    { 0x227, 1.0e0, "Reserved", "Reserved" },

    /* E010 100n Power 10(n-1) MW 0.1MW to 1MW */
    { 0x228, 1.0e5, "W", "Power" },
    { 0x229, 1.0e6, "W", "Power" },

    /* E010 101n Reserved */
    { 0x22A, 1.0e0, "Reserved", "Reserved" },
    { 0x22B, 1.0e0, "Reserved", "Reserved" },

    /* E010 11nn Reserved */
    { 0x22C, 1.0e0, "Reserved", "Reserved" },
    { 0x22D, 1.0e0, "Reserved", "Reserved" },
    { 0x22E, 1.0e0, "Reserved", "Reserved" },
    { 0x22F, 1.0e0, "Reserved", "Reserved" },

    /* E011 000n Power 10(n-1) GJ/h 0.1GJ/h to 1GJ/h */
    { 0x230, 1.0e8, "J", "Power" },
    { 0x231, 1.0e9, "J", "Power" },

    /* E011 0010 to E101 0111 Reserved */
    { 0x232, 1.0e0, "Reserved", "Reserved" },
    { 0x233, 1.0e0, "Reserved", "Reserved" },
    { 0x234, 1.0e0, "Reserved", "Reserved" },
    { 0x235, 1.0e0, "Reserved", "Reserved" },
    { 0x236, 1.0e0, "Reserved", "Reserved" },
    { 0x237, 1.0e0, "Reserved", "Reserved" },
    { 0x238, 1.0e0, "Reserved", "Reserved" },
    { 0x239, 1.0e0, "Reserved", "Reserved" },
    { 0x23A, 1.0e0, "Reserved", "Reserved" },
    { 0x23B, 1.0e0, "Reserved", "Reserved" },
    { 0x23C, 1.0e0, "Reserved", "Reserved" },
    { 0x23D, 1.0e0, "Reserved", "Reserved" },
    { 0x23E, 1.0e0, "Reserved", "Reserved" },
    { 0x23F, 1.0e0, "Reserved", "Reserved" },
    { 0x240, 1.0e0, "Reserved", "Reserved" },
    { 0x241, 1.0e0, "Reserved", "Reserved" },
    { 0x242, 1.0e0, "Reserved", "Reserved" },
    { 0x243, 1.0e0, "Reserved", "Reserved" },
    { 0x244, 1.0e0, "Reserved", "Reserved" },
    { 0x245, 1.0e0, "Reserved", "Reserved" },
    { 0x246, 1.0e0, "Reserved", "Reserved" },
    { 0x247, 1.0e0, "Reserved", "Reserved" },
    { 0x248, 1.0e0, "Reserved", "Reserved" },
    { 0x249, 1.0e0, "Reserved", "Reserved" },
    { 0x24A, 1.0e0, "Reserved", "Reserved" },
    { 0x24B, 1.0e0, "Reserved", "Reserved" },
    { 0x24C, 1.0e0, "Reserved", "Reserved" },
    { 0x24D, 1.0e0, "Reserved", "Reserved" },
    { 0x24E, 1.0e0, "Reserved", "Reserved" },
    { 0x24F, 1.0e0, "Reserved", "Reserved" },
    { 0x250, 1.0e0, "Reserved", "Reserved" },
    { 0x251, 1.0e0, "Reserved", "Reserved" },
    { 0x252, 1.0e0, "Reserved", "Reserved" },
    { 0x253, 1.0e0, "Reserved", "Reserved" },
    { 0x254, 1.0e0, "Reserved", "Reserved" },
    { 0x255, 1.0e0, "Reserved", "Reserved" },
    { 0x256, 1.0e0, "Reserved", "Reserved" },
    { 0x257, 1.0e0, "Reserved", "Reserved" },

    /* E101 10nn Flow Temperature 10(nn-3) °F 0.001°F to 1°F */
    { 0x258, 1.0e-3, "°F", "Flow temperature" },
    { 0x259, 1.0e-2, "°F", "Flow temperature" },
    { 0x25A, 1.0e-1, "°F", "Flow temperature" },
    { 0x25B, 1.0e0,  "°F", "Flow temperature" },

    /* E101 11nn Return Temperature 10(nn-3) °F 0.001°F to 1°F */
    { 0x25C, 1.0e-3, "°F", "Return temperature" },
    { 0x25D, 1.0e-2, "°F", "Return temperature" },
    { 0x25E, 1.0e-1, "°F", "Return temperature" },
    { 0x25F, 1.0e0,  "°F", "Return temperature" },

    /* E110 00nn Temperature Difference 10(nn-3) °F 0.001°F to 1°F */
    { 0x260, 1.0e-3, "°F", "Temperature difference" },
    { 0x261, 1.0e-2, "°F", "Temperature difference" },
    { 0x262, 1.0e-1, "°F", "Temperature difference" },
    { 0x263, 1.0e0,  "°F", "Temperature difference" },

    /* E110 01nn External Temperature 10(nn-3) °F 0.001°F to 1°F */
    { 0x264, 1.0e-3, "°F", "External temperature" },
    { 0x265, 1.0e-2, "°F", "External temperature" },
    { 0x266, 1.0e-1, "°F", "External temperature" },
    { 0x267, 1.0e0,  "°F", "External temperature" },

    /* E110 1nnn Reserved */
    { 0x268, 1.0e0, "Reserved", "Reserved" },
    { 0x269, 1.0e0, "Reserved", "Reserved" },
    { 0x26A, 1.0e0, "Reserved", "Reserved" },
    { 0x26B, 1.0e0, "Reserved", "Reserved" },
    { 0x26C, 1.0e0, "Reserved", "Reserved" },
    { 0x26D, 1.0e0, "Reserved", "Reserved" },
    { 0x26E, 1.0e0, "Reserved", "Reserved" },
    { 0x26F, 1.0e0, "Reserved", "Reserved" },

    /* E111 00nn Cold / Warm Temperature Limit 10(nn-3) °F 0.001°F to 1°F */
    { 0x270, 1.0e-3, "°F", "Cold / Warm Temperature Limit" },
    { 0x271, 1.0e-2, "°F", "Cold / Warm Temperature Limit" },
    { 0x272, 1.0e-1, "°F", "Cold / Warm Temperature Limit" },
    { 0x273, 1.0e0,  "°F", "Cold / Warm Temperature Limit" },

    /* E111 01nn Cold / Warm Temperature Limit 10(nn-3) °C 0.001°C to 1°C */
    { 0x274, 1.0e-3, "°C", "Cold / Warm Temperature Limit" },
    { 0x275, 1.0e-2, "°C", "Cold / Warm Temperature Limit" },
    { 0x276, 1.0e-1, "°C", "Cold / Warm Temperature Limit" },
    { 0x277, 1.0e0,  "°C", "Cold / Warm Temperature Limit" },

    /* E111 1nnn cumul. count max power § 10(nnn-3) W 0.001W to 10000W */
    { 0x278, 1.0e-3, "W", "Cumul count max power" },
    { 0x279, 1.0e-3, "W", "Cumul count max power" },
    { 0x27A, 1.0e-1, "W", "Cumul count max power" },
    { 0x27B, 1.0e0,  "W", "Cumul count max power" },
    { 0x27C, 1.0e1,  "W", "Cumul count max power" },
    { 0x27D, 1.0e2,  "W", "Cumul count max power" },
    { 0x27E, 1.0e3,  "W", "Cumul count max power" },
    { 0x27F, 1.0e4,  "W", "Cumul count max power" },

/* End of array */
    { 0xFFFF, 0.0, "", "" },
};

static const mbus_variable_vif fixed_table[] = {
    /* 00, 01 left out */
    { 0x02, 1.0e0, "Wh", "Energy" },
    { 0x03, 1.0e1, "Wh", "Energy" },
    { 0x04, 1.0e2, "Wh", "Energy" },
    { 0x05, 1.0e3, "Wh", "Energy" },
    { 0x06, 1.0e4, "Wh", "Energy" },
    { 0x07, 1.0e5, "Wh", "Energy" },
    { 0x08, 1.0e6, "Wh", "Energy" },
    { 0x09, 1.0e7, "Wh", "Energy" },
    { 0x0A, 1.0e8, "Wh", "Energy" },

    { 0x0B, 1.0e3, "J", "Energy" },
    { 0x0C, 1.0e4, "J", "Energy" },
    { 0x0D, 1.0e5, "J", "Energy" },
    { 0x0E, 1.0e6, "J", "Energy" },
    { 0x0F, 1.0e7, "J", "Energy" },
    { 0x10, 1.0e8, "J", "Energy" },
    { 0x11, 1.0e9, "J", "Energy" },
    { 0x12, 1.0e10,"J", "Energy" },
    { 0x13, 1.0e11,"J", "Energy" },

    { 0x14, 1.0e0, "W", "Power" },
    { 0x15, 1.0e0, "W", "Power" },
    { 0x16, 1.0e0, "W", "Power" },
    { 0x17, 1.0e0, "W", "Power" },
    { 0x18, 1.0e0, "W", "Power" },
    { 0x19, 1.0e0, "W", "Power" },
    { 0x1A, 1.0e0, "W", "Power" },
    { 0x1B, 1.0e0, "W", "Power" },
    { 0x1C, 1.0e0, "W", "Power" },

    { 0x1D, 1.0e3, "J/h", "Energy" },
    { 0x1E, 1.0e4, "J/h", "Energy" },
    { 0x1F, 1.0e5, "J/h", "Energy" },
    { 0x20, 1.0e6, "J/h", "Energy" },
    { 0x21, 1.0e7, "J/h", "Energy" },
    { 0x22, 1.0e8, "J/h", "Energy" },
    { 0x23, 1.0e9, "J/h", "Energy" },
    { 0x24, 1.0e10,"J/h", "Energy" },
    { 0x25, 1.0e11,"J/h", "Energy" },

    { 0x26, 1.0e-6,"m^3", "Volume" },
    { 0x27, 1.0e-5,"m^3", "Volume" },
    { 0x28, 1.0e-4,"m^3", "Volume" },
    { 0x29, 1.0e-3,"m^3", "Volume" },
    { 0x2A, 1.0e-2,"m^3", "Volume" },
    { 0x2B, 1.0e-1,"m^3", "Volume" },
    { 0x2C, 1.0e0, "m^3", "Volume" },
    { 0x2D, 1.0e1, "m^3", "Volume" },
    { 0x2E, 1.0e2, "m^3", "Volume" },

    { 0x2F, 1.0e-5,"m^3/h", "Volume flow" },
    { 0x31, 1.0e-4,"m^3/h", "Volume flow" },
    { 0x32, 1.0e-3,"m^3/h", "Volume flow" },
    { 0x33, 1.0e-2,"m^3/h", "Volume flow" },
    { 0x34, 1.0e-1,"m^3/h", "Volume flow" },
    { 0x35, 1.0e0, "m^3/h", "Volume flow" },
    { 0x36, 1.0e1, "m^3/h", "Volume flow" },
    { 0x37, 1.0e2, "m^3/h", "Volume flow" },

    { 0x38, 1.0e-3, "°C", "Temperature" },

    { 0x39, 1.0e0,  "Units for H.C.A.", "H.C.A." },

    { 0x3A, 0.0,  "Reserved", "Reserved" },
    { 0x3B, 0.0,  "Reserved", "Reserved" },
    { 0x3C, 0.0,  "Reserved", "Reserved" },
    { 0x3D, 0.0,  "Reserved", "Reserved" },

    { 0x3E, 1.0e0,  "", "historic" },

    { 0x3F, 1.0e0,  "", "No units" },

/* end of array */
    { 0xFFFF, 0.0, "", "" },
};
