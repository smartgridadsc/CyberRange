from scd_parser import SCDParser

new_parser = SCDParser('./scd_output_files/ADSC_combined_SS.scd')
new_parser.gen_json('./scd_output_files/scd_multi3_merged.json')
