import re
import xml.etree.ElementTree as ET
import sqlite3
from sqlite3 import Error
import os
import shutil
import random
import time

# Request user to input path of PLCOpen XML file #
xmlpath = raw_input("Input XML file location: ")

# Parse input into n Element Tree #
tree = ET.parse(xmlpath)
root = tree.getroot()
header = "{http://www.plcopen.org/xml/tc6_0201}"
# This header is found throughout the PLCOpen XML file and needs to be used when parsing.

# Initialise global variables
now_seconds = time.time()
flag = 1
flag2 = 1
listing = []
listing2 = []
listing4 = []
variable_type = ""
return_type = ""
pou_upper = ""
config_name = ""
resource_name = ""
task_name = ""
task_interval = ""
task_priority = ""
instance_name = ""
instance_type = ""
variable_address = ""

# Function to create a connection to sqlite database #
def create_connection(db_file):
   try:
      conn = sqlite3.connect(db_file)
      return conn
   except Error as e:
      print(e)

   return None

# Function to upload parsed .st file to OpenPLC runtime #
def upload_st():

    file_name = str(random.randint(1,1000000)) + ".st" # generate random number as .st physical file name
    prog_name = raw_input("Input auto-generated .st file name: ") # prompt user to input OpenPLC runtime descriptor file name
    prog_descr = raw_input("Input auto-generated .st file description: ") # prompt user to input .st file description
    prog_file = file_name
    epoch_time = now_seconds # Input current time in epoch time format

    webserver_path = raw_input("Enter OpenPLC+ folder location e.g. '/home/ubuntu/openplc-iec61850': ")
    # Prompt user to enter OpenPLC runtime webserver location
    destination_path = webserver_path + "/webserver/st_files/" + file_name #copy physical auto-generated .st file to OpenPLC runtime folder location

    # Connect to sqlite database and insert references into sqlite database #
    database = webserver_path + "/webserver/openplc.db"
    conn = create_connection(database)
    if (conn != None):
        try:
            cur = conn.cursor()
            cur.execute("INSERT INTO Programs (Name, Description, File, Date_upload) VALUES (?, ?, ?, ?)",
                        (prog_name, prog_descr, prog_file, epoch_time))
            conn.commit()
            cur.close()
            conn.close()


            shutil.copyfile("newfile.st", destination_path) # copy auto-generated .st file to OpenPLC runtime folder

            print("Auto generated .st file has been uploaded to OpenPLC runtime. Refresh .st program list in OpenPLC runtime to use it.")

            return

        except Error as e:
            print("error connecting to the database" + str(e))
            return 'Error connecting to the database. Make sure that your openplc.db file is not corrupt.<br><br>Error: ' + str(
                e)
    else:
        return 'Error connecting to the database. Make sure that your openplc.db file is not corrupt.'

# parsing of "returnType" parameter for Function calls
for branch in root.findall(
    header + "types/" + header + "pous/" + header + "pou/" + header + "interface/" + header + "returnType"):
    stringed = str(branch[0])
    regular_expression = (re.sub('[^A-Z]', '', stringed))
    return_type = regular_expression[1:]

# Open a new file to write into #
new_file=open("newfile.st",mode="a+")#,encoding="utf-8")

