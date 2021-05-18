#!/bin/bash

if [ $# -lt 1 ]
then
	echo "Failed, not enough arguments"
	echo "./setup_netns.sh <last-ied-index>"
	exit
elif [ $1 -lt 1 ]
then
	echo "Failed, argument less than 1"
	exit
fi

sudo ip link add br0 type bridge
sudo ifconfig ens33 0.0.0.0
sudo ip link set ens33 master br0 up

index=0
echo "Setting up netns for 0 - $1"
for i in $(seq 0 $1)
do
    sudo ip netns add iedspace$i
    next=$(($index+1))
    sudo ip link add veth$index netns iedspace$i type veth peer name veth$next
    ip=$(($i+150))
    sudo ip netns exec iedspace$i ifconfig veth$index 192.168.170.$ip netmask 255.255.255.0 up 
    sudo ip link set veth$next master br0 up

    index=$(($index+2))
done

sudo ip link set br0 up
