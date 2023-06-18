#!/usr/bin/bash

#
#  ied_set_iedjson.sh
#
#  Copyright 2023 ADSC
#
#  This file is part of SGCR.
#
#  SGCR is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  SGCR is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with SGCR. If not, see <http://www.gnu.org/licenses/>.

#####
# This script creates <IED_name>_CPMapping.json and <IED_name>_Threshold.json
# in the respective IED folders. User can specify which IEDs to work on.
#####

CURR_FLDR=$(pwd)
ICD_INPUT_FLDR=01_input
PREP_FLDR=03_prep
TARGET_FLDR=$CURR_FLDR
IED_PROCESS_SCRIPT=ied_process.py

# pre-requisite: xmllint and its dependencies in .libs
XMLLINT=./xmllint
XMLMATCH_IED=/SCL/Communication/SubNetwork/ConnectedAP/@iedName
#XMLMATCH_IED=/SCL/IED/@name  # alternate xml tag to extract IED name
XMLMATCH_IED_IP=/SCL/Communication/SubNetwork/ConnectedAP/Address/P[@type=\'IP\']

#####
# Usage help
#####

while getopts 'h' option; do
  case "$option" in
    h)
      echo "Usage: $(basename $0) [-h] [<IED_1> <IED_2> ... <IED_n>]" >&2
      exit;;
  esac
done

#####
# Get the IEDs specified by user, if any
#####

all_User_IED_Names=()
if [ $# -eq 0 ]; then
  echo "No specific IED specified, processing all based on ICD files."
else
  i=1
  for user_ied in "$@"
  do
    i+=1
    all_User_IED_Names+=($user_ied)
  done
  echo "Processing ${all_User_IED_Names[@]}";
fi

#####
# Function for cleaning up prep folder
# a) remove prep folder
#####

function cleanup_prep()
{
  if [ -d "$CURR_FLDR/$PREP_FLDR" ]; then
    rm -rf $CURR_FLDR/$PREP_FLDR
  fi
}

#####
# Process input files
# a) check if input folder is valid
# b) check if IED process script exists 
# c) clean up prep folder
# d) process CPMapping and Threshold xml and generate individual IED's json files
#####

if [ ! -d "$CURR_FLDR/$ICD_INPUT_FLDR" ]; then
   echo Missing input folder \"$CURR_FLDR/$ICD_INPUT_FLDR\". Exiting.
   exit
fi
if [ ! -f "$CURR_FLDR/$IED_PROCESS_SCRIPT" ]; then
   echo Missing IED process script \"$IED_PROCESS_SCRIPT\". Exiting.
   exit
fi
cleanup_prep
mkdir $CURR_FLDR/$PREP_FLDR

echo Generating CPMapping and Threshold for individual IEDs
cd $CURR_FLDR && python3 $IED_PROCESS_SCRIPT

#####
# Process input files
# a) check if input folder is valid
# b) extract IED names from ICD files
# c) extract IED IP addresses from ICD files (optional)
# d) store above in arrays for post processing if is in user-specified list
#####

if [ ! -d "$CURR_FLDR/$ICD_INPUT_FLDR" ]; then
  echo Missing input folder \"$CURR_FLDR/$ICD_INPUT_FLDR\". Exiting.
  exit
fi
all_IED_Names=()
all_IED_IPs=()
for ICD_FILE in $(ls $CURR_FLDR/$ICD_INPUT_FLDR/*\.icd)
do
  IED_NAME=`cat $ICD_FILE | sed 's/xmlns="[^"]*"//g' | $XMLLINT --xpath "string($XMLMATCH_IED)" -`
  IED_IP=`cat $ICD_FILE | sed 's/xmlns="[^"]*"//g' | $XMLLINT --xpath "string($XMLMATCH_IED_IP)" -`
  echo "Processing file $(basename $ICD_FILE) -\> IED name: $IED_NAME, IP: $IED_IP"
  if [ "$(basename $ICD_FILE .icd)" != "$IED_NAME" ]; then
    echo "  IED name \"$IED_NAME\" does not match filename \"$(basename $ICD_FILE)\", skipping."
    continue
  fi
  # if there is a user-specified list and current IED exists in this list
  if [[ ${#all_User_IED_Names[@]} -eq 0 || (${#all_User_IED_Names[@]} -gt 0 && " ${all_User_IED_Names[*]} " =~ " ${IED_NAME} ") ]]; then
    all_IED_Names+=($IED_NAME)
    all_IED_IPs+=($IED_IP)
  fi
done

#####
# set up IED folders
# a) verify folder existence
# b) move IED json files to folder
#####

for IED in ${all_IED_Names[@]}
do

  if [ ! -d "$TARGET_FLDR/$IED" ]; then
    echo "Missing $IED folder"
    continue
  fi
  if [ ! -f "$CURR_FLDR/$PREP_FLDR/IED_CPMapping/${IED}_CPMapping.json" ]; then
    echo "Missing $IED_CPMapping.json"
    continue
  fi
  if [ ! -f "$CURR_FLDR/$PREP_FLDR/IED_Threshold/${IED}_Threshold.json" ]; then
    echo "Missing $IED_CPMapping.json"
    continue
  fi
  mv $CURR_FLDR/$PREP_FLDR/IED_*/${IED}_*\.json $TARGET_FLDR/$IED/.

done

#####
# Final clean up
#####

cleanup_prep

exit
