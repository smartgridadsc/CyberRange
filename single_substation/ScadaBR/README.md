## ScadaBR Configuration File

This folder contains the script to convert the ScadaBR configuration in XML to JSON. The JSON file can then be imported into ScadaBR through its web interface.

Input files required from user:
1) The ScadaBR configuration in XML, e.g. Scada_example.xml
2) The ScadaBR schema definition file, e.g. Scada.xsd

To run:  
- sudo python3 Scada_Config.py Scada_example.xml Scada.xsd

A JSON file data.json will be generated in the same folder.

## Acknowledgement

This work is supported by the National Research Foundation, Singapore, Singapore University of Technology and Design under its National Satellite of Excellence in Design Science and Technology for Secure Critical Infrastructure Grant (NSoE_DeST-SCI2019-0005).
