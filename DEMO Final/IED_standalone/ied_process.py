import xml.etree.ElementTree as ET
import os
import xmltodict, json
import shutil
import sys

def _decode(o):
    if isinstance(o, dict):
        return {k: _decode(v) for k, v in o.items()}
    elif isinstance(o, list):
        return [_decode(v) for v in o]
    else:
        return o

ied_list =[]
CPMapping_XML = 'CPMapping.xml'
Threshold_XML = 'Thresholds.xml'
folder_path = os.path.dirname(os.path.realpath(__file__))
input_path = folder_path + '/01_input'
prep_path = folder_path + '/03_prep'
CPMapping_file = input_path + '/' + CPMapping_XML
Threshold_file = input_path + '/' + Threshold_XML
temp_CP_folder = prep_path + '/temp_CPMapping/'
temp_Threshold_folder = prep_path + '/temp_Threshold/'

T_tree = ET.parse(Threshold_file)
T_root = T_tree.getroot()

for T_tag in T_root.findall('IED'):
    ied_name = T_tag.attrib['name']
    ied_list.append(ied_name)

with open(CPMapping_file, 'r') as f:
    data = f.readline()
    data = f.read() 
    
with open(prep_path + '/root_CPMapping.xml', 'w') as f:
    f.write("<root>\n" + data + "\n</root>")
    f.close()

try:
    os.makedirs(prep_path + '/temp_CPMapping')
except:
    print('temp_CPMapping Folder existing')

try:
    os.makedirs(prep_path + '/temp_Threshold')

except:
    print('temp_Threshold Folder existing')

try:
    os.makedirs(prep_path + '/IED_CPMapping')

except:
    print('IED_CPMapping Folder existing')

try:
    os.makedirs(prep_path + '/IED_Threshold')

except:
    print('IED_Threshold Folder existing')

for i in ied_list:

    filename = format(i + '_CPMapping.xml')

    with open(temp_CP_folder + filename, 'wb') as f:
        f.write(bytes("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n", 'utf-8'))
        f.write(bytes("<root>\n", 'utf-8'))
        context = ET.iterparse(prep_path + '/root_CPMapping.xml', events=('end',))
        for event, elem in context:
            if elem.tag == 'CPMapping':
                Cyber = elem.find('Cyber').text
                title = Cyber.split('.')[0].strip()
                if title == str(i):
                    inBoth = True
                    f.write(ET.tostring(elem))
        f.write(bytes("</root>\n", 'utf-8'))

    T_filename = format(i + '_Threshold.xml')

    with open(temp_Threshold_folder + T_filename, 'wb') as g:
        Thres_context = ET.iterparse(Threshold_file, events=('end',))
        for event, ele in Thres_context:
            if ele.tag == 'IED':
                i_name = ele.attrib['name']

                if i_name == filename.split('_')[0]:
                    g.write(ET.tostring(ele))


CPMapping_filelist = os.listdir(temp_CP_folder)
Threshold_filelist = os.listdir(temp_Threshold_folder)

for i in CPMapping_filelist:

    ied_file = i.split('_')[0]
    with open(temp_CP_folder + i, 'r') as content:
        CP_tree = ET.parse(content)
        CP_root = CP_tree.getroot()

        CP_str = ''
        for child in CP_root:
            CP_child = ET.ElementTree(child)
            CP_childroot = CP_child.getroot()
            CP_str = CP_str + str(ET.tostring(CP_childroot, encoding='unicode'))

    with open(temp_CP_folder + ied_file + '_CPMapping.xml' , 'r') as CP_xml_file:
        CP_xml_string = CP_xml_file.read()
        obj = xmltodict.parse(CP_xml_string)
        CP_xml_file.close()

        CP_json_string = json.dumps(xmltodict.parse(CP_xml_string), indent=4)
        CP_json_data = json.loads(CP_json_string, object_hook=_decode)['root']

        with open(prep_path + '/IED_CPMapping/' + ied_file + '_CPMapping.json', 'w') as json_file:
            save_data = json.dump(CP_json_data, json_file, indent=4)
            json_file.close()
            print(ied_file + '_CPMapping.json file generated')

    with open(temp_Threshold_folder + ied_file + '_Threshold.xml', 'r') as T_content:
        T_tree = ET.parse(T_content)
        T_root = T_tree.getroot()

        threshold_str = ''
        for child in T_root:
            T_child = ET.ElementTree(child)
            T_childroot = T_child.getroot()
            threshold_str = threshold_str + str(ET.tostring(T_childroot, encoding='unicode'))

    with open(temp_Threshold_folder + ied_file + '_Threshold.xml', 'r') as T_xml_file:
        T_xml_string = T_xml_file.read()
        obj = xmltodict.parse(T_xml_string, force_list={'PDIF87L','PTOC50','PTOV59','PTUV27','PTOF'})
        T_xml_file.close()

        T_json_string = json.dumps(obj, indent=4)
        T_json_data = json.loads(T_json_string, object_hook=_decode)['IED']

        with open(prep_path + '/IED_Threshold/' + ied_file + '_Threshold.json', 'w') as final_json_file:
            json.dump(T_json_data, final_json_file,indent=4)
            final_json_file.close()
            print(ied_file + '_Threshold.json file generated')

os.remove(prep_path + '/root_CPMapping.xml')
shutil.rmtree(temp_Threshold_folder)
shutil.rmtree(temp_CP_folder)
