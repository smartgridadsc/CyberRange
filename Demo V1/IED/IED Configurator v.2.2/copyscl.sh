#!/bin/bash

if [ $# -lt 1 ]
then
	echo "Failed, not enough arguments"
	echo "./copyscl.sh <last-ied-index>"
	exit
elif [ $1 -lt 0 ]
then 
	echo "Argument must be >= 0"
	exit
fi

cd /home/ied0/Desktop/newied
files=""

echo "Copying scl files for ieds 0 - $1"
for i in $(seq 0 $1)
do
	files="${files} ied${i}/ied${i}scl.icd"
done

echo "copying ${files}"
scp ${files} 'plc@192.168.170.135:/home/plc/Desktop/iecopenplc/webserver/scl_client_files'
