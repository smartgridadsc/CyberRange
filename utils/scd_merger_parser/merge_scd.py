#
#  merge_scd.py
#
#  Copyright 2023 ADSC
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

# Obtain all individual scd input files
path = 'scd_input_files'
scd_files = sorted( [f for f in os.listdir(path) if f.endswith('.scd')] )
print('Parsing SCD files: ', scd_files)

# End execution if no multiple scd files are found
if len(scd_files) in [0, 1]:
    print('No multiple SCD files are found. Quiting...')
    sys.exit()

# Parse scd files
root = []
for scd_file in scd_files:
    root.append(et.parse(path + '/' + scd_file).getroot())

# Set output filepath
output_path = 'scd_output_files'
output_file = output_path + '/ADSC_combined_SS.scd'

# Assumption: All XMLs use the same namespaces
# Extract and register the namespaces from first XML only
namespaces = {node[0]: node[1] for _, node in et.iterparse(path + '/' + scd_files[0], events=['start-ns'])}
for key, value in namespaces.items():
    et.register_namespace(key, value)

# [optional] Display the namespaces on screen
#print('Namespaces:', namespaces)

# Identify the parent tag which will have the combined subtrees of all the XMLs
tag_comm = root[0].find("Communication", namespaces)

# The first XML will be used as the target
# and the selected subtrees from all the other XMLs will be appended to it
for thisroot in root[1:]:
    for tag_subnet in thisroot.findall("Communication/SubNetwork", namespaces):
        tag_comm.append(tag_subnet)
    for tag_ied in thisroot.findall("IED", namespaces):
        root[0].append(tag_ied)

# [optional] To get a neater indentation
_pretty_print(root[0])

# Write the new combined XML to a file
xmlstr = et.tostring(root[0], encoding='utf8')
if not os.path.exists(output_path):
    os.makedirs(output_path)
with open(output_file, 'wb') as f:
    f.write(xmlstr)
    print('File created:', output_file)

# [optional] Display the new XML on screen
#print(xmlstr.decode('utf8'))
