#!/usr/bin/python3

import os.path
import sys
import xmltodict
from jinja2 import Template

template = Template("""
test({{filename}}_record{{index}}_value) {
    MBusFrame frame;
    MBusRecord *rec;
    frame.parse((unsigned char *){{filename}}_blob, {{filename}}_blob_len);
    rec = get_record(&frame, {{index}});
    assertNotNULL(rec);
    {% if cast == "long long" %}
    assertEqual((long long)rec->value->real_val, {{value}});
    {% elif cast == "float" %}
    assertEqual((float)rec->value->real_val, {{value}}f);
    {% else %}
    assertEqual(strncmp(rec->value->str_val.value, "{{value}}", rec->value->str_val.size), 0);
    {% endif %}
    delete rec;
}
""", trim_blocks=True, lstrip_blocks=True)

with open(sys.argv[1]) as fd:
    doc = xmltodict.parse(fd.read())
    name = os.path.basename(sys.argv[1]).replace('.xml', '').replace('-', '_').replace('.', '_').replace('+','_')

    for item in doc['MBusData']['DataRecord']:
        index = int(item["@id"])
        if item['Value'] is None or item['Function'] == "More records follow":
            continue

        cast = "float"
        try:
            value = float(item['Value'])
            if value.is_integer():
                value = int(value)
                cast = "long long"
        except ValueError:
            value = item['Value']
            cast = ""

        print(template.render(filename=name, index=index, value=value, cast=cast))
