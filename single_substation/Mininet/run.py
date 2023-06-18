#
#  run.py
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

"""
run.py
mytopo
"""
import json
import os
import sys
import ipaddress
import subprocess
from mininet.net import Mininet
from mininet.cli import CLI
from mininet.link import Link, TCLink, Intf
from mininet.node import Controller, OVSKernelSwitch, RemoteController
from mininet.log import setLogLevel, info

from mytopo import MyTopo

"""Main container used to run the simulation."""

class StopExecution(Exception):
    def _render_traceback_(self):
        pass

def startNetwork(topo, scdFile, configFile, remote=False):
    folder_path = os.path.dirname(os.path.realpath(__file__))
    iedStartScript = folder_path + '/../IED/ied_start.sh'

    #IP_GatewayList = []
    #config_fileList = []

    #with open (configFile, 'r') as config:
    #    for i in range (4):
    #        f = config.readline()
    #        text_string = f.split('"')[1]
    #        config_fileList.append(text_string)

    #with open(scdFile, 'r') as file:

    #    scd_dict = json.load(file)
    #    for scd in scd_dict:
    #        type = scd.get('type')
    #        IP_Gateway = scd.get('IP-GATEWAY')

    #        if type == 'ied':
    #            IP_GatewayList.append(IP_Gateway)

    #extSwitch = net.get('s100')

    #intf_i = config_fileList[0]
    #_intf = Intf(str(intf_i), extSwitch)

    # sgw = net.get('sgw')

    #for i in IP_GatewayList:
        #sgw.cmd('ifconfig sgw-eth0 ' + i + ' netmask ' + config_fileList[2])

    #IP_i = config_fileList[1]
    #sgw.cmd('ifconfig sgw-eth1 '+ IP_i + ' netmask ' + config_fileList[3])

    #sgw.cmd('sudo echo 1 > /proc/sys/net/ipv4/ip_forward')

    print('Router list:', topo.routerList)
    #raise StopExecution

    if remote:
        net.addController('c0', controller=RemoteController, ip='172.17.0.5', port=6653)
    else:
        net.addController('c0', controller=Controller, port=6653)

    net.start()

    if not remote:
        for i in range(0, len(topo.switchNameList)):
            thisSwitch = net.get(topo.switchNameList[i])
            thisSwitch.cmd('ovs-vsctl set-fail-mode ' + topo.switchNameList[i] + ' standalone')
            thisSwitch.cmd('ovs-vsctl set-controller ' + topo.switchNameList[i])
            thisSwitch.cmd('ovs-vsctl set Bridge ' + topo.switchNameList[i] + ' stp-enable=true')
        if topo.wanSwitch:
            thisSwitch = net.get(topo.wanSwitch)
            thisSwitch.cmd('ovs-vsctl set-fail-mode ' + topo.wanSwitch + ' standalone')
            thisSwitch.cmd('ovs-vsctl set-controller ' + topo.wanSwitch)
            thisSwitch.cmd('ovs-vsctl set Bridge ' + topo.wanSwitch + ' stp-enable=true')

    # additional routes to allow interconnectiion among multiple subnets
    for i in range(0, len(topo.routerList)):
        #thisRouter = net.get('r' + str(i + 1))
        thisRouter = net.get(topo.routerList[i])
        for j in range(0, len(topo.routerList)):
            if i != j:
                thisRouter.cmd('route add -net ' + str(topo.routerSubnetList[j]) + ' gw ' + MyTopo.getIP(0, j+1))
                print('r' + str(i+1) + ': route add -net ' + str(topo.routerSubnetList[j]) + ' gw ' + MyTopo.getIP(0, j+1))

    getip_result = subprocess.run(['./ied_getip.sh'], stdout=subprocess.PIPE, text=True)
    iedDict = json.loads(getip_result.stdout)
    print('IED details from ICD files:\n', json.dumps(iedDict, indent=4), sep='')

    hostCount = len(topo.hostList)
    for i in range(0, hostCount):
        ied = net.get(topo.hostList[i])
        ied_ip = ied.IP(intf = None).replace("'","")
        if ied_ip not in iedDict.keys():
            print(topo.hostList[i] + ' - ' + ied_ip + ' has no matching IP in ICD file')
            continue
        iedName = iedDict[ied_ip]
        iedCmd = 'xterm -T "' + topo.hostList[i] + ' - ' + iedName + '" -e ' + iedStartScript + ' ' + iedName + ' &'
        print("Starting " + str(ied_ip) + " with \"" + iedCmd + "\" on " + topo.hostList[i])
        ied.cmd(iedCmd)
        ied.cmd('sleep 0.5s')

    CLI(net)

    net.stop()


if __name__ == "__main__":

    scdFile = "scd.json"
    configFile = "config_file.txt"
    remote = False # True if using a remote controller, such as ONOS

    setLogLevel('info')
    topo = MyTopo(scdFile)
    if remote:
        net = Mininet(controller=None, topo=topo, link=TCLink, switch=OVSKernelSwitch, waitConnected=True)
    else:
        net = Mininet(controller=None, topo=topo, link=TCLink)

    startNetwork(topo, scdFile, configFile, remote)
