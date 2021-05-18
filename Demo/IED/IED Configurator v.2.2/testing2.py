import shutil
import os
import pathlib

counter = 0
number_of_ieds = 0

icd_iid_path = input("Please enter the location of IID/ICD files:")
destination_path = input("Please enter the location of OpenPLC runtime folder:")
destination_path = destination_path + "\\webserver" + "\\scl_client_files"
ied_path = input("Please enter the location to create configured IED data folders:")

for path in pathlib.Path(icd_iid_path).iterdir():
    filename = os.path.basename(path)
    destination_path_filename = destination_path + "\\" + filename
    if path.is_file() and filename[-3:] == "icd":
        shutil.copyfile(path, destination_path_filename)
        destination_ied_path = ied_path + "\\ied" + str(number_of_ieds)
        os.mkdir(destination_ied_path)
        destination_copy_path = destination_ied_path + "\\" + filename
        shutil.copyfile(path, destination_copy_path)
        number_of_ieds += 1
    elif path.is_file() and filename[-3:] == "iid":
        shutil.copyfile(path, destination_path_filename)
        destination_ied_path = ied_path + "\\ied" + str(number_of_ieds)
        os.mkdir(destination_ied_path)
        destination_copy_path = destination_ied_path + "\\" + filename
        shutil.copyfile(path, destination_copy_path)
        number_of_ieds += 1

while(counter != number_of_ieds):
    a_file = open("C:\IED_configurator\Makefile", "r")
    list_of_lines = a_file.readlines()
    list_of_lines[2] = 'IEDINST = ' + str(counter) + '\n'
    a_file = open("C:\IED_configurator\Makefile", "w")
    a_file.writelines(list_of_lines)
    a_file.close()
    destination_cpp_path = ied_path + "\\ied" + str(counter) + "\\" + "Makefile"
    shutil.copyfile("Makefile", destination_cpp_path)

    counter = counter + 1