## Pandapower Simulation - Standalone

This folder is for running the Pandapower Simulation without the cyber layer, i.e. there is no dependency on Mininet, VIRTUAL IEDs and database.

Input files required from user:
1) SSD file, e.g. ADSC_3SS.ssd
2) Extra configuration file, e.g. extra_config_3ss.xml

To use:  
1) Update ssd_path and extra_config_path in process_ssd_3ss.py to point to the SSD file and the extra configuration file
2) Run: python3 process_ssd_3ss.py

## Acknowledgement

This work is supported by the National Research Foundation, Singapore, Singapore University of Technology and Design under its National Satellite of Excellence in Design Science and Technology for Secure Critical Infrastructure Grant (NSoE_DeST-SCI2019-0005).
