## Pandapower Simulation

This folder is for running the Pandapower simulation dynamically on top of the cyber layer, together with the Mininet, VIRTUAL IEDs, the database, OpenPLC61850 and ScadaBR.

Input files required from user:
1) SSD file, e.g. ADSC_3SS.ssd
2) Extra configuration file, e.g. extra_config_3ss.xml

To use:  
1) Update ssd_path and extra_config_path in Constants.py to point to the SSD file and the extra configuration file
2) Run: python3 Simulator.py

## Acknowledgement

This work is supported by the National Research Foundation, Singapore, Singapore University of Technology and Design under its National Satellite of Excellence in Design Science and Technology for Secure Critical Infrastructure Grant (NSoE_DeST-SCI2019-0005).
