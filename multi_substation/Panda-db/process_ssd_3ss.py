#
#  process_ssd_3ss.py
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

import pandapower as pp
import xml.etree.ElementTree as ET
import pandapower.plotting as ppplot
import pandas as pd
from extra_config_parser_3ss import ConfigParser

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

    def create_line_with_switch(self, net, first_bus, last_bus, length_km, std_type):
        lidx = pp.create_line(net, first_bus, last_bus, std_type=std_type, length_km=length_km)
        sw = pp.create_switch(net, bus=first_bus, element=lidx, et="l")

    def create_line_with_switch_with_status(self, net, first_bus, last_bus, length_km, std_type, status):
        lidx = pp.create_line(net, first_bus, last_bus, std_type=std_type, length_km=length_km)
        sw = pp.create_switch(net, bus=first_bus, element=lidx, et="l", closed=status)

    def add_xmlns(self, a_string):
        return "{http://www.iec.ch/61850/2003/SCL}" + a_string

    def get_path(self, conduct):
        # get the path of one power grid component
        temp = conduct["node1"].split("/")[1] + '/' + conduct["bay_name"]
        return temp

    def generate(self):
        for sub in self.root.findall(('.//' + self.add_xmlns('Substation'))):
            # generate the network
            for vlevel in sub.findall('.//' + self.add_xmlns('VoltageLevel')):
                # distinguish different voltage levels
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

            for bay in sub.findall('.//' + self.add_xmlns('VoltageLevel/') + self.add_xmlns('Bay')):
                temp = bay.findall(self.add_xmlns("ConnectivityNode"))
                if len(temp) == 1:
                    volt = self.voltageLevels[temp[0].get("pathName").split('/')[1]]["voltage"]
                    self.node_to_busid[temp[0].get("pathName")] = pp.create_bus(net=self.net, vn_kv=float(volt))

            removed_bus_name = []
            for vlevel in self.conductingEquipment.keys():
                volt = self.voltageLevels[vlevel]["voltage"]
                temp = self.conductingEquipment[vlevel]
                for i in range(len(temp) - 1):
                    if (temp[i]["type"] == "CTR" and temp[i + 1]["type"] == "CBR" and temp[i]["bay_name"] == temp[i + 1][
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
                self.conductingEquipment[vlevel] = temp

            for vlevel in self.conductingEquipment.keys():
                volt = self.voltageLevels[vlevel]["voltage"]
                for conduct in self.conductingEquipment[vlevel]:  # iterate power grid components
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
                    elif conduct["type"] == "IFL":
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
                        pp.create_line(net=self.net, from_bus=self.node_to_busid[conduct["node1"]],
                                       to_bus=self.node_to_busid[conduct["node2"]], length_km=0.1, std_type="NAYY 4x150 SE")

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

            # generator
            for vlevel in self.conductingEquipment.keys():
                volt = self.voltageLevels[vlevel]["voltage"]
                count = 0  # indicate if it is the first generator
                # at least one generator with slack=true
                # the first generator should be a slack generator,
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

                            pp.create_ext_grid(net=self.net, bus=temp_bus,
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
            for trans in sub.findall('.//' + self.add_xmlns("PowerTransformer")):
                terminals = trans.findall(".//" + self.add_xmlns("Terminal"))
                pp.create_transformer_from_parameters(net=self.net, hv_bus=self.node_to_busid[terminals[0].get("connectivityNode")],
                                            lv_bus=self.node_to_busid[terminals[1].get("connectivityNode")],
                                            sn_mva= self.input_dict["TRANS"][self.get_path(conduct)][0],
                                            vn_hv_kv=self.input_dict["TRANS"][self.get_path(conduct)][1],
                                            vn_lv_kv=self.input_dict["TRANS"][self.get_path(conduct)][2],
                                            vkr_percent=0.01, vk_percent=0.01, pfe_kw=0, i0_percent=0.01)


            for bus_name in removed_bus_name:
                self.net.bus.drop(self.node_to_busid[bus_name], inplace=True)
                self.node_to_busid.pop(bus_name, None)

    def parse_time_series(extra_config_3ss):
        checker = True
        sequence = 1
        result = []
        while checker:
            checker = False
            temp_input_dict = {'IFL': {}, 'MOT': {}, 'GEN': {}, 'DER': {}, 'CON': {}, 'CBR': {}, 'TRANS': {}, 'CABLE': {}}
            for key in extra_config_3ss.keys():
                for pos in extra_config_3ss[key].keys():
                    temp_input_dict[key][pos] = []
                    for item in extra_config_3ss[key][pos]:
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
    # Full printout
    pd.set_option('display.max_columns', None)
    pd.set_option('display.max_rows', None)
 
    ssd_path = "ADSC_3SS.ssd"
    extra_config_path = "extra_config_3ss.xml"

    extra_config = ConfigParser(extra_config_path).gen_json()
    extra_config_list = GenNetwork.parse_time_series(extra_config)
    net_list = []

    #generate Pandapower networks
    for i in extra_config_list:
        net_list.append(GenNetwork(ssd_path, i).net)

    for net in net_list:
        print("NEW SEQUENCE")
        ppplot.simple_plot(net=net, plot_loads=True, plot_line_switches=True)
        pp.runpp(net=net)
        print(net)
        print(net.line)
        print("******\n", net.res_bus)
        print("******\n", net.res_line)

