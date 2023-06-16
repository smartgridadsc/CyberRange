#!/usr/bin/env python
# encoding: utf-8
# Global Settings

#
#  Constants.py
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

# +--------------------------
# | Attackers' Control
# +--------------------------
# | The attackers' control is after the normal control.
# | key - attack_instance_name
# | value - attack_setting_dict 
# |             - key: instance_id
# |             - value: array, the attack_payload
# | 
# +--------------------------
IS_ATTACK_MODE = False
ATTACKER_CONTROL = {
    'relay': {},  
    'actuator': {}, 
    'sensor': {}, 
    'load': {}, 
    'line_load_percent': {},
    'temperature_sensor': {  
        # Overheat attack
        # Control temperature sensor: 40, 42, 44, 46, ... 98, 100
        0: [i for i in range(40, 100, 2)],
    }, 
    'fm': {},
}


# +--------------------------
# | PLC Settings
# +--------------------------
# | timeout: timeout for connection (second)
# | io_wait: the time to wait between plc_read and plc_write, used if necessary
# | key: the name of PLC
# |     value["address"] = the IP of the PLC vm
# |     value["port"]    = the port of the PLC to connect
# +--------------------------
PLC = {
    "timeout": 1,
    "io_wait": 0.1, 
    "plc1": { "address": "192.168.10.11", "port": 502 },
    "plc2": { "address": "192.168.10.12", "port": 502 },
}

# +--------------------------
# | PLC address offset
# +--------------------------
# | the real address = starting address of this data type + (no. of byte) * (variable_id)
# | coil: the offset of Coil Datatype - starting address in OpenPLC Editor: %QX00.x, e.g., <for %QX00.1, the real address is 0 + 1>
# | int: the offset of Int Datatype %MWx - starting address in OpenPLC Editor: %MW0, e.g., <for %MW3, the real address is 1024 + 3>
# | real: the offset of real Datatype %MDx - starting address in OpenPLC Editor: %MD0, e.g., <for %MD5, the real address is 2048 + 5 * 2> 
# |       (real data, occupy 2 byte in the address)
# +--------------------------
address_padding = {
    "coil": 0,
    "int" : 1024,
    "real": 2048,
}

# +--------------------------
# | PLC point settings
# +--------------------------
# | Key: the name of variables saved in PLC
# |     Value["type"]: data type: coil(boolean) or real
# |     Value["padding"]: padding relative to the starting address of this data type, like %QX00.100 for relay, the padding is 100
# |     Value["length"]: number of data values in this array, e.g, %MD300 - %MD303 is for fm values, then padding is 300, and the length is 4 
# +--------------------------
# The old one
# POINT_SETTING = {
#     "fuse_failure_status": { "type": "coil", "padding": 0,   "length" : 30 },
#     "line_cb_status"     : { "type": "coil", "padding": 100, "length" : 30 },
#     "special_cb_status"  : { "type": "coil", "padding": 200, "length" : 2 },
#     "relay"              : { "type": "coil", "padding": 300, "length" : 4 },
#     "load_cb_status"     : { "type": "coil", "padding": 400, "length" : 10 },
#     "gen_cb_status"      : { "type": "coil", "padding": 450, "length" : 4 },
#     "p"                  : { "type": "coil", "padding": 4,   "length" : 3 },
#     "p_status"           : { "type": "coil", "padding": 14,  "length" : 3 },

#     "line_loading_status": { "type": "real", "padding": 0,   "length" : 30 },
#     "load_p"             : { "type": "real", "padding": 100, "length" : 10 },
#     "transformer_temp"   : { "type": "real", "padding": 200, "length" : 2 },
#     "gen_temp"           : { "type": "real", "padding": 300, "length" : 4 },
#     "gen_fm"             : { "type": "real", "padding": 310, "length" : 4 },
#     "fm"                 : { "type": "real", "padding": 0,   "length" : 4 },
# }

