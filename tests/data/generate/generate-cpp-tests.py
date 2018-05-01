#!/usr/bin/python

from __future__ import print_function


import re
import xmltodict

from os import listdir as ls
from os.path import isfile, join, basename
from jinja2 import Template

def chunks(s, n):
    for start in range(0, len(s), n):
        yield s[start:start+n]

def to_camelcase(s):
    return re.sub(r'(?!^)_([a-zA-Z])', lambda m: m.group(1).upper(), s)

def is_number(string):
    try:
        f = float(string)
    except ValueError:
        return False

    return True

def parse_jdump(data):
    def parse_dib(line):
        separated = [x for x in line.replace('->',',').split(',')]
        parsed = []
        for row in separated:
            d = row.strip().split(':')
            if len(d) == 2:
                f = d
                d = {d[0]: d[1]}
                if f[0] in ['tariff', 'scaled value', 'value', 'subunit']:
                    try:
                        d = {f[0]: float(f[1])}
                    except ValueError:
                        pass
            else:
                d = {"suffix": d[0]}
            parsed.append(d)
        return parsed

    def unity(data, record_id):
        v = {
            "record_id": record_id,
            "unit": None,
            "value": None,
            "tariff": None,
            "device": None,
            "storage_no": None,
            "quantity": None,
            "function": None
        }

        for idx, row in enumerate(data):
            if 'suffix' in row.keys():
                v['unit'] = row['suffix']
            if 'scaled value' in row.keys():
                v['value'] = row['scaled value']
            if 'value' in row.keys():
                v['value'] = row['value']
            if 'function' in row.keys():
                v['function'] = row['function']
            if 'descr' in row.keys():
                v['quantity'] = row['descr']
            if 'tariff' in row.keys():
                v['tariff'] = row['tariff']
            if 'subunit' in row.keys():
                v['device'] = row['subunit']

        return v

    if not data:
        return

    record = []
    for l in data.split('\n'):
        if l.startswith("Secondary address:"):
            pass
        elif l.startswith("Short Header:"):
            pass
        elif l.startswith("DIB"):
            record.append(l)
        else:
            pass  # ignore

    retval = []
    for idx, rec in enumerate(record):
        p = parse_dib(rec)
        retval.append(unity(p, idx))

    return retval

def parse_xml(data):
    if not data:
        return

    doc = xmltodict.parse(data)
    if not doc:
        return

    all_records = []
    for idx, item in enumerate(doc['MBusData'].get('DataRecord', [])):
        try:
            index = int(item.get("@id", None))
        except AttributeError as e:
            continue
        except TypeError as e:
            continue

        if item.get('Value') is None or item.get('Function') == "More records follow":
            continue

        value = None
        if is_number(item.get('Value')) == True:
            value = float(item.get('Value'))
        else:
            value = item.get('Value')

        v = {
            "record_id": index,
            "unit": item.get('Unit'),
            "value": value,
            "tariff": item.get('Tariff', None),
            "device": item.get('Device', None),
            "storage_no": item.get('StorageNumber', None),
            "quantity": item.get('Quantity'),
            "function": item.get('Function', "").replace(' ', '_').upper()
        }
        all_records.append(v)

    return all_records

if __name__ == '__main__':
    of = []
#    p = "../jdump"
#    of += [join(p, f) for f in ls(p) if isfile(join(p, f)) and f.endswith('.jdump')]

    p = "../xml"
    of += [join(p, f) for f in ls(p) if isfile(join(p, f)) and f.endswith('.xml')]

    of = sorted(of, key=str.lower)

    with open('class_hdr.j2') as fd:
        hdr_template = Template(fd.read(), trim_blocks=True, lstrip_blocks=True)

    with open('class_body.j2') as fd:
        body_template = Template(fd.read(), trim_blocks=True, lstrip_blocks=True)

    all_files = []

    for file in of:
        with open(file) as fd:
            f_data = fd.read()

        # Load the blob file
        with open(file.replace('xml', 'blob').replace('jdump', 'blob')) as fd:
            b_data = fd.read()

        safename = basename(file).replace('.xml', '').replace('.jdump', '').replace('-','_').replace('.','_').replace('+','_')

        if file.endswith('.xml'):
            data = parse_xml(f_data)
        elif file.endswith('.jdump'):
            data = parse_jdump(f_data)

        if data is None:
            data = []

        if file.endswith('.xml'):
            all_files.append({
                "safename": to_camelcase(safename),
                "records": data,
                "frame_data": chunks(", ".join(["0x{0:02x}".format(ord(x)) for x in b_data]), 72),
                "frame_data_length": len(b_data)
            })

    with open("frame_test.h", "w") as f:
        f.write(hdr_template.render(files=all_files))

    with open("frame_test.cpp", "w") as f:
        f.write(body_template.render(files=all_files))

