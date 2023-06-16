#
#  mytopo.py
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
 
from mininet.topo import Topo
from mininet.link import Intf, TCIntf
from mininet.node import Node
import json
import sys
import ipaddress

class Router( Node ):
    "A Node with IP forwarding enabled."

    def config( self, **params ):
        super( Router, self).config( **params )
        # Enable forwarding on the router
        self.cmd( 'sysctl net.ipv4.ip_forward=1' )

    def terminate( self ):
        self.cmd( 'sysctl net.ipv4.ip_forward=0' )
        super( Router, self ).terminate()

class MyTopo(Topo):

    # For Switch
    wanSwitch = None
    switchNameList = []

    # For Router
    routerList = []
    routerIPList = []
    routerSubnetList = []

    # For Host
    hostList = []

    # Using IP network 10.0.x.x
    # e.g. getIP(3,2) returns 10.0.3.2
    #      getIP(3,2,24) returns 10.0.3.2/24
    @staticmethod
    def getIP(subnet, host, mask=None):
        addr = '10.0.' + str(subnet) + '.' + str(host)
        if mask != None:
            addr = addr + '/' + str(mask)
        return addr

    def __init__(self, scdFile):
        "Create custom topo."

        # Initialize topology
        Topo.__init__(self)

        # For Host
        iedList = []
        iedIPList = []
        iedPhyConn = []
        IPGatewayList = []
        IPSubnetList = []

        # For Switch
        switchList = []
        switchCableList = []
        switchPortList = []
        switchDict = []

        # For SCD-defined Router
        scdRouterNameList = []
        scdRouterList = []
        scdRouterIPList = []
        scdRouterIPSubnetList = []
        scdRouterPhyConn = []

        with open(scdFile, 'r') as file:
            scd_dict = json.load(file)

            for scd in scd_dict:
                iedName = scd.get('iedName')
                devicetype = scd.get('type')
                IP = scd.get('IP')
                physConn = scd.get('physConn')
                IP_Gateway = scd.get('IP-GATEWAY')
                IP_Subnet = scd.get('IP-SUBNET')

                if devicetype == 'ied':
                    iedList.append(iedName)
                    iedIPList.append(IP)
                    IPGatewayList.append(IP_Gateway)
                    IPSubnetList.append(IP_Subnet)
                    iedSubnet = scd.get('in_subnetwork')

                    # assuming there is only 1 connection from host to switch 
                    for con in physConn:
                        to_switch = con.get('to_switch')

                    iedPhyConn.append(to_switch)

                    # consolidate subnets and their respective gateways
                    newSubnet = True
                    for i in range(0, len(switchDict)):
                        if switchDict[i]['subnet'] == iedSubnet:
                          newSubnet = False
                          if IP_Gateway is not None:
                            thisGatewayIP = ipaddress.ip_interface(IP_Gateway + '/' + IP_Subnet)
                            if thisGatewayIP not in switchDict[i]['gateway']:
                              switchDict[i]['gateway'].append(thisGatewayIP)
                              switchDict[i]['switch'] = []
                          break
                    if newSubnet:
                        if IP_Gateway is not None:
                            thisGatewayIP = ipaddress.ip_interface(IP_Gateway + '/' + IP_Subnet)
                            switchDict.append({ 'subnet': iedSubnet, 'gateway': [ thisGatewayIP ], 'switch': [] })
                        else:
                            switchDict.append({ 'subnet': iedSubnet, 'gateway': [], 'switch': [] })

                elif devicetype == 'router':
                    scdRouterList.append(iedName)
                    scdRouterIPList.append(IP)
                    scdRouterIPSubnetList.append(IP_Subnet)

                    # assuming there is only 1 connection from router to switch 
                    for con in physConn:
                        to_switch = con.get('to_switch')

                    scdRouterPhyConn.append(to_switch)

                elif devicetype == 'switch':
                    switchList.append(iedName)
                    switchSubnet = scd.get('in_subnetwork')

                    # consolidate subnets and their respective switches
                    newSubnet = True
                    for i in range(0, len(switchDict)):
                        if switchDict[i]['subnet'] == switchSubnet:
                            if switchDict[i]['switch'] == None:
                                switchDict[i]['switch'] = [ iedName ]
                            else:
                                switchDict[i]['switch'].append(iedName)
                            newSubnet = False
                            break
                    if newSubnet:
                        switchDict.append({ 'subnet': switchSubnet , 'switch': [iedName] })
 
                    for switchcon in physConn:

                        #Port
                        Port = switchcon.get('Port')
                        switchPortList.append(int(Port))

                        #Cable
                        Cable = switchcon.get('Cable')

                        if Cable is None:
                            Cable = "No Cable"
                        switchCableList.append(Cable)

        switchPortList_sorted = sorted(switchPortList)
        max_port = switchPortList_sorted[-1]

        for i in range (0,(len(switchList)*int(max_port))-1):
            if (switchPortList[-1] != max_port):
                switchPortList.append(str(int(switchPortList[-1])+1))
                switchCableList.append("No Cable")

            if (int(switchPortList[i+1]) - int(switchPortList[i]) != 1 and int(switchPortList[i]) != int(max_port)):
                switchPortList.insert(i+1, str(int(switchPortList[i]) + 1))
                switchCableList.insert(i+1, "No Cable")

        switchCount = len(switchList)

        switchCable = [switchCableList[i:i + int(max_port)] for i in
                       range(0, len(switchCableList), int(max_port))]

        #print(max_port)

        # Create switches
        for i in range(0, switchCount):
            tempSwitch = self.addSwitch(
                's' + str(i + 1), protocols=["OpenFlow13"])
            self.switchNameList.append(tempSwitch);

        hostCount = len(iedList)

        # WAN switch is required only if there are multiple subnets
        if len(switchDict) > 1:
            self.wanSwitch = self.addSwitch('s0', protocols=["OpenFlow13"])
        else:
            self.wanSwitch = None

        # Create router class nodes (ip forwarding enabled) for SCD-defined routers
        r = 1
        for i in range(0, len(scdRouterList)):

            # Assumption: router name is in the form of R<numeric>
            if scdRouterList[i][0] == 'R' and scdRouterList[i][1:].isdigit():
                thisRouterId = scdRouterList[i][1:]
                thisRouterHostname = 'r' + str(thisRouterId)
                if thisRouterHostname in scdRouterNameList:
                    print('Warning: Duplicate router name ' + thisRouterHostname + ', skipping')
                else:
                    scdRouterNameList.append(thisRouterHostname)
                    thisRouterIP = ipaddress.ip_interface(scdRouterIPList[i] + '/' + scdRouterIPSubnetList[i])
                    thisRouter = self.addNode( thisRouterHostname, ip=str(thisRouterIP), cls=Router )
                    self.routerList.append(thisRouterHostname)
                    self.routerIPList.append(thisRouterIP)
                    self.routerSubnetList.append(ipaddress.ip_interface(thisRouterIP).network)
                    r = r + 1
            else:
                print('Warning: Unrecognisable router name ' + scdRouterList[i] + ' not in R<numeric> format, skipping')

        # Create host for each ied
        for i in range(0, hostCount):
            tempHost = self.addHost(
                'h' + str(i + 1),
                ip=str(ipaddress.ip_interface(iedIPList[i] + '/' + IPSubnetList[i])),
                defaultRoute='via ' + str(IPGatewayList[i]))
            self.hostList.append(tempHost);

        # Replace switch labels with actual switch names
        for s in range(0, switchCount):

            # In ied list
            for i in range(0, hostCount):
                if iedPhyConn[i] == switchList[s]:
                    iedPhyConn[i] = 's' + str(s + 1)

            # In router list
            for i in range(0, len(scdRouterPhyConn)):
                if scdRouterPhyConn[i] == switchList[s]:
                    scdRouterPhyConn[i] = 's' + str(s + 1)

            # In switchDict
            for sn in range(0, len(switchDict)):
                for sw in range(0, len(switchDict[sn]['switch'])):
                    if switchDict[sn]['switch'][sw] == switchList[s]:
                        switchDict[sn]['switch'][sw] = 's' + str(s + 1)

	# Provision new router for each gateway and attach to the first switch of every subnet
        # Required only if there are multiple subnets
        r = 1
        if len(switchDict) > 1:
            for sn in range(0, len(switchDict)):
                firstSwitch = switchDict[sn]['switch'][0]
                for gw in range(0, len(switchDict[sn]['gateway'])):
                    thisRouterIP = switchDict[sn]['gateway'][gw]
                    if thisRouterIP in self.routerIPList:
                        print('Router with IP ' + format(thisRouterIP) + ' already exists, skipping')
                    else:
                        while ('r' + str(r)) in self.routerList:
                            print('Router r' + str(r), 'is already defined, using next increment')
                            r = r + 1
                        thisRouterHostname = 'r' + str(r)
                        thisRouter = self.addNode( thisRouterHostname, ip=str(thisRouterIP), cls=Router )
                        print('Adding new router', thisRouterHostname, str(thisRouterIP), 'to', firstSwitch)
                        self.addLink(firstSwitch, thisRouter)
                        self.addLink(thisRouter, self.wanSwitch, intf=Intf, params1={ 'ip' : self.getIP(0, r, 8) })
                        self.routerList.append(thisRouterHostname)
                        self.routerSubnetList.append(ipaddress.ip_interface(thisRouterIP).network)
                        #print('New router ' + thisRouterHostname + ' WAN ip:', self.getIP(0, r, 8))
                        r = r + 1
        
            # Link the SCD-defined routers to the switches
            # Add another link to WAN switch and assign a WAN IP 10.0.0.x
            # for multiple subnet inter-connectivity
            for i in range(0, len(scdRouterNameList)):
                self.addLink(scdRouterPhyConn[i], scdRouterNameList[i])
                self.addLink(scdRouterNameList[i], self.wanSwitch, intf=Intf, params1={ 'ip' : self.getIP(0, r, 8) })
                #print('SCD defined router ' + scdRouterNameList[i] + ' WAN ip:', self.getIP(0, r, 8))
                r = r + 1

        # Link the hosts to the switches
        for i in range(0, hostCount):
            self.addLink(iedPhyConn[i], self.hostList[i])

        # Link between the switches
        for i in range(0,int(switchCount)):
            for j in range(0, int(max_port)):
                for k in range (i+1,int(switchCount)):
                    for l in range(0,int(max_port)):
                        if switchCable[i][j] == switchCable[k][l] and switchCable[i][j] != "No Cable" and switchCable[k][l] != "No Cable":
                            self.addLink(self.switchNameList[i], self.switchNameList[k])

        # Added for external connection
        #sgw = self.addHost('sgw')
        #self.addLink(sgw, 's1')
        #exsw = self.addSwitch('s100', protocols=["OpenFlow13"])
        #self.addLink(sgw, 's100')

#topos = {'mytopo': (lambda: MyTopo())}
