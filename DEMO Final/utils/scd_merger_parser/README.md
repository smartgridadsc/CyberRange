## SCD Merge

This utility merges mulitple single-substation SCD files into one multi-substations SCD file.

To use:
1) Place single-substation SCD files in scd_input_files folder
2) Run: python3 merge_scd.py
3) The merged SCD file will be created in scd_output_files folder

Edit merge_scd.py to point to input and output SCD files of your choice.

## SCD Parser

This utility converts an SCD file to JSON format, which can then be used as an input file for Mininet.

To run:  
python3 parse.py

Edit parse.py to point to the SCD and JSON files of your choice.