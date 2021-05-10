#!/bin/bash

if [ -z "$1" ]
then
	echo "Failed, please enter integer argument"
	exit
elif [ $1 -lt 1 ]
then 
	echo "Argument must be greater than 0"
	exit
fi

for i in $(seq 0 $1)
do
	echo $i
done

