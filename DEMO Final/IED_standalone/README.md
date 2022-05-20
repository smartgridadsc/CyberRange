## Protection Functions between 2 Substations

This folder contains a sample set of protection functions using multicast communication between S1IED1 (simulating substation 1) and TIED1 (simulating substation 2) with SED file standalone.sed.

To test, run both VIRTUAL_IEDs in separate nodes (e.g. VM, mininet, etc.).

The following is an example running on mininet.

1) Start a mininet with single substation model
   a) ~/DEMO/Mininet && sudo python3 run.py

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
