import xml.etree.ElementTree as ET
import re
import shutil
import pathlib
import os

print("____________________________________")
print("Virtual IED Auto-configurator")
print("____________________________________")
print("\n")
print("This IED configurator configures virtual IEDs based on provided IEC 61850 SCL files.")

# Initialise general variables
counter = 0
counter_ied = 0
counter_general = 0
counter_freq = 0
counter_relay = 0
counter_transformer = 0
number_of_ieds = 0
number_of_load_ieds = 0
number_of_general_ieds = 0
number_of_frequency_ieds = 0
number_of_relay_ieds = 0
number_of_transformer_ieds = 0
dataset_name_structure = ""
ldInst = "MEAS"
lnClass = ""
doName = ""
daName = ""
fc = "MX"
current_db = "test_db2"
current_db_ip = "localhost"
current_db_user = "testuser"
current_db_password = "password"
ied_names = []
filenames = []
filenumber = ""
existing_ieds = []
load_entries = []
load_table = []
transformer_entries = []
transformer_table = []
CB_entries = []
CB_table = []
running = 0
destination_ied_path = ""
ied_counter = 0

def copytree(src, dst, symlinks=False, ignore=None):
    for item in os.listdir(src):
        s = os.path.join(src, item)
        d = os.path.join(dst, item)
        if os.path.isdir(s):
            shutil.copytree(s, d, symlinks, ignore)
        else:
            shutil.copy2(s, d)


# Ask user for path of folder containing all the IEDs
icd_iid_path = input("Please enter the location of IID/ICD files e.g. '/home/ubuntu/Desktop/IID files':")

destination_path = input("Please enter the location of OpenPLC+ runtime folder e.g. '/home/ubuntu/openplc-iec61850':")
destination_path = destination_path + "/webserver" + "/scl_client_files"
ied_path = input("Please enter the location to create configured IED data folders e.g. '/home/ubuntu/Desktop/test':")

# Ask user for path of Cyber-Physical mapping file
mapping_path = input("Please enter the location of exact CP mapping file e.g. '/home/ubuntu/Desktop/IID files/mapping.xml':")

with open(mapping_path) as f:
    xml = f.read()

root = ET.fromstring(re.sub(r"(<\?xml[^>]+\?>)", r"\1<root>", xml) + "</root>")

# Parse Cyber-Physical attributes from CP Mapping XML file

GGIO_line_loading = {
    "ied00": ["line_loading","line_loading_0"],
    "ied01": ["line_loading","line_loading_1"],
    "ied02": ["line_loading","line_loading_2"],
    "ied03": ["line_loading","line_loading_3"],
    "ied04": ["line_loading","line_loading_4"],
    "ied05": ["line_loading","line_loading_5"],
    "ied06": ["line_loading","line_loading_6"],
    "ied07": ["line_loading","line_loading_7"],
    "ied08": ["line_loading","line_loading_8"],
    "ied09": ["line_loading","line_loading_9"],
    "ied10": ["line_loading","line_loading_10"],
    "ied11": ["line_loading","line_loading_11"],
    "ied12": ["line_loading","line_loading_12"],
    "ied13": ["line_loading","line_loading_13"],
    "ied14": ["line_loading","line_loading_14"],
    "ied15": ["line_loading","line_loading_15"],
    "ied16": ["line_loading","line_loading_16"],
    "ied17": ["line_loading","line_loading_17"]
}

