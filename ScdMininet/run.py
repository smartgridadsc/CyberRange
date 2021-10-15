"""
run.py
mytopo
"""
import json
import sys
from mininet.net import Mininet
from mininet.cli import CLI
from mininet.link import Link, TCLink, Intf
from mininet.node import Controller, OVSKernelSwitch, UserSwitch
from mininet.log import setLogLevel, info

from mytopo import MyTopo

"""Main container used to run the simulation."""


def startNetwork():
    switchList = []
    switchListF = []
    IP_GatewayList = []

    config_fileList = []

    filename = "scd_test.json"
    config_file = "config_file.txt"

    with open (config_file, 'r') as config:
        for i in range (4):
            f = config.readline()
            text_string = f.split('"')[1]
            config_fileList.append(text_string)

    with open(filename, 'r') as file:

        scd_dict = json.load(file)
        for scd in scd_dict:
            iedName = scd.get('iedName')
            type = scd.get('type')
            IP_Gateway = scd.get('IP-GATEWAY')
            if type == 'switch':
                switchList.append(iedName)
            if type == 'ied':
                IP_GatewayList.append(IP_Gateway)

    extSwitch = net.get('s100')

    intf_i = config_fileList[0]
    _intf = Intf(str(intf_i), extSwitch)

    sgw = net.get('sgw')

    for i in IP_GatewayList:
        sgw.cmd('ifconfig sgw-eth0 ' + i + ' netmask ' + config_fileList[2])

    IP_i = config_fileList[1]
    sgw.cmd('ifconfig sgw-eth1 '+ IP_i + ' netmask ' + config_fileList[3])

    sgw.cmd('sudo echo 1 > /proc/sys/net/ipv4/ip_forward')

    net.addController('c0', controller=Controller, port=6653)
    net.start()

    switchCount = len(switchList)

    for i in range(0, switchCount):
        switchListF.append(net.get('s' + str(i + 1)))

    for i in range(0, switchCount):
        switchListF[i].cmd('ovs-vsctl set-fail-mode s' + str(i + 1) + ' standalone')
        switchListF[i].cmd('ovs-vsctl set-controller s' + str(i + 1))
        switchListF[i].cmd('ovs-vsctl set Bridge s' + str(i + 1) + ' stp-enable=true')

    CLI(net)

    net.stop()


if __name__ == "__main__":
    setLogLevel('info')
    topo = MyTopo()
    net = Mininet(controller=None, topo=topo, link=TCLink)

    startNetwork()
