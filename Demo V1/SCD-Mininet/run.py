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

    iedCount = 0
    iedCmdDict = { 'ied0': 'file path to ied 0 exec',
                   'ied1': 'file path to ied 1 exec',
                   'ied2': 'file path to ied 2 exec',
                   'ied3': 'file path to ied 3 exec',
                   'ied4': 'file path to ied 4 exec',
                   'ied5': 'file path to ied 5 exec',
                   'ied6': 'file path to ied 6 exec',
                   'ied7': 'file path to ied 7 exec',
                   'ied8': 'file path to ied 8 exec',
                   'ied9': 'file path to ied 9 exec',
                   'ied10': 'file path to ied 10 exec',
                   'ied11': 'file path to ied 11 exec',
                   'ied12': 'file path to ied 12 exec',
                   'ied13': 'file path to ied 13 exec',
                   'ied14': 'file path to ied 14 exec',
                   'ied15': 'file path to ied 15 exec',
                   'ied16': 'file path to ied 16 exec',
                   'ied17': 'file path to ied 17 exec',
                   'ied18': 'file path to ied 18 exec',
                   'ied19': 'file path to ied 19 exec',
                   'ied20': 'file path to ied 20 exec',
                   'ied21': 'file path to ied 21 exec'
                   }
    
    #added for external connection
    extSwitch = net.get('s100')
    #TODO network interface can be automaticaly populated?? or can be obtained via command line argument
    _intf = Intf('enp0s8', extSwitch)
    sgw = net.get('sgw')
    #TODO this gateway address should be given from JSON. Each IED has gateway field.
    sgw.cmd('ifconfig sgw-eth0 192.168.170.2 netmask 255.255.255.0')
    #TODO this IP address could be populated automatically??
    sgw.cmd('ifconfig sgw-eth1 192.168.9.200 netmask 255.255.255.0')
    #enable routing on the router.
    sgw.cmd('sudo echo 1 > /proc/sys/net/ipv4/ip_forward') 
    #sgw.cmd('ifconfig sgw-eth1 hw ether 0a:e0:18:28:78:69')   

    filename = "scd.json"
    with open(filename, 'r') as file:

        scd_dict = json.load(file)
        for scd in scd_dict:
            iedName = scd.get('iedName')
            type = scd.get('type')
            if type == 'switch':
                switchList.append(iedName)
                
            #added to start IED on each node (not tested yet)
            #if type == 'ied':
            #    iedCount++

    net.addController('c0', controller=Controller, port=6653)
    net.start()

    switchCount = len(switchList)

    for i in range(0, switchCount):
        switchListF.append(net.get('s' + str(i + 1)))
    for i in range(0, switchCount):
        switchListF[i].cmd('ovs-vsctl set-fail-mode s' + str(i + 1) + ' standalone')
        switchListF[i].cmd('ovs-vsctl set-controller s' + str(i + 1))
        switchListF[i].cmd('ovs-vsctl set Bridge s' + str(i + 1) + ' stp-enable=true')

    #added to start IED on each node (not tested yet)
    #for i in range(iedCount):
    #    ied = net.get('h' + str(i+1))
    #    ied.cmd('sudo service mysql start') #not sure if this is actually necessary
    #    iedCmd = iedCmdDict['ied' + str(i)]
    #    ied.cmd(iedCmd)

    CLI(net)

    net.stop()


if __name__ == "__main__":
    setLogLevel('info')
    topo = MyTopo()
    net = Mininet(controller=None, topo=topo, link=TCLink)

    startNetwork()
