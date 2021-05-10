import xml.etree.ElementTree as ET
import json


class SCDParser:
    def __init__(self, scd_path):
        self.scd_path = scd_path
        self.root = ET.parse(scd_path)
        # Communication section
        self.communication = self.root.find(self.add_xmlns("Communication"))
        # a dict which stores key:Cable name -> value:switch information responding to this Cable
        # cable name is the same in switch side and ied side
        # Cable name should be unique
        # e.g. {"C10":{'Port': '1', 'Type': 'Connection', 'switch_iedname': 'SW11'}}
        self.switch_cable_iedname = {"switch_iednames": []}

    def add_xmlns(self, a_string):
        return "{http://www.iec.ch/61850/2003/SCL}" + a_string

    def getaddresses(self, Address_tag):
        temp = {}
        for p in Address_tag.findall(self.add_xmlns("P")):
            temp[p.get("type")] = p.text
        return temp

    def find_cable_to_switch(self):
        for ied in self.root.findall(self.add_xmlns("IED")):
            # distinguish switch using <IED desc="switch" />
            if ied.get("desc") == "switch":
                for switch in self.root.findall('.//' + self.add_xmlns("ConnectedAP[@iedName='{}']".format(ied.get("name")))):
                    self.switch_cable_iedname["switch_iednames"].append(ied.get("name"))
                    for physConn in switch.findall(".//" + self.add_xmlns("PhysConn")):
                        temp = self.getaddresses(physConn)
                        if temp.get("Cable") is not None:
                            temp["switch_iedname"] = ied.get("name")
                            cable = temp.pop("Cable")
                            if temp.get("Type") is not None:
                                # No need Type section
                                temp.pop("Type")  # "Type":"Connection"
                            #  Cable section not exist, means this port is not used
                            self.switch_cable_iedname[cable] = temp

        # print(self.switch_cable_iedname)
    def gen_json(self, store_path=None):
        self.find_cable_to_switch()
        output = []
        # initialize the first element as subnetwork
        output.append({"type": "subnetwork"})
        for subnetwork in self.communication.findall(self.add_xmlns("SubNetwork")):
            # type subnetwork.get("type")
            bitrate = subnetwork.find(self.add_xmlns("BitRate"))
            # some subnetwork does some with bitrate section
            if bitrate is not None:
                bitrate = bitrate.text + bitrate.get("multiplier") + bitrate.get("unit")
                # include in json
            temp = {}
            temp["subnetwork_type"] = subnetwork.get("type")
            temp["bitrate"] = bitrate
            output[0][subnetwork.get("name")] = temp
            for connectedAP in subnetwork.findall(self.add_xmlns("ConnectedAP")):
                temp = {}
                connectedAP_iedname = connectedAP.get("iedName")
                temp["iedName"] = connectedAP_iedname
                temp["type"] = 'ied'
                temp["in_subnetwork"] = subnetwork.get("name")
                addresses = self.getaddresses(connectedAP.find(self.add_xmlns("Address")))
                temp.update(addresses)
                # one ied may have multiple physConns for connecting to more than one switch
                temp["MAC-Address"] = None
                temp["manufacturer"] = ''
                temp["physConn"] = []
                # find manufacturer
                for ied in self.root.findall('.//' + self.add_xmlns("IED[@name='{}']".format(connectedAP_iedname))):
                    temp["manufacturer"] = ied.get("manufacturer")

                if connectedAP_iedname in self.switch_cable_iedname["switch_iednames"]:
                    temp["type"] = 'switch'
                    # this ied is a switch, pass
                    # switch only contains physConn sections
                    for physical_conn in connectedAP.findall(self.add_xmlns("PhysConn")):
                        temp_phys = self.getaddresses(physical_conn)
                        if temp_phys.get("Type") is not None:
                            temp_phys.pop("Type")
                        temp["physConn"].append(temp_phys)
                    output.append(temp)
                    continue

                temp["GSE"] = []
                for physical_conn in connectedAP.findall(self.add_xmlns("PhysConn")):
                    temp_phys = self.getaddresses(physical_conn)
                    if temp_phys.get("Type") is not None:
                        temp_phys.pop("Type")
                    from_port = temp_phys.pop("Port")
                    temp_phys["from_port"] = from_port
                    temp_phys["to_port"] = self.switch_cable_iedname[temp_phys["Cable"]]["Port"]
                    temp_phys["to_switch"] = self.switch_cable_iedname[temp_phys["Cable"]]["switch_iedname"]
                    temp["physConn"].append(temp_phys)
                # GOOSE ignore for now
                for gse in connectedAP.findall(self.add_xmlns("GSE")):
                    gse_addr = self.getaddresses(gse.find(self.add_xmlns("Address")))
                    gse_addr.pop("APPID")
                    # gse_min_time = gse.find(self.add_xmlns("MinTime")).text
                    # gse_max_time = gse.find(self.add_xmlns("MaxTime")).text
                    temp["GSE"].append(gse_addr)
                if temp["GSE"]:
                    # GSE section is present
                    temp["MAC-Address"] = temp["GSE"][0]["MAC-Address"]
                output.append(temp)
        if store_path is None:
            return output
        write1 = open(store_path, 'w+', encoding="utf8")
        write1.write(json.dumps(output, indent=4))


#new_parser = SCDParser('110_11kV.scd')
new_parser = SCDParser('110_11kV.scd')
new_parser.gen_json('scd.json')


