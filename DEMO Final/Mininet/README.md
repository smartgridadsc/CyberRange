## Mininet Startup with Virtual IED

This folder is for starting up a Mininet cyber range network for pandapower. It will also start virtual IEDs in their respective Mininet nodes.  

Input file required from user:
- SCD file in JSON format

To run:  
- sudo python3 run.py

Note:
- The script will require the folder "IED" under the same parent folder
- Refer to utils/scd_merger_parser for more details regarding the SCD JSON file
