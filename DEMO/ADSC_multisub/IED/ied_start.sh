#!/bin/bash

IED_SCRIPT_DIR=$(cd $(dirname "${BASH_SOURCE[0]}") && pwd)

echo "Starting $1"

cd $IED_SCRIPT_DIR/$1

sudo ./VIRTUAL_IED $1 $IED_SCRIPT_DIR/db_config.txt $1_CPMapping.json $1_Threshold.json
