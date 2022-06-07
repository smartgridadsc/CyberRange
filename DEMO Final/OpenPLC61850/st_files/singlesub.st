PROGRAM MemoryAddress
  VAR
    line_cb_0 AT %QX00.0 : BOOL;
    line_cb_1 AT %QX00.1 : BOOL;
    line_cb_2 AT %QX00.2 : BOOL;
    line_cb_3 AT %QX00.3 : BOOL;
    line_cb_4 AT %QX00.4 : BOOL;
    line_cb_5 AT %QX00.5 : BOOL;
    line_cb_6 AT %QX00.6 : BOOL;
    line_cb_7 AT %QX00.7 : BOOL;
    line_cb_8 AT %QX01.0 : BOOL;
    line_cb_9 AT %QX01.1 : BOOL;
    line_cb_10 AT %QX01.2 : BOOL;
    bus_voltage_0 AT %MD0 : REAL;
    bus_voltage_1 AT %MD1 : REAL;
    bus_voltage_2 AT %MD2 : REAL;
    bus_voltage_3 AT %MD3 : REAL;
    bus_voltage_4 AT %MD4 : REAL;
    bus_voltage_5 AT %MD5 : REAL;
    bus_voltage_6 AT %MD6 : REAL;
    bus_voltage_7 AT %MD7 : REAL;
    bus_voltage_8 AT %MD8 : REAL;
    bus_voltage_9 AT %MD9 : REAL;
    bus_voltage_10 AT %MD10 : REAL;
    bus_voltage_11 AT %MD11 : REAL;
    bus_voltage_12 AT %MD12 : REAL;
    bus_voltage_13 AT %MD13 : REAL;
    bus_voltage_14 AT %MD14 : REAL;
    bus_voltage_15 AT %MD15 : REAL;
    bus_voltage_16 AT %MD16 : REAL;
    bus_voltage_17 AT %MD17 : REAL;
    bus_voltage_18 AT %MD18 : REAL;
    bus_voltage_19 AT %MD19 : REAL;
    bus_voltage_20 AT %MD20 : REAL;
    bus_voltage_21 AT %MD21 : REAL;
    bus_voltage_22 AT %MD22 : REAL;
    bus_voltage_23 AT %MD23 : REAL;
    bus_voltage_24 AT %MD24 : REAL;
    bus_voltage_25 AT %MD25 : REAL;
    bus_voltage_26 AT %MD26 : REAL;
    bus_voltage_27 AT %MD27 : REAL;
    bus_voltage_28 AT %MD28 : REAL;
    bus_voltage_29 AT %MD29 : REAL;
    line_current_0 AT %MD100 : REAL;
    line_current_1 AT %MD101 : REAL;
    line_current_2 AT %MD102 : REAL;
    line_current_3 AT %MD103 : REAL;
    line_current_4 AT %MD104 : REAL;
    line_current_5 AT %MD105 : REAL;
    line_current_6 AT %MD106 : REAL;
    line_current_7 AT %MD107 : REAL;
    line_current_8 AT %MD108 : REAL;
    line_current_9 AT %MD109 : REAL;
    line_current_10 AT %MD110 : REAL;
    line_current_11 AT %MD111 : REAL;
    line_current_12 AT %MD112 : REAL;
    line_current_13 AT %MD113 : REAL;
    line_current_14 AT %MD114 : REAL;
    line_current_15 AT %MD115 : REAL;
    line_current_16 AT %MD116 : REAL;
    line_current_17 AT %MD117 : REAL;
    line_current_18 AT %MD118 : REAL;
    line_current_19 AT %MD119 : REAL;
    line_current_20 AT %MD120 : REAL;
    line_current_21 AT %MD121 : REAL;
    line_current_22 AT %MD122 : REAL;
    line_current_23 AT %MD123 : REAL;
    line_current_24 AT %MD124 : REAL;
    line_current_25 AT %MD125 : REAL;
    line_current_26 AT %MD126 : REAL;
    line_current_27 AT %MD127 : REAL;
    line_real_power_0 AT %MD200 : REAL;
    line_real_power_1 AT %MD201 : REAL;
    line_real_power_2 AT %MD202 : REAL;
    line_real_power_3 AT %MD203 : REAL;
    line_real_power_4 AT %MD204 : REAL;
    line_real_power_5 AT %MD205 : REAL;
    line_real_power_6 AT %MD206 : REAL;
    line_real_power_7 AT %MD207 : REAL;
    line_real_power_8 AT %MD208 : REAL;
    line_real_power_9 AT %MD209 : REAL;
    line_real_power_10 AT %MD210 : REAL;
    line_real_power_11 AT %MD211 : REAL;
    line_real_power_12 AT %MD212 : REAL;
    line_real_power_13 AT %MD213 : REAL;
    line_real_power_14 AT %MD214 : REAL;
    line_real_power_15 AT %MD215 : REAL;
    line_real_power_16 AT %MD216 : REAL;
    line_real_power_17 AT %MD217 : REAL;
    line_real_power_18 AT %MD218 : REAL;
    line_real_power_19 AT %MD219 : REAL;
    line_real_power_20 AT %MD220 : REAL;
    line_real_power_21 AT %MD221 : REAL;
    line_real_power_22 AT %MD222 : REAL;
    line_real_power_23 AT %MD223 : REAL;
    line_real_power_24 AT %MD224 : REAL;
    line_real_power_25 AT %MD225 : REAL;
    line_real_power_26 AT %MD226 : REAL;
    line_real_power_27 AT %MD227 : REAL;
    line_reactive_power_0 AT %MD300 : REAL;
    line_reactive_power_1 AT %MD301 : REAL;
    line_reactive_power_2 AT %MD302 : REAL;
    line_reactive_power_3 AT %MD303 : REAL;
    line_reactive_power_4 AT %MD304 : REAL;
    line_reactive_power_5 AT %MD305 : REAL;
    line_reactive_power_6 AT %MD306 : REAL;
    line_reactive_power_7 AT %MD307 : REAL;
    line_reactive_power_8 AT %MD308 : REAL;
    line_reactive_power_9 AT %MD309 : REAL;
    line_reactive_power_10 AT %MD310 : REAL;
    line_reactive_power_11 AT %MD311 : REAL;
    line_reactive_power_12 AT %MD312 : REAL;
    line_reactive_power_13 AT %MD313 : REAL;
    line_reactive_power_14 AT %MD314 : REAL;
    line_reactive_power_15 AT %MD315 : REAL;
    line_reactive_power_16 AT %MD316 : REAL;
    line_reactive_power_17 AT %MD317 : REAL;
    line_reactive_power_18 AT %MD318 : REAL;
    line_reactive_power_19 AT %MD319 : REAL;
    line_reactive_power_20 AT %MD320 : REAL;
    line_reactive_power_21 AT %MD321 : REAL;
    line_reactive_power_22 AT %MD322 : REAL;
    line_reactive_power_23 AT %MD323 : REAL;
    line_reactive_power_24 AT %MD324 : REAL;
    line_reactive_power_25 AT %MD325 : REAL;
    line_reactive_power_26 AT %MD326 : REAL;
    line_reactive_power_27 AT %MD327 : REAL;
  END_VAR
  VAR
    Alarmvalue : REAL := 1.1;
    Tripvalue : REAL := 1.2;
    Open : BOOL := false;
    Closed : BOOL := true;
  END_VAR

  IF bus_voltage_29 > Alarmvalue THEN
        line_cb_1 := Open;
  END_IF;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : MemoryAddress;
  END_RESOURCE
END_CONFIGURATION
