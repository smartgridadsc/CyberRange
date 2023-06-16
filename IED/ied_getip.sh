#!/usr/bin/bash

#
#  ied_getip.sh
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

CURR_FLDR=$(pwd)
ICD_INPUT_FLDR=01_input

# pre-requisite: xmllint and its dependencies in .libs
XMLLINT=./xmllint
XMLMATCH_IED=/SCL/Communication/SubNetwork/ConnectedAP/@iedName
XMLMATCH_IED_IP=/SCL/Communication/SubNetwork/ConnectedAP/Address/P[@type=\'IP\']

#####
# Process input files
# a) check if input folder is valid
# b) extract IED names from ICD files
# c) extract IED IP addresses from ICD files (optional)
# d) consolidate IP-name pairs into json string and return this string
#####

if [ ! -d "$CURR_FLDR/$ICD_INPUT_FLDR" ]; then
   echo Missing input folder \"$CURR_FLDR/$ICD_INPUT_FLDR\". Exiting.
   exit
fi
i=0
json_str=""
for ICD_FILE in $(ls $CURR_FLDR/$ICD_INPUT_FLDR/*\.icd)
do
   IED_NAME=`cat $ICD_FILE | sed 's/xmlns="[^"]*"//g' | $XMLLINT --xpath "string($XMLMATCH_IED)" -`
   IED_IP=`cat $ICD_FILE | sed 's/xmlns="[^"]*"//g' | $XMLLINT --xpath "string($XMLMATCH_IED_IP)" -`
   #echo "Processing file $(basename $ICD_FILE) -\> IED name: $IED_NAME, IP: $IED_IP"
   if [ "$(basename $ICD_FILE .icd)" != "$IED_NAME" ]; then
      echo "[WARNING] IED name \"$IED_NAME\" does not match filename \"$(basename $ICD_FILE)\", skipping." >/dev/stderr
      continue
   fi
   i+=1
   ip_pair="\"$IED_IP\": \"$IED_NAME\""
   if [ "$json_str" == "" ]; then 
     json_str=$ip_pair
   else
     json_str+=", $ip_pair"
   fi
done

result=`jq -n "{ $json_str }"`
echo -e "$result"
exit
