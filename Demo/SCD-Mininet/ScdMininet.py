import run
import scd_parser
import os

if __name__ == '__main__':
    new_parser = scd_parser.SCDParser('ADSCcommsec.scd')
    new_parser.gen_json('scd.json')
    execfile("run.py")

    os.remove("scd.json")