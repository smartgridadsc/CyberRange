#!/usr/bin/bash

IED_SCRIPT=${BASH_SOURCE[0]}
IED_SCRIPT_DIR=$(cd $(dirname "$IED_SCRIPT") && pwd)
DEFAULT_SED=standalone.sed

if [[ ($# -ne 1) && ($# -ne 2) ]]; then
  echo "Usage: $IED_SCRIPT <IED_Name> [<SED_File>]"
  exit
fi

if [[ ($# -eq 2) ]]; then
  SED_FILE=$2
else
  SED_FILE=$DEFAULT_SED
fi

echo "Starting $1"

cd $IED_SCRIPT_DIR/$1

sudo ./VIRTUAL_IED $1 $IED_SCRIPT_DIR/db_config.txt $1_CPMapping.json $1_Threshold.json $SED_FILE