GGIO_line_load_percent = {
    "ied00": ["line_load_percent","line_load_percent_0"],
    "ied01": ["line_load_percent","line_load_percent_1"],
    "ied02": ["line_load_percent","line_load_percent_2"],
    "ied03": ["line_load_percent","line_load_percent_3"],
    "ied04": ["line_load_percent","line_load_percent_4"],
    "ied05": ["line_load_percent","line_load_percent_5"],
    "ied06": ["line_load_percent","line_load_percent_6"],
    "ied07": ["line_load_percent","line_load_percent_7"],
    "ied08": ["line_load_percent","line_load_percent_8"],
    "ied09": ["line_load_percent","line_load_percent_9"],
    "ied10": ["line_load_percent","line_load_percent_10"],
    "ied11": ["line_load_percent","line_load_percent_11"],
    "ied12": ["line_load_percent","line_load_percent_12"],
    "ied13": ["line_load_percent","line_load_percent_13"],
    "ied14": ["line_load_percent","line_load_percent_14"],
    "ied15": ["line_load_percent","line_load_percent_15"],
    "ied16": ["line_load_percent","line_load_percent_16"],
    "ied17": ["line_load_percent","line_load_percent_17"]
}

GGIO_line_cb = {
    "ied00": ["line_cb","line_cb_0"],
    "ied01": ["line_cb","line_cb_1"],
    "ied02": ["line_cb","line_cb_2"],
    "ied03": ["line_cb","line_cb_3"],
    "ied04": ["line_cb","line_cb_4"],
    "ied05": ["line_cb","line_cb_5"],
    "ied06": ["line_cb","line_cb_6"],
    "ied07": ["line_cb","line_cb_7"],
    "ied08": ["line_cb","line_cb_8"],
    "ied09": ["line_cb","line_cb_9"],
    "ied10": ["line_cb","line_cb_10"],
    "ied11": ["line_cb","line_cb_11"],
    "ied12": ["line_cb","line_cb_12"],
    "ied13": ["line_cb","line_cb_13"],
    "ied14": ["line_cb","line_cb_14"],
    "ied15": ["line_cb","line_cb_15"],
    "ied16": ["line_cb","line_cb_16"],
    "ied17": ["line_cb","line_cb_17"],
}

for branch in root.findall("CPMapping"):
    physical_attribute = branch.find("Physical").text
    stringed = str(physical_attribute)
    without_breaks = stringed.replace("\n", " ")
    physical_attribute = without_breaks.strip()
    physical_attribute_list = physical_attribute.split(",")

    cyber_attribute = branch.find("Cyber").text
    stringed = str(cyber_attribute)
    without_breaks = stringed.replace("\n", " ")
    cyber_attribute = without_breaks.strip()
    cyber_attribute_list = cyber_attribute.split(",")

    if cyber_attribute_list[0] == 'LIEDServer00':
        load_table.append(physical_attribute_list[0])
        load_entries.append(physical_attribute_list[1])

    if cyber_attribute_list[0][0:9] == 'IEDServer' and cyber_attribute_list[2] == '1':
        GGIO_line_loading["ied"+cyber_attribute_list[0][-2:]][0] = physical_attribute_list[0]
        GGIO_line_loading["ied"+cyber_attribute_list[0][-2:]][1] = physical_attribute_list[1]

    if cyber_attribute_list[0][0:9] == 'IEDServer' and cyber_attribute_list[2] == '2':
        GGIO_line_load_percent["ied"+cyber_attribute_list[0][-2:]][0] = physical_attribute_list[0]
        GGIO_line_load_percent["ied"+cyber_attribute_list[0][-2:]][1] = physical_attribute_list[1]

    if cyber_attribute_list[0][0:9] == 'IEDServer' and cyber_attribute_list[2] == '3':
        GGIO_line_cb["ied"+cyber_attribute_list[0][-2:]][0] = physical_attribute_list[0]
        GGIO_line_cb["ied"+cyber_attribute_list[0][-2:]][1] = physical_attribute_list[1]

print("Cyber-physical mapping file successfully parsed.")

