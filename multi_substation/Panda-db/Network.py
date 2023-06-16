#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#
#  Network.py
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

import json

import pandapower as pp
import random
import time
import copy

import Constants
#from Logger import Logger
from process_ssd_3ss import GenNetwork
from extra_config_parser_3ss import ConfigParser

#logger = Logger()

class LoadDataError(Exception):
    pass

class Network():
    def __init__(self, network_file_name, initial_data):
        self.network_file_name = network_file_name
        self.load_data_dict = {}
        self.PLC_DATA = initial_data
        self.round = 0

        # Whole Power Network
        self.sensors = {} # key: sensor_id,   value: sensor_value
        # Actuator status - closed or open
        self.actuators = []
        self.relays = []
        self.loadings = []
        self.line_load_percent = {}
        #self.frequency_this_round = 0
        #self.frequency_last_round = 0
        self.frequency_this_round = Constants.STANDARD_FREQUENCY
        self.frequency_last_round = Constants.STANDARD_FREQUENCY

        # Assume the generator power is constant, the sum of power depends on the increase on the sum of load
        self.sum_of_power_this_round = 0
        self.sum_of_power_last_round = 0

        # Generators
        self.generators = []
        self.gen_rotation_speed = []

        # Transformer
        # frequency_meter and their values
        self.transformers = []
        self.frequency_meters = []
        self.transformer_temperature = []
        self.transformer_pressure = []
        
       # i_ka
        self.line_current = {}
        # vm_pu
        self.bus_voltage = {}        
        # p_from_mw
        self.real_power = {}
        #q_from_mvar
        self.reactive_power = {}
        # p_to_mw
        self.real_power_to = {}
        #q_to_mvar
        self.reactive_power_to = {}
        
        self.net = pp.create_empty_network()

        # Normal Setting
        self.user_setting = Constants.USER_CONTROL
        # Attacker
        self.attack_setting = Constants.ATTACKER_CONTROL
        #added for ProcessSSD integration
        self.net_list =[]
        #self.set_plc_data_from_plc(self.PLC_DATA)
        self.extra_config_list = []


        #determine if actuator status taken from db or extra_config
        self.actuator_status = []
        self.prev_act_val = []



    def set_round(self, round):
        self.round = round


    # PLC_DATA - PLC DATA to be saved in the net
    # Updates the actuators' status in the net
    def set_plc_data_from_plc_round(self, plc_data, round):

        extra_config = self.extra_config_list[round]

        #Initialization for the first time.
        if len(plc_data["actuator"]) == 0:
            for c in range(len(extra_config["CBR"])):
                plc_data["actuator"].append(0)
        
        elif len(plc_data["actuator"]) < len(extra_config["CBR"]):
            for c in range (len(extra_config["CBR"]) - len(plc_data["actuator"])):
                plc_data["actuator"].append(0)

        # Code below is added to convert extra_config to array.
        # Note that currently actuator status in DB is not used for simulation.
        # actuator status for the simulation comes from extra_config!
        # actuator status in DB is used for IEDs' reporting purpose.
        keys = list(extra_config["CBR"].keys())

        for i in range(len(extra_config["CBR"])):
            plc_data["actuator"][i] = extra_config["CBR"][keys[i]][0]
        self.actuators = plc_data['actuator']
	
    # Get the PLC data that will be sent to the PLC
    # This part is the main attack point of this project
    def get_data_for_plc(self):
        # Normal Data
        # Get sensor list from sensor dict
        sensor_lst = [0] * len(self.sensors.keys())

        for line_id, line_value in self.sensors.items():
            sensor_lst[line_id] = line_value
            
        line_current_lst = [0] * len(self.line_current.keys())
        for line_id, line_value in self.line_current.items():
            line_current_lst[line_id] = line_value

        bus_voltage_lst = [0] * max(self.bus_voltage.keys())
        bus_voltage_lst.append(-1)

        for bus_id, bus_value in self.bus_voltage.items():
            bus_voltage_lst[bus_id] = bus_value

        real_power_lst = [0] * len(self.real_power.keys())
        for mw_id, mw_value in self.real_power.items():
            real_power_lst[mw_id] = mw_value

        reactive_power_lst = [0] * len(self.reactive_power.keys())
        for mvar_id, mvar_value in self.reactive_power.items():
            reactive_power_lst[mvar_id] = mvar_value

        real_power2_lst = [0] * len(self.real_power_to.keys())
        for mw_id, mw_value in self.real_power_to.items():
            real_power2_lst[mw_id] = mw_value

        reactive_power2_lst = [0] * len(self.reactive_power_to.keys())
        for mvar_id, mvar_value in self.reactive_power_to.items():
            reactive_power2_lst[mvar_id] = mvar_value
            
        line_load_percent_lst = [0] * len(self.line_load_percent.keys())

        for line_id, line_value in self.line_load_percent.items():
            line_load_percent_lst[line_id] = line_value

        plc_data_from_this_round = {
            'actuator': self.actuators, 
            'sensor': sensor_lst, 
            'load': self.loadings, 
            'relay': self.relays, 
            'temperature_sensor': self.transformer_temperature, 
            'fm': self.frequency_meters,
            'line_load_percent': line_load_percent_lst,
            'line_current': line_current_lst,
            'bus_voltage' : bus_voltage_lst,
            'real_power' : real_power_lst,
            'reactive_power' : reactive_power_lst,
            'real_power_to' : real_power2_lst,
            'reactive_power_to' : reactive_power2_lst,

            'pressure_sensor': self.transformer_pressure 
        }

        # for attack if it's attack mode
        if Constants.IS_ATTACK_MODE:
            #logger.log("INFO", f"This is the attacker mode...")
            # Data Changed by Attacker if any
            for attack_instance_name, attack_setting_dict in self.attack_setting.items():
                #logger.log("INFO", f"Modifying data for {attack_instance_name} ...")

                if not attack_setting_dict:  # dict is empty
                    continue

                for instance_id, value_queue in attack_setting_dict.items():
                    # pick the first data of the queue
                    attack_value_for_this_round = value_queue.pop(0)
                    
                    #logger.log("INFO", f"--- Modifying data for {instance_id} with value {attack_value_for_this_round}...")

                    # set the plc_data to be the picked data
                    ### plc_data_from_this_round[attack_instance_name][instance_id] = attack_value_for_this_round
                    # enqueue the used data, to the end of the queue
                    ### self.attack_setting[attack_instance_name][instance_id].append(attack_value_for_this_round)

        return plc_data_from_this_round

    def create_network_list(self):
        config_parser = ConfigParser(Constants.EXTRA_CONFIG_PATH)
        extra_config = config_parser.gen_json()
        self.extra_config_list = GenNetwork.parse_time_series(extra_config)
        for extConfig in self.extra_config_list:
            self.net_list.append(GenNetwork(Constants.SSD_PATH, extConfig).net)

        self.num_trafo = len(self.net_list[0]['trafo']);

    # TODO: Initialise the pandapower network
    def create_network(self):
        #logger.log("INFO", f"Creating the Network based on initial data......")

        # +--------------------------
        # | High-Voltage Network: pandapower default 110kv
        # +--------------------------
        high_voltage_bus_list = pp.create_buses(net=self.net,
                                                nr_buses=len(network_topology["high_voltage_bus"]),
                                                index=network_topology["high_voltage_bus"],
                                                vn_kv=110.0)

        for line_id, line_connections in network_topology["high_voltage_line_connection"].items():
            # create line
            std_type = network_topology["high_voltage_line_std_type"]
            if line_id in network_topology["special_line_type"]:
                std_type = network_topology["special_line_type"][line_id]

            line_index = pp.create_line(net = self.net,
                                        from_bus = line_connections[0],
                                        to_bus = line_connections[1],
                                        length_km = line_connections[2],
                                        std_type = std_type,
                                        index = line_id)

            # create switch
            isSwitchClosed = True
            for NO_switch_id in network_topology["NO_switch_lines"]:
                if line_id == NO_switch_id:
                    isSwitchClosed = False
            switch_index = pp.create_switch(net = self.net,
                                            bus = line_connections[0],
                                            element = line_index,
                                            et = "l",
                                            index= line_id,
                                            closed = isSwitchClosed)


        # +--------------------------
        # | Generators
        # +--------------------------
	
        for gen_id, settings in network_topology["generator_setting"].items():
            gen_id = pp.create_gen(net=self.net, bus=settings["bus_id"], index=gen_id, 
                                    p_mw=settings["p_mw"], max_p_mw=settings["max_p_mw"], 
                                    min_p_mw=settings["min_p_mw"], slack=True, in_service=settings["in_service"])
            self.generators.append(gen_id)
            self.gen_rotation_speed.append(Constants.GENERATOR["initial_RPM"])


        # +--------------------------
        # | Low-Voltage Network: pandapower default: 10kv
        # +--------------------------
        low_voltage_bus_list = pp.create_buses(net=self.net,
                                                nr_buses=len(network_topology["low_voltage_bus"]),
                                                index=network_topology["low_voltage_bus"],
                                                vn_kv=10.0)

        # LINES
        for line_id, line_connections in network_topology["low_voltage_line_connection"].items():
            # create line
            std_type = network_topology["low_voltage_line_std_type"]
            if line_id in network_topology["special_line_type"]:
                std_type = network_topology["special_line_type"][line_id]

            line_index = pp.create_line(net = self.net,
                                        from_bus = line_connections[0],
                                        to_bus = line_connections[1],
                                        length_km = line_connections[2],
                                        std_type = std_type,
                                        index = line_id)

            # create switch
            isSwitchClosed = True
            for NO_switch_id in network_topology["NO_switch_lines"]:
                if line_id == NO_switch_id:
                    isSwitchClosed = False
            switch_index = pp.create_switch(net = self.net,
                                            bus = line_connections[0],
                                            element = line_index,
                                            et = "l",
                                            index= line_id,
                                            closed = isSwitchClosed)


        # +--------------------------
        # | Transformer: Connect High-Voltage Network and Low-Voltage Network
        # +--------------------------
        for transformer_id, settings in network_topology["transformer_setting"].items():
            transformer_id = pp.create_transformer(self.net, hv_bus=settings["hv_bus_id"], lv_bus=settings["lv_bus_id"], 
                                                   std_type=network_topology["transformer_std_type"])
            self.transformers.append(transformer_id)
            #print("TRAFO ID: " + str(transformer_id) + "hv=" + str(settings["hv_bus_id"]) + "lv=" + str(lv_bus=settings["lv_bus_id"]))


        # +--------------------------
        # | Loads
        # +--------------------------
        load_list = pp.create_loads(self.net, network_topology["load_bus_mapping"], p_mw=0)
        for load_id in load_list:
            self.loadings.append(0)
        self.sum_of_power_this_round = 0
        self.sum_of_power_last_round = 0

        # Add load data for real-time simulation
        if len(Constants.NETWORK["LOAD_DATA_FILE_LIST"]) != len(load_list):
            raise LoadDataError()

        for i in range(len(load_list)):
            load_id = load_list[i]
            file_name = Constants.NETWORK["LOAD_DATA_FILE_LIST"][i]

            # Get file data from load files
            file_data = []
            with open(file_name, "r") as f:
                file_data = f.readlines()
            load_data_list = []
            for line in file_data:
                this_data = list(map(lambda x: float(x), line.strip().split(", ")))
                load_data_list.append(this_data)
            self.load_data_dict[load_id] = load_data_list

        # +--------------------------
        # | Relays
        # +--------------------------
        for key, value in network_topology["relay_line_mapping"].items():
            self.relays.append(Constants.RELAY_GOOD)

        # +--------------------------
        # | Frequency Meters
        # +--------------------------
        self.frequency_this_round = Constants.STANDARD_FREQUENCY
        self.frequency_last_round = Constants.STANDARD_FREQUENCY
        for bus_id, fm_ids in network_topology["bus_fm_mapping"].items():
            for fm_id in fm_ids:
                self.frequency_meters.append(Constants.STANDARD_FREQUENCY)


        # +--------------------------
        # | Temperature
        # +--------------------------
        #loop condition is changed
        #for _ in network_topology["temp_sensor_transformer_mapping"].keys():
        for i in range(0,self.num_trafo):
            self.transformer_temperature.append(Constants.ROOM_TEMPERATURE)
            self.transformer_pressure.append(Constants.NORMAL_PRESSURE)


        # Write changed data to network.p
        #logger.log("INFO", f"Write Data to network.p")
        self.write_to_file()

    # Checks if it is possible for power to flow from gen to load (check cb)
    # TODO: incomplete for load 2-7
    def has_power_flow(self, load_index):
        switches = self.net.switch["closed"]
        if load_index == 0:
            if switches[2] == False:
                return False
            elif switches[0] == False and switches[1] == False:
                return False
            elif switches[0] == False and switches[16] == False:
                return False
        elif load_index == 1:
            if switches[3] == False:
                return False
            elif switches[0] == False and switches[1] == False:
                return False
            elif switches[0] == False and switches[16] == False:
                return False
        elif load_index == 2:
            return True
        elif load_index == 3:
            return True
        elif load_index == 4:
            return True
        elif load_index == 5:
            return True
        elif load_index == 6:
            return True
        elif load_index == 7:
            return True
        elif load_index == 8:
            if switches[14] == False:
                return False
            elif switches[1] == False and switches[0] == False:
                return False
            elif switches[1] == False and switches[16] == False:
                return False
        elif load_index == 9:
            if switches[15] == False:
                return False
            elif switches[1] == False and switches[0] == False:
                return False
            elif switches[1] == False and switches[16] == False:
                return False
        else:
            return False
        
        return True

    # Update the load for this round, and calculate the sum of power
    def update_load(self, round):
        # Check with loads id needs to be zero
        zero_value_load_ids = []
        for line_id, line_value in self.sensors.items():
            #print(str(line_value))
            # check if load should be zero (check cb)
            # If the cb for load is open, set the load data to zero
            if line_value == 0 and line_id in Constants.NETWORK_TOPOLOGY["linecb_load_mapping"]:  
                    related_load_id = Constants.NETWORK_TOPOLOGY["linecb_load_mapping"][line_id]
                    zero_value_load_ids.append(related_load_id)
                    #print(f"setting load[{related_load_id}] to zero")
            
        for load in range(Constants.NETWORK_TOPOLOGY["num_of_loads"]):
            if not self.has_power_flow(load):
                zero_value_load_ids.append(load)


        self.sum_of_power_last_round = self.sum_of_power_this_round
        self.sum_of_power_this_round = 0  # sum of active power
        for load_id in range(len(self.net.load)):
            active_power = 0
            proactive_power = 0

            if load_id not in zero_value_load_ids:
                load_data_list = self.load_data_dict[load_id]
                data_id = round % len(load_data_list)  # If the data list is not long enough, reuse it
                active_power = load_data_list[data_id][0]   # p
                proactive_power = load_data_list[data_id][1]   # q

            # assignment
            # pandapower - net
            self.net.load["p_mw"][load_id] = active_power
            self.net.load["q_mvar"][load_id] = proactive_power
            # added logic - for frequency calculation
            self.sum_of_power_this_round += active_power
            # to plc
            self.loadings[load_id] = active_power

    # Updates the user settings if any
    # TODO: update user settings
    def update_user_setting(self):
        for instance_name, setting_dict in self.user_setting.items():
            #logger.log("INFO", f"User setting: Modifying data for {instance_name} ...")

            if not setting_dict:  # dict is empty
                continue

            for instance_id, value_queue in setting_dict.items():
                # pick the first data of the queue
                value_for_this_round = value_queue.pop(0)
                
                #logger.log("INFO", f"--- User setting: Modifying data for {instance_id} with value {value_for_this_round}...")

                # modify the pandanet to be the user data
                if instance_name == "actuator":
                    self.actuators[instance_id] = value_for_this_round
                    self.net.switch["closed"][instance_id] = self.actuators[instance_id]        

                # enqueue the used data, to the end of the queue
                self.user_setting[instance_name][instance_id].append(value_for_this_round)

    # Gets the noise based on the noise level, for frequency meters.
    def get_noise(self, noise_level):
        if noise_level < 0:
            noise_level = -1 * noise_level
        return random.uniform( -1 * noise_level, noise_level)


    # Get the real-life frequency reading from the frequency meter.
    def get_frequency(self):
        this_fm_frequency = self.frequency_this_round + self.get_noise(Constants.FM_NOISE_LEVEL)
        return this_fm_frequency    

    # Pandapower built-in calculation
    def panda_run(self):
        try:
            pp.runpp(net=self.net, init="results")
            #pp.runpp(net=self.net)
            #pp.runpp(net=self.net_list[1], init="results")

        except pp.powerflow.LoadflowNotConverged:
            #logger.log("WARN_ERROR", "IMPORTANT: Pandapower Calculation Failed! Simulation ended!")
            print("IMPORTANT: Pandapower Calculation Failed! Simulation ended!")

    # Pandapower built-in calculation
    def panda_run_index(self, index, firstRound):

        #just in case added a coude to repeat the last extra_config indefinitely
        if index >= len(self.extra_config_list):
            index = len(self.extra_config_list) - 1

        try:
            #TODO
            if firstRound == False:
                for i in range(len(self.actuators)):
                    self.net_list[index].switch["closed"][i] = self.actuators[i]

            #pp.runpp(net=self.net_list[index], init="results")
            # changed to enable continuous simulation.
            pp.runpp(net=self.net_list[index],init="flat")
            #pp.runpp(net=self.net)
            #pp.runpp(net=self.net_list[1], init="results")
        except pp.powerflow.LoadflowNotConverged:
            #logger.log("WARN_ERROR", "IMPORTANT: Pandapower Calculation Failed! Simulation ended!")
            print("IMPORTANT: Pandapower Calculation Failed! Simulation ended!")

    # State Monitoring 1
    # Checks the loading percent of lines and output the state to Web UI
    def check_loading_percent(self):

        for i in range(len(self.line_load_percent)):
            loading_percent = self.line_load_percent[i]
            #if loading_percent < Constants.SENSOR["low"]:
                #logger.log("WARN_ERROR", f"Line #{i} Loading  Too Low: {loading_percent}")
            #elif loading_percent >= Constants.SENSOR["overload"]:
                #logger.log("WARN_ERROR", f"Line #{i} Overload: {loading_percent}")
            #elif loading_percent > Constants.SENSOR["high"]:
                #logger.log("WARN_ERROR", f"Line #{i} Too High: {loading_percent}")


    # State Monitoring 2
    # Checks the temperature and output the state to Web UI
    def check_temperature(self):
        for i in range(len(self.transformer_temperature)):
            temp = self.transformer_temperature[i]
            #logger.log("INFO", f"TemperatureSensor {i} is {temp}")
            # logger.log("INFO", f"TemperatureSensor {i} is {temp}")
            #if temp > Constants.TEMPERATURE_SENSOR["high"]:
                #logger.log("WARN_ERROR", f"TemperatureSensor {i} Too High")

    # State Monitoring 3
    # Checks the frequency of the whole system
    def check_frequency(self):
        for i in range(len(self.frequency_meters)):
            fm_value = self.frequency_meters[i]
            #logger.log("INFO", f"Frequency Meter {i} reading is {fm_value}")

            if fm_value < Constants.FREQUENCY_METER["stopped"]:
                continue
            #elif fm_value < Constants.FREQUENCY_METER["too_low"]:
                #logger.log("WARN_ERROR", f"Underfrequency! Frequency Meter {i} Value Too Low: {fm_value}")
            #elif fm_value < Constants.FREQUENCY_METER["low"]:
                #logger.log("WARN", f"Frequency Meter {i} Value Low: {fm_value}")
            #elif fm_value > Constants.FREQUENCY_METER["too_high"]:
                #logger.log("WARN_ERROR", f"OverFrequency! Meter {i} Value Too High: {fm_value}")
            #elif fm_value > Constants.FREQUENCY_METER["high"]:
                #logger.log("WARN", f"Frequency Meter {i} Value High: {fm_value}")

    # State Monitoring 4
    # Checks the state of the generator
    def check_generator(self):
        for i in range(len(self.generators)):

            # Check rotation speed
            this_gen_rotation_speed = self.gen_rotation_speed[i]
            #logger.log("INFO", f"Generator {i} has rotational speed of value {this_gen_rotation_speed}")
           # if this_gen_rotation_speed > 0 and this_gen_rotation_speed < Constants.GENERATOR["rotation_speed_critical_value"]:
                #logger.log("WARN_ERROR", f"Generator {i} Exploded!")
            
            # Check Voltage
            this_gen_voltage = self.net['gen']['vm_pu'][i]
            if this_gen_voltage == 0:
                continue
            #elif this_gen_voltage < Constants.GENERATOR["under_voltage_critical_value"]:
                #logger.log("WARN_ERROR", f"Generator {i} Under Voltage!")
            #elif this_gen_voltage > Constants.GENERATOR["over_voltage_critical_value"]:
                #logger.log("WARN_ERROR", f"Generator {i} Over Voltage!")
    
    # Calculates the power flow for a round.
    # Includes Pandapower logics and added logics.
    def calculate(self, round, first):
        # +--------------------------
        # | PANDAPOWER Logics
        # +--------------------------

        #[TODO] Currently, network.p file is NOT used. This means that modification of this file
        # (e.g., by means of control command) is not reflected to the simulation.
        # I.e., simulation only depends on actuator status, load profile etc. in extra_config!
        # This needs to be fixed in the future.

        # Read network.p
        #logger.log("INFO", f"Read network.p Data")
        #self.read_from_file()
        #self.read_from_file(round)

        ### self.update_load(round) #get load from load_file
        ### self.update_user_setting()

        # Run pandapowr simulation for the round.
        #self.panda_run()
        self.panda_run_index(round, first)
        #self.check_loading_percent()

        # Update sensor based on simulation result
        #for key, value in self.net.res_line["p_from_mw"].items():
        for key, value in self.net_list[round].res_line["p_from_mw"].items():
            #print("key = " + str(key))
            #print("value = " + str(value))
            self.sensors[key] = float(value)


        load_count =0
       # Update line load percentage from simulation result
        for key, value in self.net_list[round].res_line["loading_percent"].items():
        #for key, value in self.net.res_line["loading_percent"].items():
            if str(value) == "nan":
                value = 0
            self.line_load_percent[key] = float(value)
            #print(f"key is [{key}], line_load_percent is [{value}]")
            load_count += 1

        #added tentatively for initialization of array
        self.loadings = []
        for i in range(load_count):
            self.loadings.append(0)

        # Update load based on pandapower
        #for load_id, value in self.net.res_load["p_mw"].items():
        for load_id, value in self.net_list[round].res_load["p_mw"].items():
            #print(self.net_list[round].res_load["p_mw"])
            #print("load_id:" + str(load_id))
            #print("value:" + str(value))
            self.loadings[load_id] = value

        # Update line i_ka based on pandapower
        for key, value in self.net_list[round].res_line["i_ka"].items():
            if str(value) == "nan":
                value = 0
            self.line_current[key] = float(value)

        # Update bus vm_pu
        for key, value in self.net_list[round].res_bus["vm_pu"].items():
            if str(value) == "nan":
                value = 0
            self.bus_voltage[key] = float(value)

        # Update MW
        for key, value in self.net_list[round].res_line["p_from_mw"].items():
            if str(value) == "nan":
                value = 0
            self.real_power[key] = float(value)

        # Update MVAR
        for key, value in self.net_list[round].res_line["q_from_mvar"].items():
            if str(value) == "nan":
                value = 0
            self.reactive_power[key] = float(value)

        # Update MW(to)
        for key, value in self.net_list[round].res_line["p_to_mw"].items():
            if str(value) == "nan":
                value = 0
            self.real_power_to[key] = float(value)

        # Update MVAR(to)
        for key, value in self.net_list[round].res_line["q_to_mvar"].items():
            if str(value) == "nan":
                value = 0
            self.reactive_power_to[key] = float(value)

        # Write changed data to network.p
        # [TODO] network.p file is not used in a meaningful way currently. Tentatively commented out but this is to be changed.
        #logger.log("INFO", f"Write Data to network.p")
        #self.write_to_file()

        # +--------------------------
        # | ADDED Logics
        # +--------------------------

        self.relays = []
        for i in range(len(Constants.NETWORK_TOPOLOGY["relay_line_mapping"].items())):
            self.relays.append(Constants.RELAY_GOOD)

        # Update Relay (checking the line load percent value against threshold and then update relay status)
        # [todo] in the future, this relay related logic should be implemented on IED side, as one of protection function.
        for relay_id, line_id in Constants.NETWORK_TOPOLOGY["relay_line_mapping"].items():
            if self.line_load_percent[line_id] > Constants.SENSOR["overload"] or str(self.line_load_percent[line_id]) == "nan":
                self.relays[relay_id] = Constants.RELAY_BAD
                # Check Relay
                #logger.log("WARN", f"Sensor {line_id} > 100, Relay {relay_id} is Bad")
            elif self.relays[relay_id] == Constants.RELAY_BAD:
                continue
            else:
                self.relays[relay_id] = Constants.RELAY_GOOD

            #if self.line_load_percent[line_id] > Constants.SENSOR["overload"] or str(self.line_load_percent[line_id]) == "nan":
            #TODO: is it correct? if line < 100 and line_cb is closed, then automatically make it good
            # else:
            #     self.relays[relay_id] = Constants.RELAY_GOOD

        self.transformer_temperature = []
        self.transformer_pressure = []

        for i in range(0,self.num_trafo):
            self.transformer_temperature.append(Constants.ROOM_TEMPERATURE)
            self.transformer_pressure.append(Constants.NORMAL_PRESSURE)

        # Update transformer temperature
        # [TODO] not tested becuse EPIC model does not have transformer.
        for i in range(len(self.transformer_temperature)):
            ppnet = self.net_list[round]
            if len(ppnet["trafo"]) >= len(self.transformer_temperature):
                transformer_loading_percent = ppnet["trafo"]["i0_percent"][i]

                # linear relationship
                self.transformer_temperature[i] = Constants.ROOM_TEMPERATURE + \
                                            transformer_loading_percent * Constants.TEMPERATURE_RAISE_GRADIENT + \
                                            self.get_noise(Constants.TEMPERATURE_NOISE_LEVEL)
