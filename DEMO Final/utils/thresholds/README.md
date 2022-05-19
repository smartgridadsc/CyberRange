## Creating Thresholds.xml

The file Thresholds.xml contains the threshold values for all IEDs. It can be created manually.
Alternatively, the script here can create one using a threshold template.

Input files required from user to be placed in working_folder:
- <IED_name>.icd for every IED (can be placed under sub-folders)

To run:
- python3 create_thresholds.py

The following file will be generated in working_folder:
- Thresholds.xml

## Verifying Conversion of Thresholds.xml to JSONs

Optionally, the conversion of the Thresholds.xml file to individual JSON files can be verified using the following steps. 

Input files required in working folder:
1) CPMapping.xml
2) Thresholds.xml

To run:
- python3 ied_process.py

Generated files will be placed in working_folder:
1) IED_CPMapping/<IED_name>_CPMapping.json
2) IED_Threshold/<IED_name>_Threshold.json


Note: 
- Edit Thresholds_template.xml to modify the threshold values if required
- Todo - allow multiple templates for different IEDs