# Processing IEDs
for path in pathlib.Path(icd_iid_path).iterdir():
    filename = os.path.basename(path)
    filenames.append(filename)
    destination_path_filename = destination_path + "/" + filename
    filename_number = re.findall(r'\d+', filename)

    if path.is_file() and filename[-3:] == "icd":
        try:
            shutil.copyfile(path, destination_path_filename)
        except:
            print("File already exists in OpenPLC+ SCL files client folder.")
            pass
        destination_ied_path = ied_path + "/ied" + filename_number[0]
        os.mkdir(destination_ied_path)
        destination_copy_path = destination_ied_path + "/" + filename
        shutil.copyfile(path, destination_copy_path)
        if len(filename_number[0]) == 1:
            filenumber = "0" + filename_number[0]
        elif len(filename_number[0]) == 2:
            filenumber = filename_number[0]
        dictionary_key = "ied" + filenumber
        if int(filename_number[0]) == 18:
            a_file = open("ied_relay.cpp", "r")
            list_of_lines = a_file.readlines()
            list_of_lines[161] = '        db_conn.connect("' + current_db + '", "' + current_db_ip + '", "'+current_db_user+'", "'+current_db_password+'", 3306);\n'
            list_of_lines[286] = '    char *mapping_file_name = "ied' + filename_number[0] + 'scl.icd";\n'
            a_file = open("ied_relay.cpp", "w")
            a_file.writelines(list_of_lines)
            a_file.close()
            destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "ied" + filename_number[0] + ".cpp"
            shutil.copyfile("ied_relay.cpp", destination_cpp_path)
        elif int(filename_number[0]) == 19:
            a_file = open("ied_transformer.cpp", "r")
            list_of_lines = a_file.readlines()
            list_of_lines[165] = '        db_conn.connect("' + current_db + '", "' + current_db_ip + '", "'+current_db_user+'", "'+current_db_password+'", 3306);\n'
            list_of_lines[290] = '    char *mapping_file_name = "ied' + filename_number[0] + 'scl.icd";\n'
            a_file = open("ied_transformer.cpp", "w")
            a_file.writelines(list_of_lines)
            a_file.close()
            destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "ied" + filename_number[0] + ".cpp"
            shutil.copyfile("ied_transformer.cpp", destination_cpp_path)
        elif int(filename_number[0]) == 20:
            a_file = open("ied_freq.cpp", "r")
            list_of_lines = a_file.readlines()
            list_of_lines[161] = '        db_conn.connect("' + current_db + '", "' + current_db_ip + '", "'+current_db_user+'", "'+current_db_password+'", 3306);\n'
            list_of_lines[286] = '    char *mapping_file_name = "ied' + filename_number[0] + 'scl.icd";\n'
            a_file = open("ied_freq.cpp", "w")
            a_file.writelines(list_of_lines)
            a_file.close()
            destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "ied" + filename_number[0] + ".cpp"
            shutil.copyfile("ied_freq.cpp", destination_cpp_path)
        elif int(filename_number[0]) == 21:
            a_file = open("ied_load.cpp", "r")
            list_of_lines = a_file.readlines()
            list_of_lines[221] = '        db_conn.connect("' + current_db + '", "' + current_db_ip + '", "'+current_db_user+'", "'+current_db_password+'", 3306);\n'
            list_of_lines[346] = '    char *mapping_file_name = "ied' + filename_number[0] + 'scl.icd";\n'
            a_file = open("ied_load.cpp", "w")
            a_file.writelines(list_of_lines)
            a_file.close()
            destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "ied" + filename_number[0] + ".cpp"
            shutil.copyfile("ied_load.cpp", destination_cpp_path)
        elif int(filename_number[0]) < 18 or int(filename_number[0]) == 0:
            a_file = open("ied_general.cpp", "r")
            list_of_lines = a_file.readlines()
            list_of_lines[60] = '            querystring = "UPDATE '+GGIO_line_cb[dictionary_key][0]+' SET value=1 WHERE name=\\"'+GGIO_line_cb[dictionary_key][1]+'\\"";\n'
            list_of_lines[62] = '            querystring = "UPDATE '+GGIO_line_cb[dictionary_key][0]+' SET value=0 WHERE name=\\"'+GGIO_line_cb[dictionary_key][1]+'\\"";\n'
            list_of_lines[91] = '        const char* querystring = "SELECT value FROM ' + GGIO_line_loading[dictionary_key][0] + ' WHERE name=\\"' + GGIO_line_loading[dictionary_key][1] + '\\"";\n'
            list_of_lines[110] = '    printf("GGIO1_AnIn1_mag_f ('+GGIO_line_loading[dictionary_key][0]+') = %f\\n", f);\n'
            list_of_lines[113] = '        const char* querystring = "SELECT value FROM '+GGIO_line_load_percent[dictionary_key][0]+' WHERE name=\\"' + GGIO_line_load_percent[dictionary_key][1] + '\\"";\n'
            list_of_lines[131] = '    printf("GGIO2_AnIn1_mag_f ('+GGIO_line_load_percent[dictionary_key][0]+') = %f\\n", f);\n'
            list_of_lines[134] = '        const char* querystring = "SELECT value FROM '+GGIO_line_cb[dictionary_key][0]+' WHERE name=\\"'+GGIO_line_cb[dictionary_key][1]+'\\"";\n'
            list_of_lines[152] = '    printf("GGIO3_SPC1_stVal ('+GGIO_line_cb["ied" + filenumber][0]+') = %f\\n", f);\n'
            list_of_lines[172] = '        db_conn.connect("' + current_db + '", "' + current_db_ip + '", "'+current_db_user+'", "'+current_db_password+'", 3306);\n'
            list_of_lines[297] = '    char *mapping_file_name = "ied' + filename_number[0] + 'scl.icd";\n'

            a_file = open("ied_general.cpp", "w")
            a_file.writelines(list_of_lines)
            a_file.close()
            destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "ied" + filename_number[0] + ".cpp"
            shutil.copyfile("ied_general.cpp", destination_cpp_path)

        a_file = open("Makefile", "r")
        list_of_lines = a_file.readlines()
        list_of_lines[2] = 'IEDINST = ' + filename_number[0] + '\n'
        list_of_lines[7] = 'ICDFILE = ied$(IEDINST)scl.icd\n'
        a_file = open("Makefile", "w")
        a_file.writelines(list_of_lines)
        a_file.close()
        destination_cpp_path = ied_path + "/ied" + filename_number[0] + "/" + "Makefile"
        shutil.copyfile("Makefile", destination_cpp_path)


