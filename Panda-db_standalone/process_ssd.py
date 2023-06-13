#
#  process_ssd.py
#
#  Copyright 2022 ADSC
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

import pandapower as pp
import xml.etree.ElementTree as ET
import pandapower.plotting as ppplot
from extra_config_parser import ConfigParser

std_types = ["N2XS(FL)2Y 1x300 RM/35 64/110 kV", "NA2XS2Y 1x240 RM/25 6/10 kV", "NAYY 4x150 SE"]


class GenNetwork:
    def __init__(self, ssd_path, input_dict):
        self.net = pp.create_empty_network()
        self.input_dict = input_dict
        self.ssd_path = ssd_path
        # XML tree
        self.root = ET.parse(ssd_path)

        # initialize a dictionary stores node to bus_id
        self.node_to_busid = {}

        # store all voltagelevels and its specifications
        self.voltageLevels = {}

        # store all power grid components with their specifications
        self.conductingEquipment = {}

        # perform generating network, the network is store in self.net
        self.generate()

    def create_custom_line(self, net, from_bus, to_bus, length_km, choice, cable_dict):
        temp = cable_dict[choice]
        cidx = pp.create_line_from_parameters(net=net, from_bus=from_bus, to_bus=to_bus, length_km=length_km,
                                       r_ohm_per_km=temp[0],
                                       x_ohm_per_km=temp[1], c_nf_per_km=temp[3] / 1000, max_i_ka=temp[3] / 1000)
        print("!!!LINE ID=" + str(cidx) + " From=" + str(from_bus) + " To=" + str(to_bus))

    def create_line_with_switch(self, net, first_bus, last_bus, length_km, std_type):
        lidx = pp.create_line(net, first_bus, last_bus, std_type=std_type, length_km=length_km)
        sw = pp.create_switch(net, bus=first_bus, element=lidx, et="l")
        print("@@@LINE ID=" + str(lidx) + " From=" + str(first_bus) + " To=" + str(last_bus))

    def create_line_with_switch_with_status(self, net, first_bus, last_bus, length_km, std_type, status):
        lidx = pp.create_line(net, first_bus, last_bus, std_type=std_type, length_km=length_km)
        sw = pp.create_switch(net, bus=first_bus, element=lidx, et="l", closed=status)
        print("###LINE ID=" + str(lidx) + " From=" + str(first_bus) + " To=" + str(last_bus))

    def add_xmlns(self, a_string):
        return "{http://www.iec.ch/61850/2003/SCL}" + a_string

    def get_path(self, conduct):
        # get the path of one power grid component
        temp = conduct["node1"].split("/")[1] + '/' + conduct["bay_name"]
        return temp

    def generate(self):

        for vlevel in self.root.findall('.//' + self.add_xmlns('VoltageLevel')):

            self.voltageLevels[vlevel.get("name")] = {"numPhases": vlevel.get("numPhases"),
                                                      "nomFreq": vlevel.get("nomFreq"),
                                                      "voltage": vlevel.find(self.add_xmlns("Voltage")).text}

            self.conductingEquipment[vlevel.get("name")] = []
            for bay in vlevel.findall('.//' + self.add_xmlns("Bay")):
                bay_name = bay.get("name")
                for conduct in bay.findall('./' + self.add_xmlns("ConductingEquipment")):
                    try:
                        temp = {"type": conduct.get("type"),
                                "node1": conduct.findall("./" + self.add_xmlns("Terminal"))[1].get("connectivityNode"),
                                "node2": conduct.findall("./" + self.add_xmlns("Terminal"))[0].get("connectivityNode"),
                                "bay_name": bay_name}
                    except:
                        temp = {"type": conduct.get("type"),
                                "node1": conduct.findall("./" + self.add_xmlns("Terminal"))[0].get("connectivityNode"),
                                "bay_name": bay_name}
                    self.conductingEquipment[vlevel.get("name")].append(temp)
                    print(temp)

        for bay in self.root.findall('.//' + self.add_xmlns('VoltageLevel/') + self.add_xmlns('Bay')):
            temp = bay.findall(self.add_xmlns("ConnectivityNode"))
            if len(temp) == 1:
                volt = self.voltageLevels[temp[0].get("pathName").split('/')[1]]["voltage"]
                self.node_to_busid[temp[0].get("pathName")] = pp.create_bus(net=self.net, vn_kv=float(volt))

        removed_bus_name = []
        for vlevel in self.conductingEquipment.keys():
            volt = self.voltageLevels[vlevel]["voltage"]
            temp = self.conductingEquipment[vlevel]
            for i in range(len(temp) - 1):
                     if (temp[i]["type"] == "CTR" and temp[i + 1]["type"] == "CBR" and temp[i]["bay_name"] ==
                        temp[i + 1][
                            "bay_name"]) or (
                            temp[i]["type"] == "CBR" and temp[i + 1]["type"] == "CTR" and temp[i]["bay_name"] ==
                            temp[i + 1]["bay_name"]):
                        if temp[i]["node1"] == temp[i + 1]["node1"]:
                            temp_conduct = {'type': "CBR", 'node1': temp[i]["node2"], "node2": temp[i + 1]["node2"],
                                            "bay_name": temp[i + 1]["bay_name"]}
                            removed_bus_name.append(temp[i]["node1"])
                        elif temp[i]["node2"] == temp[i + 1]["node2"]:
                            temp_conduct = {'type': "CBR", 'node1': temp[i]["node1"], "node2": temp[i + 1]["node1"],
                                            "bay_name": temp[i + 1]["bay_name"]}
                            removed_bus_name.append(temp[i]["node2"])
                        elif temp[i]["node2"] == temp[i + 1]["node1"]:
                            temp_conduct = {'type': "CBR", 'node1': temp[i]["node1"], "node2": temp[i + 1]["node2"],
                                            "bay_name": temp[i + 1]["bay_name"]}
                            removed_bus_name.append(temp[i]["node2"])
                        elif temp[i]["node1"] == temp[i + 1]["node2"]:
                            temp_conduct = {'type': "CBR", 'node1': temp[i]["node2"], "node2": temp[i + 1]["node1"],
                                            "bay_name": temp[i + 1]["bay_name"]}
                            removed_bus_name.append(temp[i]["node1"])
                        else:
                            continue
                        temp[i]["type"] = "removed"
                        temp[i + 1] = temp_conduct

            temp_1 = []
            for i in temp:
                if i["type"] != 'removed':
                    temp_1.append(i)
            self.conductingEquipment[vlevel] = temp

        conduct_dict = {"IFL": [], "MOT": [], "GEN": [], "CON": [], "CBR": [], "DER": []}
        for vlevel in self.conductingEquipment.keys():
            volt = self.voltageLevels[vlevel]["voltage"]
            for conduct in self.conductingEquipment[vlevel]:
                if conduct["type"] in ["IFL", 'MOT', 'GEN', 'CON', 'DER']:
                    conduct_dict[conduct["type"]].append(self.get_path(conduct))
                elif conduct["type"] in ["CBR"]:
                    conduct_dict[conduct["type"]].append(conduct["bay_name"])

        for vlevel in self.conductingEquipment.keys():
            volt = self.voltageLevels[vlevel]["voltage"]
            for conduct in self.conductingEquipment[vlevel]:
                temp_bus = 0
                if self.node_to_busid.get(conduct.get("node1")) is not None:
                    temp_bus = self.node_to_busid.get(conduct.get("node1"))
                else:
                    self.node_to_busid[conduct.get("node1")] = pp.create_bus(net=self.net, vn_kv=volt)

                if conduct.get("node2") is not None:  # node2 is present
                    if self.node_to_busid.get(conduct.get("node2")) is None:  # No corresponding bus is created
                        self.node_to_busid[conduct.get("node2")] = pp.create_bus(net=self.net, vn_kv=volt)

                # disconnector
                if conduct["type"] == "DIS":
                    pp.create_switch(net=self.net, bus=self.node_to_busid[conduct["node1"]],
                                     element=self.node_to_busid[conduct["node2"]], et='b', type="DS")

                elif conduct['type'] == "CBR":
                    self.create_line_with_switch_with_status(self.net, first_bus=self.node_to_busid[conduct["node1"]],
                                                             last_bus=self.node_to_busid[conduct["node2"]],
                                                             length_km=0.02, std_type="NA2XS2Y 1x240 RM/25 6/10 kV",
                                                             status=(self.input_dict["CBR"][conduct["bay_name"]][0]))

                # load
                elif conduct["type"] == "IFL":  # feeding line treated as load or OHL / in feeding line
                    temp_bus = pp.create_bus(net=self.net, vn_kv=volt)
                    self.create_custom_line(net=self.net, from_bus=self.node_to_busid[conduct["node1"]],
                                            to_bus=temp_bus,
                                            length_km=self.input_dict[conduct["type"]][self.get_path(conduct)][1],
                                            choice=self.input_dict[conduct["type"]][self.get_path(conduct)][2],
                                            cable_dict=self.input_dict["CABLE"])

                    pp.create_load(net=self.net, bus=temp_bus,
                                   p_mw=self.input_dict[conduct["type"]][self.get_path(conduct)][0])

                # current transformer
                elif conduct["type"] == "CTR":
                    cidx = pp.create_line(net=self.net, from_bus=self.node_to_busid[conduct["node1"]],
                                   to_bus=self.node_to_busid[conduct["node2"]], length_km=0.1, std_type="NAYY 4x150 SE")
                    print("$$$LINE ID=" + str(cidx) + " From=" + str(self.node_to_busid[conduct["node1"]]) + " To=" + str(self.node_to_busid[conduct["node2"]]))

                # motor
                elif conduct["type"] == "MOT":  # load p and Q
                    temp_bus = pp.create_bus(net=self.net, vn_kv=volt)
                    self.create_custom_line(net=self.net, from_bus=self.node_to_busid[conduct["node1"]],
                                            to_bus=temp_bus,
                                            length_km=self.input_dict[conduct["type"]][self.get_path(conduct)][2],
                                            choice=self.input_dict[conduct["type"]][self.get_path(conduct)][3],
                                            cable_dict=self.input_dict["CABLE"])
                    pp.create_load(net=self.net, bus=temp_bus,
                                   p_mw=self.input_dict[conduct["type"]][self.get_path(conduct)][0],
                                   q_mvar=self.input_dict[conduct["type"]][self.get_path(conduct)][1])

                elif conduct["type"] == "CON":
                        temp_bus = pp.create_bus(net=self.net, vn_kv=volt)
                        self.create_custom_line(net=self.net, to_bus=self.node_to_busid[conduct["node1"]],
                                                from_bus=temp_bus,
                                                length_km=self.input_dict[conduct["type"]][self.get_path(conduct)][2],
                                                choice=self.input_dict[conduct["type"]][self.get_path(conduct)][3],
                                                cable_dict=self.input_dict["CABLE"])
                        pp.create_sgen(net=self.net, bus=temp_bus,
                                       p_mw=self.input_dict[conduct["type"]][self.get_path(conduct)][0],
                                       q_mvar=self.input_dict[conduct["type"]][self.get_path(conduct)][1])

        # generator is here
        for vlevel in self.conductingEquipment.keys():
            volt = self.voltageLevels[vlevel]["voltage"]
            count = 0
            for conduct in self.conductingEquipment[vlevel]:
                if conduct["type"] == "GEN":
                    # print(conduct)
                    if count == 0:
                        temp_bus = pp.create_bus(net=self.net, vn_kv=volt)
                        self.create_custom_line(net=self.net, to_bus=self.node_to_busid[conduct["node1"]],
                                                from_bus=temp_bus,
                                                length_km=self.input_dict[conduct["type"]][self.get_path(conduct)][1],
                                                choice=self.input_dict[conduct["type"]][self.get_path(conduct)][2],
                                                cable_dict=self.input_dict["CABLE"])

                        pp.create_gen(net=self.net, bus=temp_bus,
                                      p_mw=self.input_dict[conduct["type"]][self.get_path(conduct)][0], slack=True,
                                      vm_pu=1)

                        count += 1
                    else:
                        temp_bus = pp.create_bus(net=self.net, vn_kv=volt)
                        self.create_custom_line(net=self.net, from_bus=self.node_to_busid[conduct["node1"]],
                                                to_bus=temp_bus,
                                                length_km=self.input_dict[conduct["type"]][self.get_path(conduct)][1],
                                                choice=self.input_dict[conduct["type"]][self.get_path(conduct)][2],
                                                cable_dict=self.input_dict["CABLE"])
                        pp.create_sgen(net=self.net, bus=temp_bus,
                                      p_mw=self.input_dict[conduct["type"]][self.get_path(conduct)][0])


        # transformer
        for trans in self.root.findall('.//' + self.add_xmlns("PowerTransformer")):
            terminals = trans.findall(".//" + self.add_xmlns("Terminal"))
            pp.create_transformer_from_parameters(net=self.net,
                                                  hv_bus=self.node_to_busid[terminals[0].get("connectivityNode")],
                                                  lv_bus=self.node_to_busid[terminals[1].get("connectivityNode")],
                                                  sn_mva=self.input_dict["TRANS"][self.get_path(conduct)][0],
                                                  vn_hv_kv=self.input_dict["TRANS"][self.get_path(conduct)][1],
                                                  vn_lv_kv=self.input_dict["TRANS"][self.get_path(conduct)][2],
                                                  vkr_percent=0.01, vk_percent=0.01, pfe_kw=0, i0_percent=0.01)

        print(self.node_to_busid)

        for bus_name in removed_bus_name:
            self.net.bus.drop(self.node_to_busid[bus_name], inplace=True)
            self.node_to_busid.pop(bus_name, None)

