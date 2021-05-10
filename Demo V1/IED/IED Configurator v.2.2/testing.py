import os
import shutil

def copytree(src, dst, symlinks=False, ignore=None):
    for item in os.listdir(src):
        s = os.path.join(src, item)
        d = os.path.join(dst, item)
        if os.path.isdir(s):
            shutil.copytree(s, d, symlinks, ignore)
        else:
            shutil.copy2(s, d)

ied_path = input("Please enter the location to create configured IED data folders:")

destination_copy_path = ied_path+"\\control_update_creator"
os.mkdir(destination_copy_path)
copytree("control_update_creator", destination_copy_path)

destination_copy_path = ied_path+"\\libiec61850"
os.mkdir(destination_copy_path)
copytree("libiec61850", destination_copy_path)

destination_copy_path = ied_path+"\\pugixml_src"
os.mkdir(destination_copy_path)
copytree("pugixml_src", destination_copy_path)

destination_copy_path = ied_path + "\\Makefile"
shutil.copyfile("Makefile_newied", destination_copy_path)

destination_copy_path = ied_path + "\\PTTR_PTRCcopy.icd"
shutil.copyfile("PTTR_PTRCcopy.icd", destination_copy_path)

destination_copy_path = ied_path + "\\includesied.mk"
shutil.copyfile("includesied.mk", destination_copy_path)

destination_copy_path = ied_path + "\\2ied_setup_network.sh"
shutil.copyfile("2ied_setup_network.sh", destination_copy_path)

destination_copy_path = ied_path + "\\copyscl.sh"
shutil.copyfile("copyscl.sh", destination_copy_path)

destination_copy_path = ied_path + "\\test.sh"
shutil.copyfile("test.sh", destination_copy_path)