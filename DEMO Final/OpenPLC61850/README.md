## OpenPLC61850 Custom Configuration

This folder only contains the configuration files specific to our example of a single substation model.

For OpenPLC61850 installation and general setup, refer to https://github.com/smartgridadsc/OpenPLC61850.

Input files required from user:
1) <IED_name>.icd for every IED to be placed in OpenPLC61850/webserver/scl_client_files
2) scl.icd to be placed in OpenPLC61850/webserver/scl_server_files
3) <model>.st to be uploaded via OpenPLC61850 web interface under Program

Note:  
- The .icd files can also be retrieved from the virtual IEDs folder
