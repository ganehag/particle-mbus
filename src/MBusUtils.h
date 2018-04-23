#ifndef __MBUS_UTILS_H__
#define __MBUS_UTILS_H__

#include "MBusDefines.h"
#include "MBusDataRecord.h"
#include "MBusValueInformationBlock.h"

class MBusUtils {
public:
    static void str_decode(unsigned char *dst, const unsigned char *src, size_t len);
    static unsigned char dif_datalength_lookup(unsigned char dif);
    static long long bcd_decode(unsigned char *bcd_data, size_t bcd_data_size);


    static int vib_unit_normalize(MBusValueInformationBlock *vib, double value, char **unit_out, double *value_out, char **quantity_out);
    static int vif_unit_normalize(int vif, double value, char **unit_out, double *value_out, char **quantity_out);


    static long data_record_storage_number(MBusDataRecord *record);
    static long data_record_tariff(MBusDataRecord *record);
    static int data_record_device(MBusDataRecord *record);
    static const char *data_record_function(MBusDataRecord *record);


    static int variable_value_decode(MBusDataRecord *record, double *value_out_real, char **value_out_str, int *value_out_str_size);

    static int is_primary_address(int value);
    static int is_secondary_address(const char * value);

    /*
    int mbus_data_manufacturer_encode(unsigned char *m_data, unsigned char *m_code);
    const char *mbus_decode_manufacturer(unsigned char byte1, unsigned char byte2);
    const unsigned char *mbus_data_product_name(mbus_data_variable_header *header);

    int mbus_data_bcd_encode(unsigned char *bcd_data, size_t bcd_data_size, int value);
    int mbus_data_int_encode(unsigned char *int_data, size_t int_data_size, int value);

    long long mbus_data_bcd_decode(unsigned char *bcd_data, size_t bcd_data_size);
    int mbus_data_int_decode(unsigned char *int_data, size_t int_data_size, int *value);
    int mbus_data_long_decode(unsigned char *int_data, size_t int_data_size, long *value);
    int mbus_data_long_long_decode(unsigned char *int_data, size_t int_data_size, long long *value);

    float mbus_data_float_decode(unsigned char *float_data);

    void mbus_data_tm_decode(struct tm *t, unsigned char *t_data, size_t t_data_size);

    void mbus_data_str_decode(unsigned char *dst, const unsigned char *src, size_t len);

    void mbus_data_bin_decode(unsigned char *dst, const unsigned char *src, size_t len, size_t max_len);

    const unsigned char *mbus_data_fixed_medium(mbus_data_fixed *data);
    const unsigned char *mbus_data_fixed_unit(int medium_unit_byte);
    const unsigned char *mbus_data_variable_medium_lookup(unsigned char medium);
    const char *mbus_unit_prefix(int exp);

    const unsigned char *mbus_data_error_lookup(int error);

    const char *mbus_vib_unit_lookup(mbus_value_information_block *vib);
    const char *mbus_vif_unit_lookup(unsigned char vif);

    unsigned char mbus_dif_datalength_lookup(unsigned char dif);

    int mbus_is_primary_address(int value);
    int mbus_is_secondary_address(const char * value);
    */
};

#endif /* MBusUtils.h */