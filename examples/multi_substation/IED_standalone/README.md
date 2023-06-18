## Example files for Protection Functions between 2 Substations

This folder contains a sample set of files demonstrating the protection functions using multicast communication between S1IED1 (simulating substation 1) and TIED1 (simulating substation 2) with SED file standalone.sed. 

To test using these files, copy below folders and their files to the corresponding code folder CyberRange/multi_substation/IED_standalone, then run both VIRTUAL_IEDs in separate nodes (e.g. VM, mininet, etc.).
1) 01_input
2) S1IED1
3) TIED1

The following is an example running on mininet.

1) Start a mininet with single substation model  
   a) cd ~/CyberRange/single_substation/Mininet && sudo python3 run.py

2) Pick 172.16.2.11 (h9) and 172.16.4.11 (h8)  
   a) mininet> xterm h9
   b) mininet> xterm h8

3) Run TIED1 in h9 and S1IED1 in h8  
   a) h9: ./ied_start.sh TIED1  standalone.sed
   b) h8: ./ied_start.sh S1IED1 standalone.sed

The IPs are defined in the ICD and SED files so the correct mininet nodes must be used.

Alternate IPs to use (requires amending ICD and SED files):
- TIED1  on 172.16.3.41 (h2)
- S1IED1 on 172.16.2.41 (h13)


## Acknowledgement

This work is supported by the National Research Foundation, Singapore, Singapore University of Technology and Design under its National Satellite of Excellence in Design Science and Technology for Secure Critical Infrastructure Grant (NSoE_DeST-SCI2019-0005).
