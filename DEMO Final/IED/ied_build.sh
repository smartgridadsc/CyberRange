#!/usr/bin/bash

CURR_FLDR=$(pwd)
ICD_INPUT_FLDR=01_input
BUILD_FLDR=02_build
PREP_FLDR=03_prep
TARGET_FLDR=$CURR_FLDR
IED_PROCESS_SCRIPT=ied_process.py

# pre-requisite: xmllint and its dependencies in .libs
XMLLINT=./xmllint
XMLMATCH_IED=/SCL/Communication/SubNetwork/ConnectedAP/@iedName
#XMLMATCH_IED=/SCL/IED/@name  # alternate xml tag to extract IED name
XMLMATCH_IED_IP=/SCL/Communication/SubNetwork/ConnectedAP/Address/P[@type=\'IP\']

#####
# Function for cleaning up build folder
# a) make clean
# b) remove generated static models
# c) remove config folder
#####

function cleanup_build()
{
  make clean
  if [ -f "$CURR_FLDR/$BUILD_FLDR/static_model.c" ]; then
    rm $CURR_FLDR/$BUILD_FLDR/static_model\.*
  fi
  if [ -d "$CURR_FLDR/$BUILD_FLDR/config_files" ]; then
    rm -rf $CURR_FLDR/$BUILD_FLDR/config_files
  fi
}

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
# d) store above in arrays for post processing
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
   all_IED_Names+=($IED_NAME)
   all_IED_IPs+=($IED_IP)
done

#####
# Prepare IED-specific codes
# a) initialise build folder (make clean, remove generated static models and config folder)
# b) place IED-specific configuration file in build folder (i.e. <ied_name>.icd file)
# c) make VIRTUAL_IED
#####

cd $CURR_FLDR/$BUILD_FLDR
for IED in ${all_IED_Names[@]}
do
  cleanup_build
  mkdir $CURR_FLDR/$BUILD_FLDR/config_files
  if [ -d "$CURR_FLDR/$ICD_INPUT_FLDR" ] && [ -f "$CURR_FLDR/$ICD_INPUT_FLDR/${IED}.icd" ]; then
    cp -p $CURR_FLDR/$ICD_INPUT_FLDR/${IED}\.icd $CURR_FLDR/$BUILD_FLDR/config_files/.
    echo ${IED}.icd > $CURR_FLDR/$BUILD_FLDR/config_files/active_icd
  fi
  make

  #####
  # set up IED folder
  # a) create folder
  # b) move newly compiled VIRTUAL_IED to folder
  # c) move IED json files to folder
  # d) copy ICD file to folder
  #####
   
  if [ -d "$TARGET_FLDR/$IED" ]; then
    rm -fr "$TARGET_FLDR/$IED"
  fi
  mkdir "$TARGET_FLDR/$IED"
  if [ -f "$CURR_FLDR/$BUILD_FLDR/VIRTUAL_IED" ]; then
    mv $CURR_FLDR/$BUILD_FLDR/VIRTUAL_IED $TARGET_FLDR/$IED/.
  else
    echo "Missing VIRTUAL_IED for $IED"
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
  cp -p $CURR_FLDR/$ICD_INPUT_FLDR/${IED}\.icd $TARGET_FLDR/$IED/.

done

#####
# Final clean up
#####

cleanup_prep
cleanup_build

exit