# The new one
POINT_SETTING = {
    "line_loading": {"type": "real", "padding": 0, "length": 18},
    "load": {"type": "real", "padding": 100, "length": 10},
    "transformer_temp": {"type": "real", "padding": 200, "length": 2},
    "line_cb": {"type": "coil", "padding": 0, "length": 18},
    "relay": {"type": "coil", "padding": 100, "length": 4},
    "fm": {"type": "real", "padding": 300, "length": 4},
    "line_load_percent": {"type": "real", "padding": 400, "length": 18}
}

# +--------------------------
# | PLC DATA For Initialization
# +--------------------------
INITIAL_DATA = {
            'actuator': [True, True, True, True, True, True, True, True, True, True, True, True, True, True, True, True, False, True], 
            'sensor': [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0], 
            'load': [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0], 
            'relay': [True, True, True, True], 
            'temperature_sensor': [25.0, 25.0], 
            'fm': [50.0, 50.0, 50.0, 50.0],
            'line_load_percent': [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
        }


# +--------------------------
# | Data Point config for Transmitter
# +--------------------------
# | name: any description you like to give to the data point in the log / Web UI
# | index: the key of PLC_DATA to store the values that will be sent to the address mapped by the 'point' value in the PLC.
# |         the value needs to be same as the INITIAL_DATA's keys above.
# | point: the point value needs to map the key of the POINT_SETTING above. 
# +--------------------------

DATAPOINT_CONFIG = [
            { "name": "Actuator",          "index": "actuator",           "point": "line_cb" },
            { "name": "Sensor",            "index": "sensor",             "point": "line_loading" },
            { "name": "Load",              "index": "load",               "point": "loads" },
            { "name": "Relay",             "index": "relay",              "point": "relay" },
            { "name": "TemperatureSensor", "index": "temperature_sensor", "point": "transformer_temp" },
            { "name": "Frequency Meter",   "index": "fm",                 "point": "fm" },
            { "name": "LineLoadPercent",   "index": "line_load_percent",  "point": "line_load_percent" },
            { "name": "LineCurrent",       "index": "line_current",       "point": "line_current"},
            { "name": "BusVoltage",        "index": "bus_voltage",        "point": "bus_voltage"},
            { "name": "RealPower",         "index": "real_power",         "point": "line_real_power"},
            { "name": "ReactivePower2",     "index": "reactive_power_to", "point": "line_reactive_power2"},
            { "name": "RealPower2",         "index": "real_power_to",     "point": "line_real_power2"},
            { "name": "ReactivePower",     "index": "reactive_power",     "point": "line_reactive_power"},

            { "name": "PressureSensor",    "index": "pressure_sensor",    "point": "transformer_pressure"}

        ]



# +--------------------------
# | Network Simulator Setting
# +--------------------------
# | FILE_PATH: pandapower config file location
# | LOAD_DATA_FILE_LIST: Load Data File Location, position is mapped to load_id
# | LOOP_TIME_INTERVAL: the time-interval to sleep in seconds
# +--------------------------

NETWORK = {
    "FILE_PATH": "./network.p",
    "LOAD_DATA_FILE_LIST": [
        "load_data/input_00.txt",
        "load_data/input_01.txt",
        "load_data/input_02.txt",
        "load_data/input_03.txt",
        "load_data/input_04.txt",
        "load_data/input_05.txt",
        "load_data/input_06.txt",
        "load_data/input_07.txt",
        "load_data/input_08.txt",
        "load_data/input_09.txt",
    ],
    "LOOP_TIME_INTERVAL" : 1,
}

# +--------------------------
# | Log Settings
# +--------------------------
# | level: log level, DEBUG | INFO | WARN | ERROR
# | base_path: path to log folder
# | attack_path: logs for attack script
# | sensor_path: logs for sensor data
# | info_path: log for normal information, displaying on the left-hand side of WebUI
# | warn_path: log for warning signs, displaying on the right-hand side of WebUI
# +--------------------------
LOG = {
    "level"      : "DEBUG",
    "base_path"  : "Logs/",
    "attack_path": "attack_script/",
    "sensor_path": "Logs/sensor/",
    "info_path"  : "Logs/info.log",
    "warn_path"  : "Logs/warn.log",
    # "init_path"  : "Logs/init.log",
}


# +--------------------------
# | Sensor Warning Settings
# +--------------------------
# | default: default value
# | low: too low
# | high: too high
# | overload: overloaded
# +--------------------------
SENSOR = {
    "default" : 0,
    "low"     : 10,
    "high"    : 90,
    "overload": 100,
}


# +--------------------------
# | TemperatureSensor Warnings
# +--------------------------
# | high: too high
# +--------------------------
TEMPERATURE_SENSOR = {
    "high": 50
}


# +--------------------------
# | FrequencyMeter Warnings
# +--------------------------
FREQUENCY_METER = {
    "stopped": 1,
    "too_low": 49.5,
    "low": 49.9,
    "high": 50.1,
    "too_high": 50.5
}


# +--------------------------
# | Generator Settings
# +--------------------------
# | f: normal frequency, 50HZ
# | k: the dropping frequency value when the generator's power goes from 0 to 100%, set it as 2hz
# | max_p: the max power of the generator, unit: KW
# | num_of_poles: The number of poles (magnetic poles) 
# | initial RPM: The inital rotation speed, Unit - RPM
# | rotation_speed_critical_value: 
# |     Unit - RPM : round per minute, suppose below this value, the generator will explode
# +--------------------------
GENERATOR = {
    "f"    : 50,
    "k"    : 2,
    "max_p": 2500,
    "num_of_poles": 2,
    "initial_RPM": 3000,
    "rotation_speed_critical_value": 1500,
    "under_voltage_critical_value": 0.5,   # kV
    "over_voltage_critical_value": 1.5     # kV
}


# +--------------------------
# | PANDAPOWER NETWORK INFRASTRUCTURE
# +--------------------------
# | num_of_bus
# | num_of_lines
# | num_of_generators
# | num_of_loads
# | num_of_transformer
# | num_of_relays
# | high_voltage_bus
# | low_voltage_bus
# | high_voltage_line_connection
# | low_voltage_line_connection
# | NO_switch_lines
# | generators
# | relay_line_mapping
# | bus_fm_mapping
# | temp_sensor_transformer_mapping
# +--------------------------
NETWORK_TOPOLOGY = {
    "num_of_bus": 20,
    "num_of_lines": 18,
    "num_of_generators": 2,
    "num_of_loads": 10,
    "num_of_transformers": 2,
    "num_of_relays": 4,
    "high_voltage_bus": [0, 1, 2, 3, 4, 5, 6, 7, 8, 9],
    "low_voltage_bus": [10, 11, 12, 13, 14, 15, 16, 17, 18, 19],
    "high_voltage_line_std_type": "N2XS(FL)2Y 1x300 RM/35 64/110 kV",
    "low_voltage_line_std_type": "NA2XS2Y 1x240 RM/25 6/10 kV",
    "special_line_type": {  # if not use this type, the lines will overload easily
        5: "679-AL1/86-ST1A 380.0",
        13: "679-AL1/86-ST1A 380.0",
        17: "679-AL1/86-ST1A 380.0"
    },
    "transformer_std_type": "40 MVA 110/10 kV",
    "high_voltage_line_connection": {
        0: (0, 2, 0.3),
        1: (1, 6, 0.2),
        2: (2, 3, 0.1),
        3: (2, 4, 0.2),
        14: (6, 8, 0.3),
        15: (6, 7, 0.2),
        4: (2, 5, 0.1),
        12: (6, 9, 0.2),
        16: (2, 6, 0.3)
    },
    "low_voltage_line_connection": {
        5: (10, 11, 0.2),
        6: (11, 12, 0.2),
        7: (11, 13, 0.2),
        8: (11, 14, 0.2),
        9: (16, 19, 0.2),
        10: (16, 18, 0.2),
        11: (16, 17, 0.2),
        13: (15, 16, 0.2),
        17: (11, 16, 0.2)
    },
    "NO_switch_lines": [16],  # line_id which has Normally-Open switch, by default all switches are NC(Normally Closed)
    "generator_setting": { # key: gen_id
        0: {"bus_id": 0, "p_mw": 1500, "max_p_mw": 3000, "min_p_mw": 0, "in_service": True},
        1: {"bus_id": 1, "p_mw": 1500, "max_p_mw": 3000, "min_p_mw": 0, "in_service": True},
    },
    "transformer_setting": { # key: transformer_id
        0: {"hv_bus_id": 5, "lv_bus_id": 10},
        1: {"hv_bus_id": 9, "lv_bus_id": 15}
    },
    # RELAY_LINE_MAPPING in the network, each relay is monitoring one line.
    "relay_line_mapping": {  # key: relay_id, value: line_id
        0: 0,
        1: 1,
        2: 5,
    #    3: 13
        3: 9
    },
    # bus and frequency meter(fm) mapping, each bus can be attached to more than one frequency meters(for fault tolerance)
    "bus_fm_mapping": { # key: bus_id, value: fm_ids
        11: [0, 1],
        16: [2, 3]
    },
    # temperature sensor and transformer mapping, each transformer can be attached to more than one temperature sensor(for fault tolerance)
    # the number of transformer should be obtained from model, instead of being hardcoded. TODO
    "temp_sensor_transformer_mapping": { # key: temp_sensor_id  # value: transformer_id   
        0: 0
        #1: 1
    },
    # arr_index: load_id, value: bus_id
    "load_bus_mapping": [3, 4, 12, 13, 14, 19, 18, 17, 8, 7],
    # dictionary: key: line_id, the line with the cb that control the load reading, value: load_id
    "linecb_load_mapping": {
        2: 0,
        3: 1,
        6: 2,
        7: 3,
        8: 4,
        9: 5,
        10: 6,
        11: 7,
        14: 8,
        15: 9,
    },

    # if the relay status is bad, the fm shows 0
    # mapping between relay and frequency meter
    #   - key: fm_id
    #   - values: relay_id
    "fm_relay_mapping": {
        0: 2,
        1: 2,
        2: 3,
        3: 3,
    },
    # mapping between temperature sensor and line_status
    #   - key: temp_sensor_id
    #   - values: temp_reading
    # "temp_sensor_line_mapping": {}
}

# +--------------------------
# | Datapoint - PLC Mapping
# +--------------------------
PLC_DATAPOINT_MAPPING = {
    'plc1': {
        'actuator': [0, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15, 16, 17],
        'sensor': [0, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15, 16, 17],
        'load': [0, 1, 2, 3, 4, 5, 6, 7, 8, 9],
        'relay': [0, 1, 2, 3],
        'temperature_sensor':  [0, 1],
        'fm': [],
        'line_load_percent': [0, 1, 2, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15, 16, 17]
    },
    'plc2': {
        'actuator': [7, 8, 9],
        'sensor': [7, 8, 9],
        'load': [],
        'relay': [],
        'temperature_sensor':  [],
        'fm': [0, 1, 2, 3],
        'line_load_percent': [7, 8, 9]
    }
}


# +--------------------------
# | Normal Control: Experiment Base Condition
# +--------------------------
# | Assume the testers can only control the relay, actuator and load.
# | key - instance_name_to_control
# | value - setting_dict 
# |          - key: instance_id
# |          - value: array, the attack_payload
# | 
# +--------------------------
lst = [False] * 30
lst[0] = True
lst[1] = True

USER_CONTROL = {
    'relay': {},
    'actuator': {
 #       0: lst
    }, 
    'load': {}
}

# +--------------------------
# | Other Settings
# +--------------------------
RELAY_BAD = False
RELAY_GOOD = True
ROOM_TEMPERATURE = 30
TEMPERATURE_COOLDOWN_RATE = 1  # °C
TEMPERATURE_RAISE_GRADIENT = 200
TEMPERATURE_NOISE_LEVEL = 1 # °C

STANDARD_FREQUENCY = 50
FM_NOISE_LEVEL = 0.01

TRANSMITTER_FAULT_TOLERANCE_TIMES = 10
NORMAL_PRESSURE = 47

# +--------------------------
# | Settings added for Generation of network from SSD (April 14, 2021)
# +--------------------------
SSD_PATH = "ADSC_3SS.ssd"
EXTRA_CONFIG_PATH = "extra_config_3ss.xml"