# Main writing loop #
for branch in root.findall(header+"types/"+header+"pous/"+header+"pou"):
    pou_type = branch.get('pouType')
    pou_name = branch.get('name')
    pou_upper = pou_type.upper()
    if pou_type.upper() == "FUNCTIONBLOCK":
        new_file.writelines("FUNCTION_BLOCK" + " " + pou_name+"\n")
    elif pou_type.upper() == "FUNCTION":
        new_file.writelines(pou_type.upper()+" "+pou_name+" : "+return_type+"\n")
    else:
        new_file.writelines(pou_type.upper() + " " + pou_name+"\n")

    for branch2 in root.findall(header+"types/"+header+"pous/"+header+"pou/"+header+"interface/"+header+"localVars/"+header+"variable"):
        variable_name = branch2.get('name')
        variable_address = branch2.get('address')

        variable_type = branch2.find(header+"type")[0]
        variable_type_stringed = str(variable_type)
        regular_expression = (re.sub('[^A-Z]', '', variable_type_stringed))
        variable_type = regular_expression[1:]

        try:
            variable_value_branch = branch2.find(header+"initialValue")[0]
            variable_value = variable_value_branch.get('value')

            derived_value_branch = branch2.find(header + "type")[0]
            derived_value = derived_value_branch.get('name')

            if variable_address is None and flag2 == 1:
                new_file.writelines("  VAR" + "\n")
                flag2 = 0
            if variable_address is None and flag2 == 0:
                new_file.writelines("    " + variable_name + " : " + variable_type + " := " + variable_value + ";" + "\n")
                listing.append(variable_name)
            if variable_value is None and flag2 == 0:
                new_file.writelines("    " + variable_name + " : " + variable_type + ";" + "\n")


        except:
            derived_value_branch = branch2.find(header + "type")[0]
            derived_value = derived_value_branch.get('name')

            if derived_value is not None and flag2 == 0:
                new_file.writelines("    " + variable_name + " : " + derived_value + ";" + "\n")
            elif variable_address is None and flag2 == 0:
                new_file.writelines("    " + variable_name + " : " + variable_type + ";" + "\n")

        finally:
            pass

    if flag2 == 0:
        new_file.writelines("  END_VAR" + "\n")

    new_file.writelines("  VAR"+"\n")
    for branch2 in root.findall(header+"types/"+header+"pous/"+header+"pou/"+header+"interface/"+header+"localVars/"+header+"variable"):
        variable_name = branch2.get('name')
        variable_address = branch2.get('address')
        variable_type = branch2.find(header+"type")[0]
        variable_type_stringed = str(variable_type)
        regular_expression = (re.sub('[^A-Z]', '', variable_type_stringed))
        variable_type = regular_expression[1:]
        if variable_name not in listing and variable_address not in listing2 and variable_address is not None and pou_upper == "PROGRAM":
            new_file.writelines("    " + variable_name + " AT " + variable_address + " : " +variable_type+";"+"\n")
            listing.append(variable_name)
            listing2.append(variable_address)
        elif variable_name not in listing4 and pou_upper != "PROGRAM":
            new_file.writelines("    " + variable_name + " : " + variable_type + ";"+"\n")
        listing4.append(variable_name)
    new_file.writelines("  END_VAR"+"\n"+"\n")

    for child in root.findall(header+"types/"+header+"pous/"+header+"pou/"+header+"body/"+header+"ST"):
        structured_text = child.find("{http://www.w3.org/1999/xhtml}p")
        if structured_text.text not in listing and flag == 1:
            split_text = re.split('\n', structured_text.text)
            for line in split_text:
                new_file.writelines("  "+line+"\n")
            flag = 0
        listing.append(structured_text.text)
    listing = []
    listing4 = []
    flag = 1
    if pou_type.upper() == "FUNCTIONBLOCK":
        new_file.writelines("END_FUNCTION_BLOCK"+"\n"+"\n")
    else:
        new_file.writelines("END_" + pou_type.upper()+"\n"+"\n")

# Write configuration info to .st file
for config in root.findall(header+"instances/"+header+"configurations/"+header+"configuration"):
    config_name = config.get('name')

for config in root.findall(header+"instances/"+header+"configurations/"+header+"configuration/"+header+"resource"):
    resource_name = config.get('name')

for config in root.findall(header+"instances/"+header+"configurations/"+header+"configuration/"+header+"resource/"+header+"task"):
    task_name = config.get('name')
    task_priority = config.get('priority')
    task_interval = config.get('interval')

for config in root.findall(header+"instances/"+header+"configurations/"+header+"configuration/"+header+"resource/"+header+"task/"+header+"pouInstance"):
    instance_name = config.get('name')
    instance_type = config.get('typeName')

new_file.writelines("\n")
new_file.writelines("CONFIGURATION " + config_name+"\n")
new_file.writelines("\n")
new_file.writelines("  RESOURCE "+resource_name+ " ON PLC\n")
new_file.writelines("    TASK "+task_name+ "(INTERVAL := "+task_interval+",PRIORITY := "+task_priority+");\n")
new_file.writelines("    PROGRAM "+instance_name+ " WITH "+task_name+" : "+instance_type+";\n")
new_file.writelines("  END_RESOURCE\n")
new_file.writelines("END_CONFIGURATION\n")
new_file.close()

# Upload generated new file to OpenPLC runtime #
upload_st()

# Delete generated file so that program can be run again.
os.remove("newfile.st")