#        this seems to be for logging so commened out for now.
#        self.check_temperature()

        self.frequency_meters = []
        for i in range(len(Constants.NETWORK_TOPOLOGY["fm_relay_mapping"].items())):
            self.frequency_meters.append(Constants.STANDARD_FREQUENCY + self.get_noise(0.01))

        #Calculate sum of loads for previous and current, but for now after the second round. [TODO]
        self.sum_of_power_last_round = 0
        self.sum_of_power_this_round = 0

        if round > 1:
            prev_round = round -1
            if prev_round >= len(self.extra_config_list):
                prev_round = len(self.extra_config_list) -1

            prev_net = self.net_list[prev_round]
            current_net = self.net_list[round]
            

            for load_id in range(len(prev_net.load)):
                active_power = 0
                active_power = active_power + prev_net.load["p_mw"][load_id]

                # added logic - for frequency calculation
                self.sum_of_power_last_round += active_power

            for load_id in range(len(current_net.load)):
                active_power = 0

                # added logic - for frequency calculation
                self.sum_of_power_this_round += active_power
                active_power = active_power + current_net.load["p_mw"][load_id]

            delta_p = self.sum_of_power_this_round - self.sum_of_power_last_round
            self.frequency_last_round = self.frequency_this_round
            self.frequency_this_round = self.frequency_last_round + (Constants.GENERATOR["k"] / Constants.GENERATOR["max_p"]) * delta_p

            for i in range(len(Constants.NETWORK_TOPOLOGY["fm_relay_mapping"].items())):
                self.frequency_meters[i] = self.frequency_this_round + self.get_noise(0.01)

        #        # Calculate overall frequency
