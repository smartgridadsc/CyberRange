#!/bin/bash

sudo ip link add br0 type bridge
sudo ip netns add iedspace0
sudo ip netns add iedspace1

sudo ip link add veth0 netns iedspace0 type veth peer name veth1
sudo ip link add veth2 netns iedspace1 type veth peer name veth3

sudo ip netns exec iedspace0 ifconfig veth0 192.168.170.150 netmask 255.255.255.0 up 
sudo ip netns exec iedspace1 ifconfig veth2 192.168.170.151 netmask 255.255.255.0 up

sudo ip link set veth1 master br0 up
sudo ip link set veth3 master br0 up

sudo ip link set ens33 master br0 up
sudo ifconfig ens33 0.0.0.0
sudo ip link set br0 up


