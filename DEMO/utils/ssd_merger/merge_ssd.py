import xml.etree.ElementTree as et
import os
import sys

# Own-defined function to pretty print
def _pretty_print(current, parent=None, index=-1, depth=0):
    for i, node in enumerate(current):
        _pretty_print(node, current, i, depth + 1)
    if parent is not None:
        if index == 0:
            parent.text = '\n' + ('\t' * depth)
        else:
            parent[index - 1].tail = '\n' + ('\t' * depth)
        if index == len(parent) - 1:
            current.tail = '\n' + ('\t' * (depth - 1))

# Obtain all individual ssd and sed input files
path = 'ssd_sed_input_files'
ssd_files = sorted( [f for f in os.listdir(path) if f.endswith('.ssd')] )
sed_files = sorted( [f for f in os.listdir(path) if f.endswith('.sed')] )
print('Parsing SSD files: ', ssd_files)
print('Parsing SED files: ', sed_files)

# End execution if no ssd file is found
# Merge only ssd if no sed file is found
if len(ssd_files) in [0, 1]:
    print('No multiple SSD files are found. Quiting...')
    sys.exit()

# Set output filepath
output_path = 'ssd_output_file'
output_file = output_path + '/ADSC_3SS.ssd'

# Obtain XML root of all ssd and sed files
ssd_root_list = []
sed_root_list = []
for f in ssd_files:
    ssd_root_list.append(et.parse(path + '/' + f).getroot())
for f in sed_files:
    sed_root_list.append(et.parse(path + '/' + f).getroot())

# Assumption: All XMLs use the same namespaces
# Extract and register the namespaces from first XML only
namespaces = {node[0]: node[1] for _, node in et.iterparse(path + '/' + ssd_files[0], events=['start-ns'])}
for key, value in namespaces.items():
    et.register_namespace(key, value)

# [optional] Display the namespaces on screen
#print('Namespaces:', namespaces)
                   
# The first XML will be used as the target
# and the selected subtrees from all the other XMLs will be appended to it
# Also retrieve the substation names and replace header text of merged XML with these names
all_ss_names = ""
ssd1_root = ssd_root_list[0]
for ss1 in ssd1_root.findall('Substation', namespaces):
    if ss1.attrib['name'] is not None:
        all_ss_names += ss1.attrib['name']
for this_ssd_root in ssd_root_list[1:]:
    for ss in this_ssd_root.findall('Substation', namespaces):
        if ss.attrib['name'] is not None:
            all_ss_names += " " + ss.attrib['name']
        ssd1_root.append(ss)
ss_text = ssd1_root.find('Header/Text', namespaces)
if ss_text is not None:
    ss_text.text = all_ss_names

# Process the merged XML and 
# append the SED bays into respective substations and voltagelevels
for ssd_ss in ssd1_root.findall('Substation', namespaces):
    print('Processing SSD', ssd_ss.attrib['name'])
    for ssd_vlvl in ssd_ss.iterfind('VoltageLevel', namespaces):
        print('  Processing SSD', ssd_vlvl.attrib['name'])
        for this_sed_root in sed_root_list:
            for sed_ss in this_sed_root.findall('Substation', namespaces):
                if sed_ss.attrib['name'] == ssd_ss.attrib['name']:
                    for sed_vlvl in sed_ss.iterfind('VoltageLevel', namespaces):
                        if sed_vlvl.attrib['name'] == ssd_vlvl.attrib['name']:
                            print('    Finding match in SED', sed_ss.attrib['name'], '-', sed_vlvl.attrib['name'])
                            for sed_bay in sed_vlvl.iterfind('Bay', namespaces):
                                ssd_vlvl.append(sed_bay)
                                print('      Match found, appending bay', sed_bay.attrib['name'], 'to voltagelevel', ssd_vlvl.attrib['name'], 'of substation', ssd_ss.attrib['name'])

# [optional] To get a neater indentation
_pretty_print(ssd1_root)

# Write the new combined XML to a file
xmlstr = et.tostring(ssd1_root, encoding='utf8')
if not os.path.exists(output_path):
    os.makedirs(output_path)
with open(output_file, 'wb') as f:
    f.write(xmlstr)
    print('File created:', output_file)

# [optional] Display the new XML on screen
#print(xmlstr.decode('utf8'))