#        if self.sum_of_power_last_round > 0 and self.sum_of_power_this_round > 0: # ignore first two rounds, when sum_of_power not ready
#            delta_p = self.sum_of_power_this_round - self.sum_of_power_last_round
#            self.frequency_last_round = self.frequency_this_round
#            self.frequency_this_round = self.frequency_last_round + (Constants.GENERATOR["k"] / Constants.GENERATOR["max_p"]) * delta_p
        
        # Update frequency meters
#        for i in range(len(self.frequency_meters)):
#            related_relay_id = Constants.NETWORK_TOPOLOGY["fm_relay_mapping"][i]
#            if self.relays[related_relay_id] == Constants.RELAY_BAD:
#                self.frequency_meters[i] = 0
#            else:
#                self.frequency_meters[i] = self.get_frequency()
#            logger.log("INFO", f"Frequency FM{i}: {self.frequency_meters[i]}")
        
#        self.check_frequency()

        # [todo] currently no gen is used for demo. so tentatively commented out.
        # Calculate generator rotation speed
        # Based on formula:  frequency = RPM * num_of_poles / 120, we can get RPM = 120 * frequency / num_of_poles
        # https://electronics.stackexchange.com/questions/109378/generator-speed-and-power-output-frequency
        #this_rpm = 120 * self.frequency_this_round / Constants.GENERATOR["num_of_poles"]
        #self.gen_rotation_speed = [this_rpm for _ in range(0, len(self.gen_rotation_speed))]

        # TODO: generator voltage calculation - need more research and discussion

        #self.check_generator()

    # Write the power status to the file
    def write_to_file_list(self):
        count = 0
        for i in self.net_list:
            count += 1
            pp.to_json(
                net      = i,
                filename = Constants.NETWORK_TMP_PATH + "." + str(count)
            )

    def read_from_file(self, round):

        pp.from_json(
            filename = Constants.NETWORK_TMP_PATH + "." + str(round +1)
        )
        #print("############ CASE FILE READ ############")

    def print(self):
        print(self.net.res_line)
        # print(self.net.res_line)

    def print_net(self, round):
        net_result = {
            "bus": self.net_list[round].res_bus,
            "line": self.net_list[round].res_line,
            "switch": self.net_list[round].switch,
            "generator": self.net_list[round].gen,
            "load": self.net_list[round].load,
            "trafo": self.net_list[round].trafo #,
            # "net": self.net_list[round] #commented out
        }
        print(net_result)
        return net_result

    def set_act_result(self, results):
        self.prev_act_val = copy.deepcopy(results)
        if len(self.actuator_status) == 0:
            for i in range(len(self.prev_act_val)):
                self.actuator_status.append(0)

    # Checks if actuator status is different from prev round.
    # If different, it means control command was issued and
    # actuator should take its value from DB instead of 
    # extra_config for subsequent rounds
    def update_from_db_for_round(self, db_act, round):
        prev_act = self.prev_act_val
        act_status = self.actuator_status
        print("################# prev ###############")
        print(prev_act)
        print("################# act_status ###############")
        print(act_status)
       
        if (len(prev_act) != len(db_act)) or (len(act_status) != len(db_act)):
            print("ERROR, Fail to compare prev and db actuator values")

        for i in range(len(act_status)):
            if (db_act[i] != prev_act[i]): #control command issued
                act_status[i] = 1
            if (act_status[i] == 1): #take act value from DB
                self.net_list[round].switch["closed"][i] = bool(db_act[i])
                self.actuators[i] = db_act[i]
        print("################# actuators ###############")
        print(self.actuators)

# Test network
if __name__ == '__main__':
    #print("======================== Start. =====================")
    network = Network(
        Constants.NETWORK["FILE_PATH"],
        Constants.INITIAL_DATA
    )
    #print("======================== Network initialized. =====================")

    #network.create_network()
    network.create_network_list()
    #print("======================== Network List initialized. =====================")
    round = 0
    #while True:
    #    print("========================Round " + str(round) + "=====================")
    network.calculate(1)
    #print("======================== Simulation done =====================")

    #    network.print_net()
    #    time.sleep(3)
    #    round += 1
