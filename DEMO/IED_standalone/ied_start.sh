#!/usr/bin/bash

#
#  ied_start.sh
#
#  Copyright 2022 ADSC
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
