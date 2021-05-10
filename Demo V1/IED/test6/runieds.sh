#!/bin/bash

if [ $# -lt 2 ]
then
	echo "Failed, not enough arguments"
	echo "./runieds.sh <last-ied-index> <polling-interval>"
	exit
elif [ $1 -lt 0 ]
then 
	echo "Argument must be >= 0"
	exit
fi

echo "Running ieds 0 - $1"
for i in $(seq 0 $1)
do
	echo "Starting ied$i"
	cd /home/ied0/Desktop/newied/ied$i 
	sudo ip netns exec iedspace$i ./ied$i ied${i}scl.icd $2 > /dev/null & 
done
