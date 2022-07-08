## Virtual IED build and startup

This folder is for setting up individual virtual IEDs.  
It contains the scripts to build VIRTUAL_IED binaries and to create the IED folders and files.

Input files required from user have to be placed in 01_input folder:
1) <IED_name>.icd for every IED
2) CPMapping.xml
3) Thresholds.xml

To build, run:  
./ied_build.sh

Generated files will be placed in respective IED folders:
1) VIRTUAL_IED
2) <IED_name>.icd
3) <IED_name>_CPMapping.json
4) <IED_name>_Threshold.json

Note: 
- For a clean build, remove the IED folders (if any) and the contents inside before running the build.
- xmllint and .libs are the dependencies required by the scripts for XML parsing.
- The files ied_getip.sh and ied_start.sh are used during the Mininet startup.
- The file ied_set_iedjson.sh is a utility to create individual CPMapping and Threshold json files without building VIRTUAL_IED binaries.

## Acknowledgement

This work is supported by the National Research Foundation, Singapore, Singapore University of Technology and Design under its National Satellite of Excellence in Design Science and Technology for Secure Critical Infrastructure Grant (NSoE_DeST-SCI2019-0005).
