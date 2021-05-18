#!/usr/bin/env python3
# coding: utf-8
import time
#import random
#import json
#import logging

#from pandapower.plotting.plotly import simple_plotly as plot
#import pandapower as pp

import Constants
from Network import Network
from DBTransmitter import DBTransmitter
from Logger import Logger

# Logging
logger = Logger()

class Simulator():
    def __init__(self, initial_data):
        #print("####### printing initial_data #########")
        print(initial_data)

        self.network = Network(
            Constants.NETWORK["FILE_PATH"],
            initial_data
        )
        #self.network.create_network()
        self.network.create_network_list()

        #self.sensor = Transmitter()
        self.sensor = DBTransmitter()


    def simulate(self, round_count):

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
        print(f"**************NET BEFORE ROUND {round_count}**************")
        logger.log("INFO", f"Reading PLC Data...")
        data_to_read_config = [
            { "name": "Actuator", "index": "actuator", "point": "line_cb" }
        ]
        #PLC_DATA, READ_STATUS = self.sensor.read_plc_data(data_to_read_config)
        #read data of previous round from DB.
        PLC_DATA, READ_STATUS = self.sensor.read_db_data(data_to_read_config)
        logger.log("INFO", f"Update Actuator")
        #set the data from DB to Network class.
        self.network.set_plc_data_from_plc_round(PLC_DATA, round_count)
        #self.network.set_plc_data_from_plc(PLC_DATA)
        print(f"**************BEFORE ROUND {round_count}**************")


        # +--------------------------
        # | 3. Run the network
        # +--------------------------
        logger.log("INFO", f"Run Simulation")
        self.network.calculate(round_count)

        # Print and check
        print(f"**************NET AFTER ROUND {round_count}**************")
        #net_data = self.network.print_net()
        net_data = self.network.print_net(round_count)
        for k, v in net_data.items():
            print(f"*** {k} ***")
            print(v)
        print(f"**************END OF ROUND {round_count}**************")


        # +--------------------------
        # | 4. Send Data to PLC
        # +--------------------------
        PLC_DATA = self.network.get_data_for_plc()

        # send all data to PLC
        logger.log("INFO", f"Sending Data to PLC...")
        print("################# PLC_DATA to DB ###############")
        print(PLC_DATA)
        #self.sensor.write_plc_data(Constants.DATAPOINT_CONFIG, PLC_DATA)
        self.sensor.write_db_data(Constants.DATAPOINT_CONFIG, PLC_DATA)


        # +--------------------------
        # | 5. End of Round
        # +--------------------------
        stop_time = time.time()
        run_time = round(stop_time - start_time, 2)
        logger.log("INFO", f"Use {run_time}s")
        logger.log("INFO", f"------ Round {round_count} Finished ------")


if __name__ == "__main__":
    logger.log("INFO", "Start Simulator...")

    # Initialization
    logger.log("INFO", f"Creating Simulator Network...")
    simulator = Simulator(Constants.INITIAL_DATA)

    #Infinite loop for simulation. When the text file contains 0 simulation is paused.
    round_count = 0
    print_pause = False
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

        simulator.simulate(round_count)
        # Sleep
        logger.log("INFO", f"Waiting Next Round...")
        time.sleep(Constants.NETWORK["LOOP_TIME_INTERVAL"])
        round_count += 1
