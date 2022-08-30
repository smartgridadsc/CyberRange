#!/usr/bin/env python3
# coding: utf-8

import time
import logging

import Constants
import pymysql.cursors
from Network import Network
from Logger import Logger

logger = Logger()

#  Communicate with MySQL database
class DBTransmitter:
    # Read the data from a certain address space of a PLC.
    # plc_name : the plc name stored in Constants.py file
    # datapoint_config: the config used to get the name, index, and point
    # Return the data and the read_status
    def read_db_data(self, datapoint_config):
        PLC_DATA = {}
        READ_STATUS = True

        try:
            db = pymysql.connect(host="localhost", user="admin", password="********", database="pandapower_adsc_ms_db")

            for d in datapoint_config:
                # Read data from PLC
                name  = d["name"]
                index = d["index"]
                point = d["point"]
                logger.log("INFO", f"    Reading {name}({point}) Data from DB...")

                mycursor = db.cursor()

                mycursor.execute(f"SELECT value FROM {point} ORDER BY LENGTH(name), name")
                result = mycursor.fetchall()
                DATAPOINT_DATA = [None] * len(result)

                for i, row in enumerate(result):
                    DATAPOINT_DATA[i] = row[0]

                # Wait, to prevent read failure
                # time.sleep(Constants.PLC["io_wait"])
                PLC_DATA[index] = DATAPOINT_DATA

            db.close()
        except pymysql.Error as err:
            print(f"Exception in read_db_data(), MySQL connector error: {err}")

        logger.log("INFO", f"DB Read finished, Disconnecting...")
        return PLC_DATA, READ_STATUS

    # Write the data to a certain address space of a PLC.
    # plc_name: the plc name stored in Constants.py file
    # datapoint_config: the config used to get the name, index, and point
    # PLC_DATA: the data to write 
    # Return the write_status
    def write_db_data(self, datapoint_config, PLC_DATA):
        try:
            db = pymysql.connect(host="localhost", user="admin", password="********", database="pandapower_adsc_ms_db")

            for d in datapoint_config:
                # Write data from PLC
                name  = d["name"]
                index = d["index"]
                point = d["point"]
                logger.log("INFO", f"    Writing {name}({point}) Data from DB...")
                DATA_WRITE = PLC_DATA[index]
                mycursor = db.cursor()
                data = ""
                for i,value in enumerate(DATA_WRITE):
                    data += f"(\"{point}_{i}\", {value})"
                    if i < (len(DATA_WRITE) - 1):
                        data += ", "
                if data == "":
                    continue

                query = f"INSERT INTO {point} VALUES {data} ON DUPLICATE KEY UPDATE value = VALUES(value)"
                mycursor.execute(query)
                db.commit()

            db.close()
        except pymysql.Error as err:
            print(f"Exception in write_db_data(), MySQL connector error: {err}")

        logger.log("INFO", f"Write Success, I Will Disconnect")


if __name__ == "__main__":
    sensor = DBTransmitter()
    DATAPOINT_CONFIG = [
        {"name": "Actuator", "index": "actuator", "point": "line_cb"},
        {"name": "Sensor", "index": "sensor", "point": "line_loading"},
        {"name": "Load", "index": "load", "point": "loads"},
        {"name": "Relay", "index": "relay", "point": "relay"},
        {"name": "TemperatureSensor", "index": "temperature_sensor", "point": "transformer_temp"},
        {"name": "Frequency Meter", "index": "fm", "point": "fm"},
        {"name": "LineLoadPercent", "index": "line_load_percent", "point": "line_load_percent"}
    ]

    PLC_DATA = {
        'actuator': [True, True, True, True, True, False, True, True, True, True, True, False, True, True, True, True,
                     True, True],
        'sensor': [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0],
        'load': [0.0, 2.0, 0.0, 0.0, 0.0, 0.0, 2.0, 0.0, 0.0, 0.0],
        'relay': [True, False, True, True],
        'temperature_sensor': [25.0, 25.0],
        'fm': [50.0, 50.0, 50.0, 50.0],
        'line_load_percent': [3.0, 0.0, 0.0, 0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
    }

    sensor.write_db_data(DATAPOINT_CONFIG, PLC_DATA)
