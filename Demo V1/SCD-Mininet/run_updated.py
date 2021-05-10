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
    iedCmdDict = { 'ied0': '/home/ubuntu/Desktop/ied/ied0/ied0',
                   'ied1': '/home/ubuntu/Desktop/ied/ied1/ied1',
                   'ied2': '/home/ubuntu/Desktop/ied/ied2/ied2',
                   'ied3': '/home/ubuntu/Desktop/ied/ied3/ied3',
                   'ied4': '/home/ubuntu/Desktop/ied/ied4/ied4',
                   'ied5': '/home/ubuntu/Desktop/ied/ied5/ied5',
                   'ied6': '/home/ubuntu/Desktop/ied/ied6/ied6',
                   'ied7': '/home/ubuntu/Desktop/ied/ied7/ied7',
                   'ied8': '/home/ubuntu/Desktop/ied/ied8/ied8',
                   'ied9': '/home/ubuntu/Desktop/ied/ied9/ied9',
                   'ied10': '/home/ubuntu/Desktop/ied/ied10/ied10',
                   'ied11': '/home/ubuntu/Desktop/ied/ied11/ied11',
                   'ied12': '/home/ubuntu/Desktop/ied/ied12/ied12',
                   'ied13': '/home/ubuntu/Desktop/ied/ied13/ied13',
                   'ied14': '/home/ubuntu/Desktop/ied/ied14/ied14',
                   'ied15': '/home/ubuntu/Desktop/ied/ied15/ied15',
                   'ied16': '/home/ubuntu/Desktop/ied/ied16/ied16',
                   'ied17': '/home/ubuntu/Desktop/ied/ied17/ied17',
                   'ied18': '/home/ubuntu/Desktop/ied/ied18/ied18',
                   'ied19': '/home/ubuntu/Desktop/ied/ied19/ied19',
                   'ied20': '/home/ubuntu/Desktop/ied/ied20/ied20',
                   'ied21': '/home/ubuntu/Desktop/ied/ied21/ied21'
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
                
            #added to start IED on each node
			#count IEDs.
            if type == 'ied':
                if ("PLC" not in iedName) and ("HMI" not in iedName):
                    iedCount = iedCount + 1
        
        print(str(iedCount) + " IEDs are defined.")		

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
    for i in range(iedCount):
        ied = net.get('h' + str(i+1))
        #ied.cmd('sudo service mysql start') #not sure if this is actually necessary
        iedCmd = iedCmdDict['ied' + str(i)]
        print("Starting IED" + str(i+1) + " as " +iedCmd + " on " + 'h' + str(i+1))
        ied.cmd(iedCmd)

    CLI(net)

    net.stop()


if __name__ == "__main__":
    setLogLevel('info')
    topo = MyTopo()
    net = Mininet(controller=None, topo=topo, link=TCLink)

    startNetwork()
