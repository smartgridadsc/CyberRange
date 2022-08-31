#
#  create_thresholds.py
#
#  Copyright 2022 ADSC
#
#  This file is part of SGCR.
#
#  SGCR is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  SGCR is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with SGCR. If not, see <http://www.gnu.org/licenses/>.

import xml.etree.ElementTree as et
import os
import sys
import copy

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

path = 'working_folder'

# Read threshold template file
threshold_template = './' + 'Thresholds_template.xml'
if not os.path.exists(threshold_template):
    print('Missing "' + threshold_template + '" file. Quiting...')
    sys.exit()
th_root = et.parse(threshold_template).getroot()
ied_template = th_root.find('IED')

if ied_template is None:
    print('Invalid threshold template. Quiting...')
    sys.exit()

# Obtain all icd input files from given folder and its subfolders
icd_file_list = []
for root, dirs, files in os.walk(path):
    for file in files:
        if file.lower().endswith('icd'):
            icd_file_list.append(os.path.join(root, file))

# End execution if no icd file is found
if len(icd_file_list) == 0:
    print('No ICD file is found. Quiting...')
    sys.exit()

# Assumption: All IED XMLs use the same namespaces
# Extract and register the namespaces from first XML only
namespaces = {node[0]: node[1] for _, node in et.iterparse(icd_file_list[0], events=['start-ns'])}
for key, value in namespaces.items():
    et.register_namespace(key, value)

# [optional] Display the namespaces on screen
#print('Namespaces:', namespaces)

# Obtain XML root of all icd files
icd_root_list = []
for filepath in icd_file_list:
    icd_root_list.append(et.parse(filepath).getroot())

# Preparing threshold XML, first removing IED template
th_root.remove(ied_template)

# Append new threshold for every IED
i = 0
for this_icd_root in icd_root_list:
    ied_found = 0
    ied_names = ''
    for ied in this_icd_root.findall('IED', namespaces):
       if (ied.attrib['name'] is None or ied.attrib['name'] == ''):
           print('Missing IED name in ' + icd_file_list[i] + '. Skipping...')
       else:
           ied_new = copy.deepcopy(ied_template)
           ied_new.attrib['name'] = ied.attrib['name']
           th_root.append(ied_new)
           if ied_names != '':
               ied_names += ', '
           ied_names += ied.attrib['name']
       ied_found += 1
    if ied_found == 0:
        print('Missing IED in file ' + icd_file_list[i] + '. Skipping...')
    elif ied_found > 1:
        print('Warning: Multiple IEDs (' + ied_names + ') found in ' + icd_file_list[i] + '.')
    i += 1

# [optional] To get a neater indentation
_pretty_print(th_root)

# Write the new combined XML to a file
xmlstr = et.tostring(th_root, encoding='utf8')
with open(path + '/Thresholds.xml', 'wb') as f:
    f.write(xmlstr)

# [optional] Display the new XML on screen
#print(xmlstr.decode('utf8'))