def parse_time_series(extra_config):
    checker = True  # indicate whether we have gone through all the time-series data
    sequence = 1
    result = []
    while checker:
        checker = False
        temp_input_dict = {'IFL': {}, 'MOT': {}, 'GEN': {}, 'DER': {}, 'CON': {}, 'CBR': {}, 'TRANS': {}, 'CABLE': {}}
        for key in extra_config.keys():
            for pos in extra_config[key].keys():
                temp_input_dict[key][pos] = []
                for item in extra_config[key][pos]:
                    if isinstance(item, dict):
                        try:
                            temp_input_dict[key][pos].append(item[sequence])
                            checker = True
                        except:

                            temp_input_dict[key][pos].append(item[1])
                    else:
                        temp_input_dict[key][pos].append(item)
        if not checker:
            break
        sequence += 1
        result.append(temp_input_dict)
    return result


if __name__ == '__main__':
    ssd_path = "EPIC_single_substation.ssd"
    extra_config_path = "extra_config.xml"

    extra_config = ConfigParser(extra_config_path).gen_json()
    extra_config_list = parse_time_series(extra_config)
    net_list = []  # store Pandapower networks

    #generate Pandapower networks
    for i in extra_config_list:
        net_list.append(GenNetwork(ssd_path, i).net)

    # Optional, run Pandapower simulation
        for net in net_list:
         print("NEW SEQUENCE")
         ppplot.simple_plot(net=net, plot_loads=True, plot_line_switches=True)  # show topology
       # ppplot.plotly.simple_plotly(net=net) # draw a graph in browser
         pp.runpp(net=net)
         print(net)
         print(net.line)
         print("******\n", net.res_bus)
         print("******\n", net.res_line)  # power flow

