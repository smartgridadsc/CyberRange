import run
import scd_parser
import os
import sys

if __name__ == '__main__':
    file = sys.argv[1]
    new_parser = scd_parser.SCDParser(file)
    new_parser.gen_json("scd_test.json")
    exec(open("./run.py").read())