# Copying configuration files to GGIO folder
destination_copy_path = ied_path+"/control_update_creator"
os.mkdir(destination_copy_path)
copytree("control_update_creator", destination_copy_path)

destination_copy_path = ied_path+"/libiec61850"
os.mkdir(destination_copy_path)
copytree("libiec61850", destination_copy_path)

destination_copy_path = ied_path+"/pugixml_src"
os.mkdir(destination_copy_path)
copytree("pugixml_src", destination_copy_path)

destination_copy_path = ied_path + "/Makefile"
newied_makefile_path = destination_copy_path
shutil.copyfile("Makefile_newied", destination_copy_path)

destination_copy_path = ied_path + "/PTTR_PTRCcopy.icd"
shutil.copyfile("PTTR_PTRCcopy.icd", destination_copy_path)

destination_copy_path = ied_path + "/includesied.mk"
shutil.copyfile("includesied.mk", destination_copy_path)

destination_copy_path = ied_path + "/2ied_setup_network.sh"
shutil.copyfile("2ied_setup_network.sh", destination_copy_path)

destination_copy_path = ied_path + "/copyscl.sh"
shutil.copyfile("copyscl.sh", destination_copy_path)

destination_copy_path = ied_path + "/test.sh"
shutil.copyfile("test.sh", destination_copy_path)

destination_copy_path = ied_path + "/runieds.sh"
shutil.copyfile("runieds.sh", destination_copy_path)

destination_copy_path = ied_path + "/setup_netns.sh"
shutil.copyfile("setup_netns.sh", destination_copy_path)

# Run makefile commands

commands ="chmod +rwx " + ied_path + "\n" + "cd " + ied_path + "\nmake\n"

os.system(commands)

print("OpenPLC runtime IEDs configured successfully.")
print("Configured IED data folders created successfully.")
print("All IED files have been configured.")