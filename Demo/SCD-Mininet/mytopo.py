from mininet.topo import Topo
import json
import sys

class MyTopo( Topo ):
        def __init__( self ):

            Topo.__init__( self )

            iedList = []
            iedIPList = []
            iedPhyConn = []

            switchList = []
            switchCableList = []

            filename = "scd.json"

            with open(filename, 'r') as file:
                scd_dict = json.load(file)
                for scd in scd_dict:
                    iedName = scd.get('iedName')
                    type = scd.get('type')
                    IP = scd.get('IP')
                    physConn = scd.get('physConn')

                    #host
                    if type == 'ied':
                        iedList.append(iedName)
                        iedIPList.append(IP)

                        for con in physConn:
                            to_switch = con.get('to_switch')
                        iedPhyConn.append(to_switch)

                    #switch
                    elif type == 'switch':
                        switchList.append(iedName)

                        for switchcon in physConn:
                            Cable = switchcon.get('Cable')
                            if Cable is None:
                                Cable = "No Cable"

                            switchCableList.append(Cable)

            switchCount = len(switchList)
            switchListF = []
            SwitchCableListCount = len(switchCableList)

            switchCable = [switchCableList[i:i + int(SwitchCableListCount/switchCount)] for i in range(0, len(switchCableList), int(SwitchCableListCount/switchCount))]

            for i in range(0, switchCount):
                tempSwitch = self.addSwitch(
                    's' + str(i+1))
                switchListF.append(tempSwitch);

            hostCount = len(iedList)
            hostList = []

            # For now adding default route statically. should be done based on json!
            for i in range (0,hostCount):
                tempHost = self.addHost(
                    'h' + str(i+1),
                    ip=iedIPList[i] + '/24',
                    defaultRoute='via 192.168.170.2')
                    
                hostList.append(tempHost);

            for i in range (0,hostCount):
                for j in range (0,switchCount):
                   if iedPhyConn[i] == switchList [j]:
                      iedPhyConn[i] = 's' + str(j+1)

            # Link the hosts to the switches
            for i in range (0,hostCount):
                self.addLink(iedPhyConn[i], hostList[i])

            SwitchCableCount = len(switchCable)
            switch_range = SwitchCableListCount/SwitchCableCount

            #link switches
            for i in range (SwitchCableCount):
                for j in range(int(switch_range)):
                    if switchCable[i][j] == switchCable[i-SwitchCableCount][j-int(switch_range)] and switchCable[i][j] != "No Cable":
                        s = self.addLink(switchListF[i], switchListF[i-1])
                        if s == s:
                            break


            #added for external connection
            sgw = self.addHost('sgw')
            self.addLink(sgw,'s1')
            exsw = self.addSwitch('s100')
            self.addLink(sgw,'s100')
            


topos = { 'mytopo': ( lambda: MyTopo() ) }

