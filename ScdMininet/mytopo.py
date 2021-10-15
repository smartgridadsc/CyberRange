from mininet.topo import Topo
import json
import sys


class MyTopo(Topo):
    def __init__(self):
        "Create custom topo."

        # Initialize topology
        Topo.__init__(self)

        # For Host
        iedList = []
        iedIPList = []
        iedPhyConn = []
        IPGatewayList = []
        IPSubNetList = []

        # For Switch
        switchList = []
        switchCableList = []
        switchPortList = []

        filename = "scd_test.json"

        with open(filename, 'r') as file:
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
                    IPSubNetList.append(IP_Subnet)

                    for con in physConn:
                        to_switch = con.get('to_switch')
                    iedPhyConn.append(to_switch)

                elif devicetype == 'switch':
                    switchList.append(iedName)

                    for switchcon in physConn:

                        #Port
                        Port = switchcon.get('Port')
                        switchPortList.append(int(Port))

                        #Cable
                        Cable = switchcon.get('Cable')

                        if Cable is None:
                            Cable = "No Cable"
                        switchCableList.append(Cable)

        BytesList = []
        for subnet in IPSubNetList:
            if subnet == "255.255.255.0":
                BytesList.append("/24")

            elif subnet == "255.255.0.0":
                BytesList.append("/16")

            elif subnet == "255.0.0.0":
                BytesList.append("/8")

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
        switchNameList = []

        switchCable = [switchCableList[i:i + int(max_port)] for i in
                       range(0, len(switchCableList), int(max_port))]

        print(max_port)

        for i in range(0, switchCount):
            tempSwitch = self.addSwitch(
                's' + str(i + 1))
            switchNameList.append(tempSwitch);

        hostCount = len(iedList)
        hostList = []

        for i in range(0, int(hostCount)):
            tempHost = self.addHost(
                    'h' + str(i + 1),
                    ip=iedIPList[i] + "'" + BytesList[i] + "'",
                    defaultRoute='via ' + str(IPGatewayList[i]))

            hostList.append(tempHost);

        for i in range(0, hostCount):
            for j in range(0, int(switchCount)):
                if iedPhyConn[i] == switchList[j]:
                    iedPhyConn[i] = 's' + str(j + 1)

        # Link the hosts to the switches
        for i in range(0, hostCount):
            self.addLink(iedPhyConn[i], hostList[i])

        # Link between the switches
        for i in range(0,int(switchCount)):
            for j in range(0, int(max_port)):
                for k in range (i+1,int(switchCount)):
                    for l in range(0,int(max_port)):
                        if switchCable[i][j] == switchCable[k][l] and switchCable[i][j] != "No Cable" and switchCable[k][l] != "No Cable":
                            self.addLink(switchNameList[i], switchNameList[k])

        # added for external connection
        sgw = self.addHost('sgw')
        self.addLink(sgw, 's1')
        exsw = self.addSwitch('s100')
        self.addLink(sgw, 's100')

topos = {'mytopo': (lambda: MyTopo())}
