#!/usr/bin/env python3
# coding: utf-8

#
#  Simulator.py
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

import time
import copy
#import random
#import json
#import logging

#from pandapower.plotting.plotly import simple_plotly as plot
#import pandapower as pp

import pandas as pd

import Constants
from Network import Network
from DBTransmitter import DBTransmitter
from Logger import Logger

# Logging
logger = Logger()

class Simulator():
    def __init__(self, initial_data):
        #print("####### printing initial_data #########")
        #print(initial_data)

        self.network = Network(
            Constants.NETWORK["FILE_PATH"],
            initial_data
        )
        #self.network.create_network()
        self.network.create_network_list()

        #self.sensor = Transmitter()
        self.sensor = DBTransmitter()


    def simulate(self, round_count, first):

        # +--------------------------
        # | 1. Preparation
        # +--------------------------
        logger.log("INFO", f"------ Round {round_count} Start ------")

        # Clean the log last time
        logger.clean_log()
        logger.log("INFO", f"Clean pre_round Log Finish!")

        start_time = time.time()

        #the number of simulation rounds are determined based on the length of extra_config time series.
        #for the sake of convenience, after the all time-sreis data are used,
        # the last is repeated indefinitely until the simulation is manually stopped.
        if round_count >= len(self.network.extra_config_list):
            round_count = len(self.network.extra_config_list) -1

        # +--------------------------
        # | 2. Read data from PLC
        # +--------------------------
        #print(f"**************NET BEFORE ROUND {round_count}**************")
        logger.log("INFO", f"Reading PLC Data...")
        data_to_read_config = [
            { "name": "Actuator", "index": "actuator", "point": "line_cb" }
        ]
        #PLC_DATA, READ_STATUS = self.sensor.read_plc_data(data_to_read_config)
        #read data of previous round from DB.
        PLC_DATA, READ_STATUS = self.sensor.read_db_data(data_to_read_config)
        logger.log("INFO", f"Update Actuator")

        #update from db to cb in network
        db_act_data = copy.deepcopy(PLC_DATA['actuator'])

        #set the data from DB to Network class.
        self.network.set_plc_data_from_plc_round(PLC_DATA, round_count)
        #self.network.set_plc_data_from_plc(PLC_DATA)
        #print(f"**************BEFORE ROUND {round_count}**************")

        #update from db to cb in network
        #print(round_count)
#        if round_count != 0:
        if first == False:
            self.network.update_from_db_for_round(db_act_data, round_count)   

        # +--------------------------
        # | 3. Run the network
        # +--------------------------
        logger.log("INFO", f"Run Simulation")
        self.network.calculate(round_count, first)

        # Print and check
        #print(f"**************NET AFTER ROUND {round_count}**************")
        #net_data = self.network.print_net()
        net_data = self.network.print_net(round_count)
        #for k, v in net_data.items():
            #print(f"*** {k} ***")
            #print(v)
        #print(f"**************END OF ROUND {round_count}**************")

        # +--------------------------
        # | 4. Send Data to PLC
        # +--------------------------
        PLC_DATA = self.network.get_data_for_plc()

        # send all data to PLC
        logger.log("INFO", f"Sending Data to PLC...")
        #print("################# PLC_DATA to DB ###############")
        #print(PLC_DATA)
        #self.sensor.write_plc_data(Constants.DATAPOINT_CONFIG, PLC_DATA)
        self.sensor.write_db_data(Constants.DATAPOINT_CONFIG, PLC_DATA)

        self.network.set_act_result(PLC_DATA["actuator"])
        #print("################# PLC_DATA ACT ###############")
        #print(PLC_DATA["actuator"])

        # +--------------------------
        # | 5. End of Round
        # +--------------------------
        stop_time = time.time()
        run_time = round(stop_time - start_time, 2)
        logger.log("INFO", f"Use {run_time}s")
        logger.log("INFO", f"------ Round {round_count} Finished ------")

if __name__ == "__main__":
    # Full printout
    #pd.set_option('display.max_columns', None)
    #pd.set_option('display.max_rows', None)

    logger.log("INFO", "Start Simulator...")

    # Initialization
    logger.log("INFO", f"Creating Simulator Network...")
    simulator = Simulator(Constants.INITIAL_DATA)
    #print(len(simulator.network.extra_config_list))
    #Infinite loop for simulation. When the text file contains 0 simulation is paused.
    round_count = 0
    isFirstRound = True
    print_pause = False
    
    simulator.simulate(round_count, isFirstRound)
    isFirstRound = False
    print("Cyber Range is Initialising\n")
    time.sleep(Constants.NETWORK["LOOP_TIME_INTERVAL"])
    while True:
        with open("running_status.txt", "r") as f:
            status = f.read(1)
            if status == "0":
                if print_pause == False:
                    logger.log("INFO", f"Simulation Paused...")
                    print_pause = True
                time.sleep(Constants.NETWORK["LOOP_TIME_INTERVAL"])
                continue
            else:
                print_pause = False

        simulator.simulate(round_count, isFirstRound)
        isFirstRound = False
        # Sleep
        logger.log("INFO", f"Waiting Next Round...")
        time.sleep(Constants.NETWORK["LOOP_TIME_INTERVAL"])
        round_count += 1
