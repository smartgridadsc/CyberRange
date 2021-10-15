<?xml version="1.0" encoding="utf-8"?>
<SCL version="2007" revision="B" xmlns:sxy="http://www.iec.ch/61850/2003/SCLcoordinates" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.iec.ch/61850/2003/SCL SCL.xsd http://www.iec.ch/61850/2003/SCLcoordinates SCL_Coordinates.xsd" xmlns="http://www.iec.ch/61850/2003/SCL">
  <Header revision="L" version="1" id="482df49c-6f87-430b-a965-7810b233298c" toolID="Grid Software SCL Matrix" nameStructure="IEDName">
    <Text>EPIC</Text>
    <History>
      <Hitem revision="A" version="1" when="2020-06-15T11:58:32Z" who="Grid Software SCL Matrix" what="Project EPIC created" />
      <Hitem revision="B" version="1" when="2020-06-18T16:32:10Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="C" version="1" when="2021-09-22T16:26:11Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="D" version="1" when="2021-09-23T12:39:57Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="E" version="1" when="2021-09-24T17:46:50Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="F" version="1" when="2021-09-28T00:38:19Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="G" version="1" when="2021-09-28T21:24:31Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="H" version="1" when="2021-09-28T21:36:54Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="I" version="1" when="2021-09-28T21:51:47Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="J" version="1" when="2021-09-29T13:28:19Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="K" version="1" when="2021-09-29T15:20:32Z" who="Grid Software SCL Matrix" what="SCD Export" />
      <Hitem revision="L" version="1" when="2021-09-29T17:06:17Z" who="Grid Software SCL Matrix" what="SCD Export" />
    </History>
  </Header>
  <Substation name="EPIC">
    <VoltageLevel name="400 V" numPhases="3" nomFreq="50" sxy:x="3" sxy:y="3">
      <PowerTransformer name="PTR" type="PTR" sxy:x="56" sxy:y="32">
        <TransformerWinding name="W1" desc="W1" type="PTW">
          <Terminal connectivityNode="EPIC/400 V/T2/CBRPTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T2" cNodeName="CBRPTRCN" />
        </TransformerWinding>
        <TransformerWinding name="W2" desc="W2" type="PTW">
          <Terminal connectivityNode="EPIC/400 V/T3/PTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T3" cNodeName="PTRCBRCN" />
        </TransformerWinding>
      </PowerTransformer>
      <Voltage unit="V" multiplier="k">0.4</Voltage>
      <Bay name="G3" sxy:x="14" sxy:y="14">
        <LNode iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" lnType="MEAS.MMXU2" />
        <LNode iedName="MIED1" ldInst="PROT" lnClass="PTOC" lnInst="2" lnType="PROT.PTOC2" />
        <ConductingEquipment name="CON" type="CON" sxy:x="3" sxy:y="3" sxy:dir="vertical">
          <Terminal connectivityNode="EPIC/400 V/G3/CONCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="CONCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/G3/GENCONCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="GENCONCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q2A" type="CBR" sxy:x="3" sxy:y="6">
          <LNode iedName="MIED1" ldInst="CTRL" lnClass="XCBR" lnInst="2" lnType="CTRL.XCBR2" />
          <Terminal connectivityNode="EPIC/400 V/G3/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="CBRCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/G3/CONCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="CONCBRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="3" sxy:y="9">
          <Terminal connectivityNode="EPIC/400 V/Gen/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Gen" cNodeName="CN" />
          <Terminal connectivityNode="EPIC/400 V/G3/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="6" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/G3/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="PV" type="GEN" sxy:x="3" sxy:y="0">
          <Terminal connectivityNode="EPIC/400 V/G3/GENCONCN" substationName="EPIC" voltageLevelName="400 V" bayName="G3" cNodeName="GENCONCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CBRCTRCN" pathName="EPIC/400 V/G3/CBRCTRCN" sxy:x="3" sxy:y="7" />
        <ConnectivityNode name="CONCBRCN" pathName="EPIC/400 V/G3/CONCBRCN" sxy:x="3" sxy:y="4" />
        <ConnectivityNode name="GENCONCN" pathName="EPIC/400 V/G3/GENCONCN" sxy:x="3" sxy:y="1" />
      </Bay>
      <Bay name="Gen" sxy:x="6" sxy:y="29">
        <ConnectivityNode name="CN" pathName="EPIC/400 V/Gen/CN" sxy:x="11" sxy:y="4" />
      </Bay>
      <Bay name="Trans" sxy:x="22" sxy:y="46">
        <ConnectivityNode name="CN" pathName="EPIC/400 V/Trans/CN" sxy:x="35" sxy:y="26" />
      </Bay>
      <Bay name="L1" sxy:x="17" sxy:y="47">
        <LNode iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1_2" />
        <LNode iedName="SIED1" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV1" />
        <LNode iedName="SIED1" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1_1" />
        <ConductingEquipment name="OHL" type="IFL" sxy:x="3" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/L1/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L1" cNodeName="OHLCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q3_1" type="CBR" sxy:x="3" sxy:y="2">
          <LNode iedName="SIED1" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1_1" />
          <Terminal connectivityNode="EPIC/400 V/L1/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L1" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="3" sxy:y="5">
          <Terminal connectivityNode="EPIC/400 V/L1/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L1" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/L1/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L1" cNodeName="OHLCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="7" sxy:y="5">
          <Terminal connectivityNode="EPIC/400 V/L1/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L1" cNodeName="CTRCBRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CTRCBRCN" pathName="EPIC/400 V/L1/CTRCBRCN" sxy:x="3" sxy:y="3" />
        <ConnectivityNode name="OHLCTRCN" pathName="EPIC/400 V/L1/OHLCTRCN" sxy:x="3" sxy:y="6" />
      </Bay>
      <Bay name="L2" sxy:x="28" sxy:y="47">
        <LNode iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1_3" />
        <LNode iedName="SIED2" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV1" />
        <LNode iedName="SIED2" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1_2" />
        <ConductingEquipment name="OHL" type="IFL" sxy:x="3" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/L2/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L2" cNodeName="OHLCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q3_2" type="CBR" sxy:x="3" sxy:y="2">
          <LNode iedName="SIED2" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1_2" />
          <Terminal connectivityNode="EPIC/400 V/L2/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L2" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="3" sxy:y="5">
          <Terminal connectivityNode="EPIC/400 V/L2/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L2" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/L2/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L2" cNodeName="OHLCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="7" sxy:y="5">
          <Terminal connectivityNode="EPIC/400 V/L2/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L2" cNodeName="CTRCBRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CTRCBRCN" pathName="EPIC/400 V/L2/CTRCBRCN" sxy:x="3" sxy:y="3" />
        <ConnectivityNode name="OHLCTRCN" pathName="EPIC/400 V/L2/OHLCTRCN" sxy:x="3" sxy:y="6" />
      </Bay>
      <Bay name="L3" sxy:x="40" sxy:y="47">
        <LNode iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1_4" />
        <LNode iedName="SIED3" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV1" />
        <LNode iedName="SIED3" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1_3" />
        <ConductingEquipment name="OHL" type="IFL" sxy:x="0" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/L3/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L3" cNodeName="OHLCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q3_3" type="CBR" sxy:x="0" sxy:y="2">
          <LNode iedName="SIED3" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1_3" />
          <Terminal connectivityNode="EPIC/400 V/L3/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L3" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="0" sxy:y="5">
          <Terminal connectivityNode="EPIC/400 V/L3/OHLCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L3" cNodeName="OHLCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/L3/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L3" cNodeName="CTRCBRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="4" sxy:y="6">
          <Terminal connectivityNode="EPIC/400 V/L3/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L3" cNodeName="CTRCBRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="OHLCTRCN" pathName="EPIC/400 V/L3/OHLCTRCN" sxy:x="0" sxy:y="6" />
        <ConnectivityNode name="CTRCBRCN" pathName="EPIC/400 V/L3/CTRCBRCN" sxy:x="0" sxy:y="3" />
      </Bay>
      <Bay name="L4" sxy:x="49" sxy:y="47">
        <LNode iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1_5" />
        <LNode iedName="SIED4" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV1" />
        <LNode iedName="SIED4" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1_4" />
        <ConductingEquipment name="MOT" type="MOT" sxy:x="3" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/L4/MOTCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L4" cNodeName="MOTCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q3_4" type="CBR" sxy:x="3" sxy:y="1" sxy:dir="vertical">
          <LNode iedName="SIED4" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1_4" />
          <Terminal connectivityNode="EPIC/400 V/L4/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L4" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="3" sxy:y="4">
          <Terminal connectivityNode="EPIC/400 V/L4/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L4" cNodeName="CTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/L4/MOTCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L4" cNodeName="MOTCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="6" sxy:y="4">
          <Terminal connectivityNode="EPIC/400 V/L4/CTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="L4" cNodeName="CTRCBRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CTRCBRCN" pathName="EPIC/400 V/L4/CTRCBRCN" sxy:x="3" sxy:y="2" />
        <ConnectivityNode name="MOTCTRCN" pathName="EPIC/400 V/L4/MOTCTRCN" sxy:x="3" sxy:y="5" />
      </Bay>
      <Bay name="G2" sxy:x="25" sxy:y="14">
        <LNode iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1" />
        <LNode iedName="MIED1" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV" />
        <LNode iedName="MIED1" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1" />
        <LNode iedName="MIED1" ldInst="PROT" lnClass="PTOF" lnInst="1" lnType="PROT.PTOF" />
        <ConductingEquipment name="GEN" type="GEN">
          <Terminal connectivityNode="EPIC/400 V/G2/GENCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G2" cNodeName="GENCBRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q2B" type="CBR" sxy:x="0" sxy:y="3">
          <LNode iedName="MIED1" ldInst="CTRL" lnClass="RSYN" lnInst="1" lnType="CTRL.RSYN" />
          <LNode iedName="MIED1" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1" />
          <Terminal connectivityNode="EPIC/400 V/G2/GENCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G2" cNodeName="GENCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/G2/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G2" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="3" sxy:y="6">
          <Terminal connectivityNode="EPIC/400 V/G2/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G2" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="0" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/G2/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G2" cNodeName="CBRCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/Gen/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Gen" cNodeName="CN" />
        </ConductingEquipment>
        <ConnectivityNode name="GENCBRCN" pathName="EPIC/400 V/G2/GENCBRCN" sxy:x="0" sxy:y="1" />
        <ConnectivityNode name="CBRCTRCN" pathName="EPIC/400 V/G2/CBRCTRCN" sxy:x="0" sxy:y="5" />
      </Bay>
      <Bay name="G1" sxy:x="34" sxy:y="14">
        <LNode iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1" />
        <LNode iedName="MIED2" ldInst="PROT" lnClass="PTOV" lnInst="1" lnType="PROT.PTOV" />
        <LNode iedName="MIED2" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC1" />
        <LNode iedName="MIED2" ldInst="PROT" lnClass="PTOF" lnInst="1" lnType="PROT.PTOF" />
        <ConductingEquipment name="GEN" type="GEN">
          <Terminal connectivityNode="EPIC/400 V/G1/GENCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G1" cNodeName="GENCBRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q2C" type="CBR" sxy:x="0" sxy:y="3">
          <LNode iedName="MIED2" ldInst="CTRL" lnClass="RSYN" lnInst="1" lnType="CTRL.RSYN" />
          <LNode iedName="MIED2" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR1" />
          <Terminal connectivityNode="EPIC/400 V/G1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G1" cNodeName="CBRCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/G1/GENCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G1" cNodeName="GENCBRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="0" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/G1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G1" cNodeName="CBRCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/Gen/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Gen" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="3" sxy:y="6">
          <Terminal connectivityNode="EPIC/400 V/G1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G1" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="GENCBRCN" pathName="EPIC/400 V/G1/GENCBRCN" sxy:x="0" sxy:y="1" />
        <ConnectivityNode name="CBRCTRCN" pathName="EPIC/400 V/G1/CBRCTRCN" sxy:x="0" sxy:y="5" />
      </Bay>
      <Bay name="T1" sxy:x="25" sxy:y="33">
        <LNode iedName="TIED4" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC" />
        <LNode iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU" />
        <ConductingEquipment name="Q2_1" type="CBR" sxy:x="3" sxy:y="1">
          <LNode iedName="TIED4" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR_2" />
          <Terminal connectivityNode="EPIC/400 V/Gen/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Gen" cNodeName="CN" />
          <Terminal connectivityNode="EPIC/400 V/T1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T1" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="3" sxy:y="6">
          <Terminal connectivityNode="EPIC/400 V/T1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T1" cNodeName="CBRCTRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="7" sxy:y="6">
          <Terminal connectivityNode="EPIC/400 V/T1/CBRCTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T1" cNodeName="CBRCTRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CBRCTRCN" pathName="EPIC/400 V/T1/CBRCTRCN" sxy:x="3" sxy:y="4" />
      </Bay>
      <Bay name="G4" sxy:x="5" sxy:y="14">
        <LNode iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" lnType="MEAS.MMXU2" />
        <LNode iedName="MIED2" ldInst="PROT" lnClass="PTOC" lnInst="2" lnType="PROT.PTOC2" />
        <ConductingEquipment name="CON" type="CON" sxy:x="2" sxy:y="2">
          <Terminal connectivityNode="EPIC/400 V/G4/CONQ2CN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="CONQ2CN" />
          <Terminal connectivityNode="EPIC/400 V/G4/CONGENCN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="CONGENCN" />
        </ConductingEquipment>
        <ConductingEquipment name="BAT" type="GEN" sxy:x="2" sxy:y="0">
          <Terminal connectivityNode="EPIC/400 V/G4/CONGENCN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="CONGENCN" />
        </ConductingEquipment>
        <ConductingEquipment name="VTR" type="VTR" sxy:x="4" sxy:y="8">
          <Terminal connectivityNode="EPIC/400 V/G4/Q2CTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="Q2CTRCN" />
        </ConductingEquipment>
        <ConductingEquipment name="CTR" type="CTR" sxy:x="2" sxy:y="10">
          <Terminal connectivityNode="EPIC/400 V/G4/Q2CTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="Q2CTRCN" />
          <Terminal connectivityNode="EPIC/400 V/Gen/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Gen" cNodeName="CN" />
        </ConductingEquipment>
        <ConductingEquipment name="Q2" type="CBR" sxy:x="2" sxy:y="5">
          <LNode iedName="MIED2" ldInst="CTRL" lnClass="XCBR" lnInst="2" lnType="CTRL.XCBR2" />
          <Terminal connectivityNode="EPIC/400 V/G4/CONQ2CN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="CONQ2CN" />
          <Terminal connectivityNode="EPIC/400 V/G4/Q2CTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="G4" cNodeName="Q2CTRCN" />
        </ConductingEquipment>
        <ConnectivityNode name="CONGENCN" pathName="EPIC/400 V/G4/CONGENCN" sxy:x="2" sxy:y="1" />
        <ConnectivityNode name="Q2CTRCN" pathName="EPIC/400 V/G4/Q2CTRCN" sxy:x="2" sxy:y="7" />
        <ConnectivityNode name="CONQ2CN" pathName="EPIC/400 V/G4/CONQ2CN" sxy:x="2" sxy:y="3" />
      </Bay>
      <Bay name="Ext. Grid" sxy:x="53" sxy:y="14">
        <ConnectivityNode name="CN" pathName="EPIC/400 V/Ext. Grid/CN" sxy:x="22" sxy:y="8" />
      </Bay>
      <Bay name="T2" sxy:x="54" sxy:y="16">
        <LNode iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU1_1" />
        <LNode iedName="TIED1" ldInst="PROT" lnClass="PDIF" lnInst="1" lnType="PROT.PDIF" />
        <ConductingEquipment name="Q1_3" type="CBR" sxy:x="2" sxy:y="3">
          <LNode iedName="TIED1" ldInst="CTRL" lnClass="CILO" lnInst="1" lnType="CTRL.CILO" />
          <LNode iedName="TIED1" ldInst="CTRL" lnClass="CSWI" lnInst="1" lnType="CTRL.CSWI" />
          <LNode iedName="TIED1" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR" />
          <Terminal connectivityNode="EPIC/400 V/T2/CBRPTRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T2" cNodeName="CBRPTRCN" />
          <Terminal connectivityNode="EPIC/400 V/Ext. Grid/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Ext. Grid" cNodeName="CN" />
        </ConductingEquipment>
        <ConnectivityNode name="CBRPTRCN" pathName="EPIC/400 V/T2/CBRPTRCN" sxy:x="2" sxy:y="8" />
      </Bay>
      <Bay name="T3" sxy:x="56" sxy:y="34">
        <LNode iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" lnType="MEAS.MMXU" />
        <LNode iedName="TIED2" ldInst="PROT" lnClass="PTOC" lnInst="1" lnType="PROT.PTOC" />
        <ConductingEquipment name="Q3" type="CBR" sxy:x="0" sxy:y="5">
          <LNode iedName="TIED2" ldInst="CTRL" lnClass="XCBR" lnInst="1" lnType="CTRL.XCBR_1" />
          <Terminal connectivityNode="EPIC/400 V/T3/PTRCBRCN" substationName="EPIC" voltageLevelName="400 V" bayName="T3" cNodeName="PTRCBRCN" />
          <Terminal connectivityNode="EPIC/400 V/Trans/CN" substationName="EPIC" voltageLevelName="400 V" bayName="Trans" cNodeName="CN" />
        </ConductingEquipment>
        <ConnectivityNode name="PTRCBRCN" pathName="EPIC/400 V/T3/PTRCBRCN" sxy:x="0" sxy:y="1" />
      </Bay>
    </VoltageLevel>
  </Substation>
  <Communication>
    <SubNetwork name="NONE" type="8-MMS" desc="">
      <BitRate unit="b/s" multiplier="M">1000</BitRate>
      <ConnectedAP iedName="MIED1" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.3.11</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C02</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="MPLC" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.3.41</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C04</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="MIED2" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.3.12</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C01</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SPLC" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.41</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C10</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SIED4" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.14</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C08</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SIED3" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.13</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C07</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SIED2" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.12</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C29</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SIED1" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.11</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C09</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TIED1" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.11</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C35</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TIED2" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.12</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C36</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TIED4" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.13</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C37</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TPLC" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.41</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C15</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="CPLC" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.5.41</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C20</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="HMIIED" apName="P1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.18.5.60</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
          <P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
          <P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
          <P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
          <P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
          <P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C19</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="MSW2" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.3.2</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C16</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C04</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
          <P type="Cable">C03</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
          <P type="Cable">C28</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SSW2" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.2</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C17</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C10</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
          <P type="Cable">C05</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
          <P type="Cable">C06</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TSW2" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.2</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C18</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C15</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
          <P type="Cable">C13</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
          <P type="Cable">C34</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="CSW1" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.5.1</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C22</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C23</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C24</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="CSW2" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.5.2</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C22</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C21</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
          <P type="Cable">C20</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="CSW3" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.18.5.1</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C21</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
          <P type="Cable">C19</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="MSW1" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.3.1</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C16</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C26</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C25</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="SSW1" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.4.1</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C17</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C26</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
          <P type="Cable">C23</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="TSW1" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">172.16.2.1</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C18</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C24</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Type">Connection</P>
          <P type="Cable">C25</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="M1SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C27</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C28</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C02</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="M2SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C01</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C03</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C27</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="S1SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C31</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C32</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C09</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="S2SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C33</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C32</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C29</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="S3SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C05</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C30</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C31</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C07</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="S4SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C06</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C30</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C33</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C08</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="T1SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C35</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C34</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C14</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C11</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="T2SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C12</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C36</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C11</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
      <ConnectedAP iedName="T4SW" apName="AP1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C37</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C13</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Type">Connection</P>
          <P type="Cable">C14</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C12</P>
        </PhysConn>
      </ConnectedAP>
    </SubNetwork>
  </Communication>
  <IED name="MIED1" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" type="Control Device" configVersion="1.0" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="2" sxy:y="24" desc="MIED Specification">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="20" />
      <ConfReportControl max="310" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
      <ReadWrite />
      <DataObjectDirectory />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0">
            <DOI name="Beh">
              <DAI name="stVal" valImport="false" />
            </DOI>
          </LN0>
          <LN lnClass="LPHD" inst="0" lnType="LD0.LPHD" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1" />
          <LN lnClass="MMXU" inst="2" lnType="MEAS.MMXU2" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0" />
          <LN lnClass="RSYN" inst="1" lnType="CTRL.RSYN" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1" />
          <LN lnClass="XCBR" inst="2" lnType="CTRL.XCBR2" />
          <LN lnClass="XCBR" inst="3" lnType="CTRL.XCBR3" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0">
            <DataSet name="MDS1" desc="(created on Tuesday, 21 September 2021 12:11:51)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MDS2" desc="(created on Tuesday, 21 September 2021 12:15:15)">
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS1" desc="(created on Tuesday, 21 September 2021 12:18:45)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
              <FCDA ldInst="CTRL" lnInst="1" lnClass="RSYN" doName="Rel" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="CDS2" desc="(created on Tuesday, 21 September 2021 12:19:27)">
              <FCDA ldInst="CTRL" lnInst="2" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
              <FCDA ldInst="CTRL" lnInst="3" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, 21 September 2021 12:20:05)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOF" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS1" desc="(created on Tuesday, 21 September 2021 12:21:24)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="MCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS2" desc="(created on Tuesday, 21 September 2021 12:22:58)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS1" desc="(created on Wednesday, September 22, 2021 2:59:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="CCB2" bufTime="500" buffered="true" confRev="30001" intgPd="1000" indexed="true" datSet="CDS2" desc="(created on Wednesday, September 22, 2021 3:03:05 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:04:53 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2" />
          <LN lnClass="PTOF" inst="1" lnType="PROT.PTOF" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="MIED2" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" type="Control Device" configVersion="1.0" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:y="10" sxy:x="2" desc="MIED Specification">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="20" />
      <ConfReportControl max="310" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
      <ReadWrite />
      <DataObjectDirectory />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0">
            <DOI name="Beh">
              <DAI name="stVal" valImport="false" />
            </DOI>
          </LN0>
          <LN lnClass="LPHD" inst="0" lnType="LD0.LPHD" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1" />
          <LN lnClass="MMXU" inst="2" lnType="MEAS.MMXU2" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0" />
          <LN lnClass="RSYN" inst="1" lnType="CTRL.RSYN" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1" />
          <LN lnClass="XCBR" inst="2" lnType="CTRL.XCBR2" />
          <LN lnClass="XCBR" inst="3" lnType="CTRL.XCBR3" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0">
            <DataSet name="MDS1" desc="(created on Tuesday, 21 September 2021 12:11:51)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MDS2" desc="(created on Tuesday, 21 September 2021 12:15:15)">
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS1" desc="(created on Tuesday, 21 September 2021 12:18:45)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
              <FCDA ldInst="CTRL" lnInst="1" lnClass="RSYN" doName="Rel" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="CDS2" desc="(created on Tuesday, 21 September 2021 12:19:27)">
              <FCDA ldInst="CTRL" lnInst="2" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
              <FCDA ldInst="CTRL" lnInst="3" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, 21 September 2021 12:20:05)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOF" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS1" desc="(created on Tuesday, 21 September 2021 12:21:24)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="MCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS2" desc="(created on Tuesday, 21 September 2021 12:22:58)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS1" desc="(created on Wednesday, September 22, 2021 2:59:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="CCB2" bufTime="500" buffered="true" confRev="30001" intgPd="1000" indexed="true" datSet="CDS2" desc="(created on Wednesday, September 22, 2021 3:03:05 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:04:53 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2" />
          <LN lnClass="PTOF" inst="1" lnType="PROT.PTOF" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="MPLC" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="13" sxy:y="10">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="40" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="0" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling />
      <ConfLNs />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_1" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_1" />
        </LDevice>
        <LDevice inst="ServerLogicalDevice">
          <LN0 lnClass="LLN0" inst="" lnType="SLD.LLN0">
            <DataSet name="SPCSDS1" desc="(created on Monday, 27 September 2021 12:48:37)">
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO1" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO2" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO3" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO4" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO5" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO6" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO7" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO8" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO9" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO10" daName="ctlModel" fc="CF" />
            </DataSet>
            <DataSet name="DPCSDS2" desc="(created on Monday, 27 September 2021 12:49:33)">
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO1" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO2" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO3" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO4" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO5" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO6" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO7" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO8" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO9" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO10" fc="ST" />
            </DataSet>
            <DataSet name="MEASDS3" desc="(created on Monday, 27 September 2021 12:50:39)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS4" desc="(created on Monday, 27 September 2021 12:52:12)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS5" desc="(created on Monday, 27 September 2021 12:53:36)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS6" desc="(created on Monday, 27 September 2021 12:54:46)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <ReportControl name="SPCSCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="SPCSDS1" desc="(created on Monday, 27 September 2021 12:56:14)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="DPCSCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="DPCSDS2" desc="(created on Monday, September 27, 2021 12:57:38 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB3" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS3" desc="(created on Monday, September 27, 2021 12:58:26 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB4" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS4" desc="(created on Monday, September 27, 2021 12:59:14 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB5" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS5" desc="(created on Monday, September 27, 2021 12:59:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB6" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS6" desc="(created on Monday, September 27, 2021 1:00:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="GGIO" inst="1" lnType="SLD.GGIO1" prefix="SPCS" />
          <LN prefix="DPCS" lnClass="GGIO" inst="2" lnType="SLD.GGIO2" />
          <LN prefix="MEAS" lnClass="GGIO" inst="3" lnType="SLD.GGIO3" />
          <LN prefix="MEAS" lnClass="GGIO" inst="4" lnType="SLD.GGIO4" />
          <LN prefix="MEAS" lnClass="GGIO" inst="5" lnType="SLD.GGIO5" />
          <LN prefix="MEAS" lnClass="GGIO" inst="6" lnType="SLD.GGIO6" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="TIED1" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="71" sxy:y="24">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="234" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="2" fixedOffs="false" />
      <GSSE max="1" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_2" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_2" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_1" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1_1" />
          <LN lnClass="MMXU" inst="2" lnType="MEAS.MMXU2_1" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_1" />
          <LN lnClass="CILO" inst="1" lnType="CTRL.CILO" />
          <LN lnClass="CSWI" inst="1" lnType="CTRL.CSWI" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_1">
            <DataSet name="MDS" desc="(created on Tuesday, 21 September 2021 16:01:12)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, 21 September 2021 16:03:15)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, 21 September 2021 16:03:32)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PDIF" doName="Str" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, 21 September 2021 16:03:57)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:09:42 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:10:32 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PDIF" inst="1" lnType="PROT.PDIF" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="TIED2" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="63" sxy:y="42">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="3" fixedOffs="false" />
      <GSSE max="1" />
      <FileHandling />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_3" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_3" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_2" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_2" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR_1" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_2">
            <DataSet name="MDS" desc="(created on Tuesday, 21 September 2021 16:19:21)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, 21 September 2021 16:20:47)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, 21 September 2021 16:20:59)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Str" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, 21 September 2021 16:21:09)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:11:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:12:34 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="TIED4" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="60" sxy:y="21">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="3" fixedOffs="false" />
      <GSSE max="1" />
      <FileHandling />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_4" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_4" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_3" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_3" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR_2" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_3">
            <DataSet name="MDS" desc="(created on Tuesday, 21 September 2021 16:19:21)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, 21 September 2021 16:20:47)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, 21 September 2021 16:20:59)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Str" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, 21 September 2021 16:21:09)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:11:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:12:34 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="TPLC" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="59" sxy:y="14">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="40" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="0" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling />
      <ConfLNs />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_5" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_5" />
        </LDevice>
        <LDevice inst="ServerLogicalDevice">
          <LN0 lnClass="LLN0" inst="" lnType="SLD.LLN0">
            <DataSet name="SPCSDS1" desc="(created on Monday, 27 September 2021 12:48:37)">
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO1" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO2" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO3" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO4" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO5" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO6" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO7" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO8" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO9" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO10" daName="ctlModel" fc="CF" />
            </DataSet>
            <DataSet name="DPCSDS2" desc="(created on Monday, 27 September 2021 12:49:33)">
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO1" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO2" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO3" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO4" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO5" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO6" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO7" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO8" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO9" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO10" fc="ST" />
            </DataSet>
            <DataSet name="MEASDS3" desc="(created on Monday, 27 September 2021 12:50:39)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS4" desc="(created on Monday, 27 September 2021 12:52:12)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS5" desc="(created on Monday, 27 September 2021 12:53:36)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS6" desc="(created on Monday, 27 September 2021 12:54:46)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <ReportControl name="SPCSCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="SPCSDS1" desc="(created on Monday, 27 September 2021 12:56:14)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="DPCSCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="DPCSDS2" desc="(created on Monday, September 27, 2021 12:57:38 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB3" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS3" desc="(created on Monday, September 27, 2021 12:58:26 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB4" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS4" desc="(created on Monday, September 27, 2021 12:59:14 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB5" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS5" desc="(created on Monday, September 27, 2021 12:59:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB6" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS6" desc="(created on Monday, September 27, 2021 1:00:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="GGIO" inst="1" lnType="SLD.GGIO1" prefix="SPCS" />
          <LN prefix="DPCS" lnClass="GGIO" inst="2" lnType="SLD.GGIO2" />
          <LN prefix="MEAS" lnClass="GGIO" inst="3" lnType="SLD.GGIO3" />
          <LN prefix="MEAS" lnClass="GGIO" inst="4" lnType="SLD.GGIO4" />
          <LN prefix="MEAS" lnClass="GGIO" inst="5" lnType="SLD.GGIO5" />
          <LN prefix="MEAS" lnClass="GGIO" inst="6" lnType="SLD.GGIO6" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="SIED1" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="1" sxy:y="50">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation max="0" />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" />
      <GSSE max="1" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_6" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_6" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_4" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1_2" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_4" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1_1" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_4">
            <DataSet name="MDS" desc="(created on Tuesday, September 21, 2021 3:12:42 PM)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, September 21, 2021 3:14:21 PM)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, September 21, 2021 3:14:38 PM)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="3" lnClass="PTOC" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, September 21, 2021 3:15:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:06:29 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:07:51 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV1" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1_1" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2_1" />
          <LN lnClass="PTOC" inst="3" lnType="PROT.PTOC3" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="SIED2" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="11" sxy:y="53">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation max="0" />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" />
      <GSSE max="1" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_7" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_7" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_5" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1_3" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_5" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1_2" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_5">
            <DataSet name="MDS" desc="(created on Tuesday, September 21, 2021 3:12:42 PM)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, September 21, 2021 3:14:21 PM)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, September 21, 2021 3:14:38 PM)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="3" lnClass="PTOC" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, September 21, 2021 3:15:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:06:29 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:07:51 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV1" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1_2" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2_2" />
          <LN lnClass="PTOC" inst="3" lnType="PROT.PTOC3" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="SIED3" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="1" sxy:y="38">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation max="0" />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" />
      <GSSE max="1" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_8" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_8" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_6" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1_4" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_6" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1_3" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_6">
            <DataSet name="MDS" desc="(created on Tuesday, September 21, 2021 3:12:42 PM)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, September 21, 2021 3:14:21 PM)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, September 21, 2021 3:14:38 PM)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="3" lnClass="PTOC" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, September 21, 2021 3:15:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:06:29 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:07:51 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV1" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1_3" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2_3" />
          <LN lnClass="PTOC" inst="3" lnType="PROT.PTOC3" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="SIED4" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="12" sxy:y="42">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation max="0" />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="10" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="1" />
      <GSSE max="1" />
      <FileHandling mms="true" ftp="false" ftps="false" />
      <ConfLNs fixPrefix="false" fixLnInst="false" />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_9" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_9" />
        </LDevice>
        <LDevice inst="MEAS">
          <LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0_7" />
          <LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1_5" />
        </LDevice>
        <LDevice inst="CTRL">
          <LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0_7" />
          <LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR1_4" />
        </LDevice>
        <LDevice inst="PROT">
          <LN0 lnClass="LLN0" inst="" lnType="PROT.LLN0_7">
            <DataSet name="MDS" desc="(created on Tuesday, September 21, 2021 3:12:42 PM)">
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotW" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVAr" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotVA" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="TotPF" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="Hz" daName="mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsAB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsBC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PPV.phsCA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="PhV.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.i" fc="MX" />
              <FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.neut" daName="cVal.mag.i" fc="MX" />
            </DataSet>
            <DataSet name="CDS" desc="(created on Tuesday, September 21, 2021 3:14:21 PM)">
              <FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="ST" />
            </DataSet>
            <DataSet name="PDS" desc="(created on Tuesday, September 21, 2021 3:14:38 PM)">
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOV" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="1" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="2" lnClass="PTOC" doName="Op" fc="ST" />
              <FCDA ldInst="PROT" lnInst="3" lnClass="PTOC" doName="Op" fc="ST" />
            </DataSet>
            <ReportControl name="MCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MDS" desc="(created on Tuesday, September 21, 2021 3:15:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5">
                <ClientLN iedName="HMIIED" apRef="P1" ldInst="LD0" lnClass="IHMI" lnInst="1" />
              </RptEnabled>
            </ReportControl>
            <ReportControl name="CCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="CDS" desc="(created on Wednesday, September 22, 2021 3:06:29 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="PCB" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="PDS" desc="(created on Wednesday, September 22, 2021 3:07:51 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="PTOV" inst="1" lnType="PROT.PTOV1" />
          <LN lnClass="PTOC" inst="1" lnType="PROT.PTOC1_4" />
          <LN lnClass="PTOC" inst="2" lnType="PROT.PTOC2_4" />
          <LN lnClass="PTOC" inst="3" lnType="PROT.PTOC3" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="SPLC" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="1" sxy:y="29">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="40" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="0" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling />
      <ConfLNs />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_10" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_10" />
        </LDevice>
        <LDevice inst="ServerLogicalDevice">
          <LN0 lnClass="LLN0" inst="" lnType="SLD.LLN0">
            <DataSet name="SPCSDS1" desc="(created on Monday, 27 September 2021 12:48:37)">
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO1" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO2" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO3" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO4" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO5" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO6" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO7" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO8" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO9" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO10" daName="ctlModel" fc="CF" />
            </DataSet>
            <DataSet name="DPCSDS2" desc="(created on Monday, 27 September 2021 12:49:33)">
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO1" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO2" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO3" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO4" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO5" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO6" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO7" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO8" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO9" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO10" fc="ST" />
            </DataSet>
            <DataSet name="MEASDS3" desc="(created on Monday, 27 September 2021 12:50:39)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS4" desc="(created on Monday, 27 September 2021 12:52:12)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS5" desc="(created on Monday, 27 September 2021 12:53:36)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS6" desc="(created on Monday, 27 September 2021 12:54:46)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <ReportControl name="SPCSCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="SPCSDS1" desc="(created on Monday, 27 September 2021 12:56:14)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="DPCSCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="DPCSDS2" desc="(created on Monday, September 27, 2021 12:57:38 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB3" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS3" desc="(created on Monday, September 27, 2021 12:58:26 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB4" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS4" desc="(created on Monday, September 27, 2021 12:59:14 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB5" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS5" desc="(created on Monday, September 27, 2021 12:59:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB6" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS6" desc="(created on Monday, September 27, 2021 1:00:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="GGIO" inst="1" lnType="SLD.GGIO1" prefix="SPCS" />
          <LN prefix="DPCS" lnClass="GGIO" inst="2" lnType="SLD.GGIO2" />
          <LN prefix="MEAS" lnClass="GGIO" inst="3" lnType="SLD.GGIO3" />
          <LN prefix="MEAS" lnClass="GGIO" inst="4" lnType="SLD.GGIO4" />
          <LN prefix="MEAS" lnClass="GGIO" inst="5" lnType="SLD.GGIO5" />
          <LN prefix="MEAS" lnClass="GGIO" inst="6" lnType="SLD.GGIO6" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="CPLC" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="36" sxy:y="35">
    <Services>
      <SettingGroups>
        <ConfSG resvTms="false" />
      </SettingGroups>
      <DynAssociation />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <SetDataSetValue />
      <DataSetDirectory />
      <ConfDataSet max="10" maxAttributes="100" modify="true" />
      <DynDataSet max="42" maxAttributes="42" />
      <ReadWrite />
      <ConfReportControl max="40" bufConf="false" />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Dyn" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="true" owner="true" />
      <GOOSE max="0" fixedOffs="false" />
      <GSSE max="0" />
      <FileHandling />
      <ConfLNs />
    </Services>
    <AccessPoint name="P1">
      <Server timeout="30">
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_13" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_13" />
        </LDevice>
        <LDevice inst="ServerLogicalDevice">
          <LN0 lnClass="LLN0" inst="" lnType="SLD.LLN0">
            <DataSet name="SPCSDS1" desc="(created on Monday, 27 September 2021 12:48:37)">
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO1" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO2" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO3" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO4" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO5" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO6" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO7" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO8" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO9" daName="ctlModel" fc="CF" />
              <FCDA ldInst="ServerLogicalDevice" prefix="SPCS" lnInst="1" lnClass="GGIO" doName="SPCSO10" daName="ctlModel" fc="CF" />
            </DataSet>
            <DataSet name="DPCSDS2" desc="(created on Monday, 27 September 2021 12:49:33)">
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO1" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO2" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO3" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO4" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO5" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO6" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO7" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO8" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO9" fc="ST" />
              <FCDA ldInst="ServerLogicalDevice" prefix="DPCS" lnInst="2" lnClass="GGIO" doName="DPCSO10" fc="ST" />
            </DataSet>
            <DataSet name="MEASDS3" desc="(created on Monday, 27 September 2021 12:50:39)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="3" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS4" desc="(created on Monday, 27 September 2021 12:52:12)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="4" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS5" desc="(created on Monday, 27 September 2021 12:53:36)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="5" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <DataSet name="MEASDS6" desc="(created on Monday, 27 September 2021 12:54:46)">
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn1" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn2" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn3" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn4" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn5" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn6" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn7" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn8" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn9" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn10" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn11" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn12" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn13" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn14" daName="mag.i" fc="MX" />
              <FCDA ldInst="ServerLogicalDevice" prefix="MEAS" lnInst="6" lnClass="GGIO" doName="AnIn15" daName="mag.i" fc="MX" />
            </DataSet>
            <ReportControl name="SPCSCB1" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="SPCSDS1" desc="(created on Monday, 27 September 2021 12:56:14)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="DPCSCB2" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="DPCSDS2" desc="(created on Monday, September 27, 2021 12:57:38 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB3" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS3" desc="(created on Monday, September 27, 2021 12:58:26 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB4" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS4" desc="(created on Monday, September 27, 2021 12:59:14 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB5" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS5" desc="(created on Monday, September 27, 2021 12:59:49 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
            <ReportControl name="MEASCB6" bufTime="500" buffered="true" confRev="1" intgPd="1000" indexed="true" datSet="MEASDS6" desc="(created on Monday, September 27, 2021 1:00:24 PM)">
              <TrgOps gi="true" dchg="true" qchg="true" dupd="true" period="true" />
              <OptFields bufOvfl="true" seqNum="true" timeStamp="true" dataSet="true" reasonCode="true" dataRef="true" entryID="true" configRef="true" />
              <RptEnabled max="5" />
            </ReportControl>
          </LN0>
          <LN lnClass="GGIO" inst="1" lnType="SLD.GGIO1_1" prefix="SPCS" />
          <LN prefix="DPCS" lnClass="GGIO" inst="2" lnType="SLD.GGIO2_1" />
          <LN prefix="MEAS" lnClass="GGIO" inst="3" lnType="SLD.GGIO3_1" />
          <LN prefix="MEAS" lnClass="GGIO" inst="4" lnType="SLD.GGIO4_1" />
          <LN prefix="MEAS" lnClass="GGIO" inst="5" lnType="SLD.GGIO5_1" />
          <LN prefix="MEAS" lnClass="GGIO" inst="6" lnType="SLD.GGIO6_1" />
          <LN prefix="MEAS" lnClass="GGIO" inst="7" lnType="SLD.GGIO7" />
          <LN prefix="MEAS" lnClass="GGIO" inst="8" lnType="SLD.GGIO8" />
          <LN prefix="MEAS" lnClass="GGIO" inst="9" lnType="SLD.GGIO9" />
          <LN prefix="MEAS" lnClass="GGIO" inst="10" lnType="SLD.GGIO10" />
          <LN prefix="MEAS" lnClass="GGIO" inst="11" lnType="SLD.GGIO11" />
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="HMIIED" manufacturer="Grid Software" originalSclVersion="2007" originalSclRevision="B" owner="482df49c-6f87-430b-a965-7810b233298c" sxy:x="42" sxy:y="43">
    <Services>
      <ConfDataSet max="1" />
      <ConfReportControl max="1" />
      <GOOSE max="1" />
      <DynAssociation max="10" />
      <GetDirectory />
      <GetDataObjectDefinition />
      <DataObjectDirectory />
      <GetDataSetValue />
      <DataSetDirectory />
      <ReadWrite />
      <GetCBValues />
      <ReportSettings cbName="Conf" datSet="Conf" rptID="Dyn" optFields="Dyn" bufTime="Dyn" trgOps="Dyn" intgPd="Dyn" resvTms="false" owner="false" />
      <ConfLNs fixPrefix="true" fixLnInst="true" />
      <ClientServices bufReport="true" goose="true" sv="true" maxAttributes="150" maxReports="100" maxGOOSE="0" maxSMV="0">
        <TimeSyncProt sntp="true" c37_238="true" other="true" />
      </ClientServices>
    </Services>
    <AccessPoint name="P1">
      <Server>
        <Authentication />
        <LDevice inst="LD0">
          <LN0 lnClass="LLN0" inst="" lnType="LD0.LLN0_12" />
          <LN lnClass="LPHD" inst="1" lnType="LD0.LPHD_12" />
          <LN lnClass="IHMI" inst="1" lnType="LD0.IHMI">
            <Inputs>
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:48)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:15:56)" iedName="MIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:36)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB1" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:16:45)" iedName="MIED2" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB2" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:02)" iedName="SIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:11)" iedName="SIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:21)" iedName="SIED3" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:17:30)" iedName="SIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="2" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:05)" iedName="TIED1" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:19)" iedName="TIED2" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotW" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVAr" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotVA" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="TotPF" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="Hz" daName="mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsAB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsBC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PPV.phsCA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="PhV.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsA" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsB" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.phsC" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
              <ExtRef desc="(created on Tuesday, 28 September 2021 21:18:30)" iedName="TIED4" ldInst="MEAS" lnClass="MMXU" lnInst="1" doName="A.neut" daName="cVal.mag.i" serviceType="Report" srcLDInst="PROT" srcLNClass="LLN0" srcCBName="MCB" />
            </Inputs>
          </LN>
        </LDevice>
      </Server>
    </AccessPoint>
  </IED>
  <IED name="MSW2" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="23" sxy:y="5">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="SSW2" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="23" sxy:y="21">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="TSW2" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="65" sxy:y="5">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="MSW1" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="33" sxy:y="3">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="TSW1" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="53" sxy:y="3">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="SSW1" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="32" sxy:y="21">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="CSW1" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="44" sxy:y="22">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="CSW2" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="47" sxy:y="29">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="CSW3" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="52" sxy:y="37">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="M2SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="2" sxy:y="13">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="S1SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="1" sxy:y="45">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="S2SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="11" sxy:y="48">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="S3SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="1" sxy:y="33">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="S4SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="12" sxy:y="37">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="T1SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="71" sxy:y="28">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="T2SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="63" sxy:y="36">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="T4SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="60" sxy:y="24">
    <AccessPoint name="AP1" />
  </IED>
  <IED name="M1SW" owner="482df49c-6f87-430b-a965-7810b233298c" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="2" sxy:y="18">
    <AccessPoint name="AP1" />
  </IED>
  <DataTypeTemplates>
    <LNodeType id="LD0.LLN0" lnClass="LLN0">
      <DO name="Beh" type="ENS_12310d44-4f0b-48bf-9e21-240a7f02e725" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0" lnClass="LLN0">
      <DO name="Beh" type="ENS_001d5763-d272-45e3-acee-9331849dfd3f" />
    </LNodeType>
    <LNodeType id="LD0.LPHD" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_9b77ce36-cde8-4cd7-8b24-30cb5cf5a45f" />
      <DO name="PhyHealth" type="ENS_479f6688-6dba-4fdd-8877-7076b592105f" />
      <DO name="Proxy" type="SPS_9b40b53c-bcfe-47ec-b2f8-ff9e695aedc6" />
      <DO name="PwrUp" type="SPS_2fbbf790-97eb-4a9a-8fa0-5600d46e4a1c" />
      <DO name="PwrDn" type="SPS_77dcdaa8-faca-4fe2-a429-9686abd5b9dc" />
      <DO name="PwrSupAlm" type="SPS_044c4371-c288-45d1-8ef6-101921295901" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1" lnClass="MMXU">
      <DO name="NamPlt" type="LPL_64c791f5-2528-413c-8873-7db150b2e485" />
      <DO name="TotW" type="MV_a2b1e0c3-992b-4990-aada-2afc77f2c90c" />
      <DO name="Beh" type="ENS_fd5de9dd-6433-49b1-8023-dc4db3aa816c" />
      <DO name="TotVAr" type="MV_08961be3-b887-4f82-a5b7-683b920f7434" />
      <DO name="TotVA" type="MV_5d6c085b-fef6-4b8e-a2b3-de3245d8635e" />
      <DO name="TotPF" type="MV_4cbcdea2-4306-4348-8450-b3a3e8d9cace" />
      <DO name="Hz" type="MV_652078b5-0742-447e-8b27-c75cb8320030" />
      <DO name="PPV" type="DEL_4769adc0-7ea2-458f-8d01-2a82f9e007d9" />
      <DO name="PhV" type="WYE_a2e992be-9a74-47fd-9674-16e8f2af65d5" />
      <DO name="A" type="WYE_53c8d46e-4d36-454c-8d0b-f88b74c950aa" />
      <DO name="PF" type="WYE_aa0d505a-2213-4a36-9fc6-a21fd4941e58" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU2" lnClass="MMXU">
      <DO name="NamPlt" type="LPL_9d03363d-de76-45d6-b91e-da7d05e8bac9" />
      <DO name="TotW" type="MV_790edd8d-e53d-458e-9cc0-6a39c96a32ea" />
      <DO name="Beh" type="ENS_8976437b-749a-4b47-b81e-1b42bd2e19f8" />
      <DO name="TotVAr" type="MV_350a77fe-85bf-4c2b-9d39-513b3e887ce8" />
      <DO name="TotVA" type="MV_fa5282e6-8698-43c6-b115-b0011aa53d49" />
      <DO name="TotPF" type="MV_81b1f552-4f06-4c48-aaca-6ac021c03d84" />
      <DO name="Hz" type="MV_e674661d-93e7-4f9c-9759-64728183b7db" />
      <DO name="PPV" type="DEL_f0222ddf-3c9d-495c-9650-73746314c9ed" />
      <DO name="PhV" type="WYE_1a189976-6305-4f43-a72a-c9ad56907e34" />
      <DO name="A" type="WYE_71bafa83-e9c8-4e6e-8952-ba45a052cbc0" />
      <DO name="PF" type="WYE_8b369fab-4f4a-4f90-8863-f5fb9c5810d9" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0" lnClass="LLN0">
      <DO name="Beh" type="ENS_ac135516-6fcc-41ac-9536-48b6cc038512" />
    </LNodeType>
    <LNodeType id="CTRL.RSYN" lnClass="RSYN">
      <DO name="Rel" type="SPS_60527e72-5e8f-4697-b1e9-8e0fdbb8aeda" />
      <DO name="Beh" type="ENS_46bb116a-552f-474d-9be2-aaefec18de20" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR1" lnClass="XCBR">
      <DO name="Beh" type="ENS_c0d75bd1-1a5e-4a6e-8241-df0cbe2dd180" />
      <DO name="Loc" type="SPS_a9cdaca7-22be-496c-8cc9-935c192d70f4" />
      <DO name="OpCnt" type="INS_59fd2967-993b-4691-86d0-9f6bf69ff98a" />
      <DO name="Pos" type="DPC_6f5289ee-3aa2-4819-9daf-1633c004c507" />
      <DO name="BlkOpn" type="SPC_ff7a4c23-e49a-4503-8218-2ab1478a7ac8" />
      <DO name="BlkCls" type="SPC_576ce1f2-c24a-4c4d-881d-c54a6a1edf3f" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR2" lnClass="XCBR">
      <DO name="Beh" type="ENS_be47af59-0da1-4c63-8b22-2964d74d392c" />
      <DO name="Loc" type="SPS_0b4f6f10-87e4-417d-b53a-fccebd76cdaa" />
      <DO name="OpCnt" type="INS_47be1ee5-894c-4bc6-82f0-759751127b74" />
      <DO name="Pos" type="DPC_4e712532-a3b2-4a20-976b-54cfbc1e3f36" />
      <DO name="BlkOpn" type="SPC_0acbdb4b-e874-4c7f-8f47-ede89646f4e9" />
      <DO name="BlkCls" type="SPC_e31005af-401b-4246-9d2d-2dbb4bee144c" />
    </LNodeType>
    <LNodeType id="PROT.LLN0" lnClass="LLN0">
      <DO name="Beh" type="ENS_2ec3538c-e956-420e-8419-dececab99c4d" />
    </LNodeType>
    <LNodeType id="PROT.PTOV" lnClass="PTOV">
      <DO name="Str" type="ACD_dcebf785-794d-4a89-afc0-6675f7493dbe" />
      <DO name="Beh" type="ENS_2aeb45e0-f559-4eee-97b5-da4055d1ec33" />
      <DO name="Op" type="ACT_792ab0d2-fdc5-45a0-9884-c96581497dfa" />
    </LNodeType>
    <LNodeType id="PROT.PTOC1" lnClass="PTOC">
      <DO name="Str" type="ACD_81cc188b-e264-46f2-8a18-ee792542640a" />
      <DO name="Beh" type="ENS_58021efa-447c-4122-a822-6afa2d9affa4" />
      <DO name="Op" type="ACT_cdecb104-c3f3-4eb9-8238-9e0f11c4bf07" />
    </LNodeType>
    <LNodeType id="PROT.PTOC2" lnClass="PTOC">
      <DO name="Str" type="ACD_5d9f5977-ef0f-4aba-bb09-40d3ae0a51fe" />
      <DO name="Beh" type="ENS_0b582698-9a91-4b11-ba4b-a0551830104e" />
      <DO name="Op" type="ACT_0fa4c8c4-4266-4ce0-bc34-289ad6b7e963" />
    </LNodeType>
    <LNodeType id="PROT.PTOF" lnClass="PTOF">
      <DO name="Str" type="ACD_9e7a4d45-530c-4dda-aa47-e0a98aecbaf5" />
      <DO name="Beh" type="ENS_e48b85c2-c3a7-481f-8b7c-d389bbc64ee6" />
      <DO name="Op" type="ACT_b39c5910-a995-46c3-aab3-83b4f6942c20" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR3" lnClass="XCBR">
      <DO name="Beh" type="ENS_247f2852-0095-4dc8-8ee0-5b3fb980c38f" />
      <DO name="Loc" type="SPS_ea24fde7-81b5-4435-b4b6-081758210e5b" />
      <DO name="OpCnt" type="INS_b6f04d8f-c85c-4396-acc1-6e372535b630" />
      <DO name="Pos" type="DPC_53dfbad9-fa4b-4779-af67-0433eaf0cf91" />
      <DO name="BlkOpn" type="SPC_af29b9b3-eba7-4c8d-a812-07261039b1b3" />
      <DO name="BlkCls" type="SPC_19a6207e-c923-4a57-b72b-39dc8cad833c" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_1" lnClass="LLN0">
      <DO name="Beh" type="ENS_dec181dc-183a-4c3a-9f30-76d4a1839cc5" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_1" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_f51b4b69-f391-4efa-aff2-e953a3a1802c" />
      <DO name="PhyHealth" type="ENS_3ce85fee-69cb-4f09-886e-dd5963aad257" />
      <DO name="Proxy" type="SPS_0b22c494-d1cc-4102-8a05-15deb6d95ce4" />
      <DO name="PwrUp" type="SPS_9e567ad6-49ba-4a33-9bd3-b99afdaf350c" />
      <DO name="PwrDn" type="SPS_75d7abbe-4c95-4b02-8ea2-f95b6b1194b9" />
      <DO name="PwrSupAlm" type="SPS_450af5d0-6ce6-4309-b5e3-8915da746abf" />
    </LNodeType>
    <LNodeType id="SLD.LLN0" lnClass="LLN0">
      <DO name="Beh" type="ENS_33899e3f-87d1-456f-b5fe-41f05779390a" />
    </LNodeType>
    <LNodeType id="SLD.GGIO1" lnClass="GGIO">
      <DO name="Beh" type="ENS_1ac33e6e-87fc-4ace-a5b4-9b34fb135ff7" />
      <DO name="SPCSO1" type="SPC_87ab1b82-7185-45da-8f5f-1da71de8498d" />
      <DO name="SPCSO2" type="SPC_74d0ed65-244f-41f7-aaf1-baa66b77589e" />
      <DO name="SPCSO3" type="SPC_20d919a5-ff42-4dfb-9dad-22d456ff9bda" />
      <DO name="SPCSO4" type="SPC_754e3a1e-c231-4109-902b-1fe3f22158de" />
      <DO name="SPCSO5" type="SPC_1fffd839-9e75-4089-9c45-50c0dd5742b9" />
      <DO name="SPCSO6" type="SPC_0c11e5e5-6e8d-4ae0-9a6b-3f9aed2d3f42" />
      <DO name="SPCSO7" type="SPC_ad7d9a6a-80d9-4957-9c2b-0a0351ab63de" />
      <DO name="SPCSO8" type="SPC_875b53f2-c3c8-4064-9fab-6f99b228d1d2" />
      <DO name="SPCSO9" type="SPC_af0d3b93-c651-4a38-b9d8-87197e126723" />
      <DO name="SPCSO10" type="SPC_c15d307d-9102-4f6a-af0b-15eb3c0ae485" />
    </LNodeType>
    <LNodeType id="SLD.GGIO2" lnClass="GGIO">
      <DO name="Beh" type="ENS_38f50feb-9eb6-4470-8a0c-c03f9092c0e7" />
      <DO name="DPCSO1" type="DPC_7d38c21a-2807-403a-be45-387f8b6f3b08" />
      <DO name="DPCSO2" type="DPC_bece2671-c0aa-4c73-a26c-be20c80dde3b" />
      <DO name="DPCSO3" type="DPC_48749bd3-1c1d-4214-84be-3f2f5fdb5e13" />
      <DO name="DPCSO4" type="DPC_c1d63c37-7f65-4edd-8e87-f994d639c566" />
      <DO name="DPCSO5" type="DPC_25243034-e80b-4d72-a20a-2834599d66b4" />
      <DO name="DPCSO6" type="DPC_c76a5a94-92a7-4fbd-8e0d-1d9b51b99199" />
      <DO name="DPCSO7" type="DPC_a4db3d9b-31c6-4d5b-ace5-0db71f17c9af" />
      <DO name="DPCSO8" type="DPC_077ae2af-fb29-47b4-9755-2041e6c1e557" />
      <DO name="DPCSO9" type="DPC_a7ba8288-ea63-43f1-a29a-30c205112292" />
      <DO name="DPCSO10" type="DPC_450721ae-5b71-4e35-8148-1096a5fabb4f" />
    </LNodeType>
    <LNodeType id="SLD.GGIO3" lnClass="GGIO">
      <DO name="Beh" type="ENS_7543a45c-3bbe-4ec1-8fac-eb9e69b63740" />
      <DO name="AnIn1" type="MV_977bcdf7-065d-40cd-8d0b-952df970c0f7" />
      <DO name="AnIn2" type="MV_b6d699a7-10e1-4959-82a2-41fb29a1face" />
      <DO name="AnIn3" type="MV_6b5a3f0e-a04b-49ea-9eaa-6574d5bd46ed" />
      <DO name="AnIn4" type="MV_591d0901-df5d-4b3d-838d-f0788640978a" />
      <DO name="AnIn5" type="MV_b210208d-22a5-4118-98f3-461f365fa24a" />
      <DO name="AnIn6" type="MV_44a1ae58-9a07-4ff2-9086-0f2600f50626" />
      <DO name="AnIn7" type="MV_fdb409db-0217-4be0-966d-cb587dce3c85" />
      <DO name="AnIn8" type="MV_11bb2846-c7db-4cf4-ac92-637575faae1f" />
      <DO name="AnIn9" type="MV_92c7caa6-78cd-48d1-8dbf-7696efe55188" />
      <DO name="AnIn10" type="MV_d7076120-9456-4755-a627-26384e525732" />
      <DO name="AnIn11" type="MV_8821ca7e-d889-4745-aff4-fa51005c93a7" />
      <DO name="AnIn12" type="MV_e88f62ba-a216-4fa9-8eed-4774daefe436" />
      <DO name="AnIn13" type="MV_3189e45b-1c79-4e96-8e6b-5a622c55017b" />
      <DO name="AnIn14" type="MV_89a32140-9126-4cdb-8e21-197fe9c9da05" />
      <DO name="AnIn15" type="MV_f6abd147-793c-452e-a86b-664142b5fbdd" />
    </LNodeType>
    <LNodeType id="SLD.GGIO4" lnClass="GGIO">
      <DO name="Beh" type="ENS_412f1afd-7894-4798-bad4-b81cc45cc335" />
      <DO name="AnIn1" type="MV_37b16b19-7d20-4bff-bdc4-ee6df6b0ab88" />
      <DO name="AnIn2" type="MV_0d13c3ba-15d7-4c0e-b50f-f2f9c55a1a9a" />
      <DO name="AnIn3" type="MV_509f993e-2ff8-4f22-8317-a3700dc73e96" />
      <DO name="AnIn4" type="MV_65b3b294-1fc5-4747-b391-0da3eade794b" />
      <DO name="AnIn5" type="MV_ff05c0a1-962a-444f-9e82-69b825d24cc3" />
      <DO name="AnIn6" type="MV_392f56d0-2747-4c17-9f0d-8f8fb8b5f12d" />
      <DO name="AnIn7" type="MV_2e778be4-1d3f-4860-aba0-32bf12b39c75" />
      <DO name="AnIn8" type="MV_5dbe59f1-1099-4fcb-9cb6-6c56eac7c615" />
      <DO name="AnIn9" type="MV_7178ac9f-37c9-4c0a-b26e-6d441233cb81" />
      <DO name="AnIn10" type="MV_fe02e486-76a7-4d7d-90ae-8fc28399612d" />
      <DO name="AnIn11" type="MV_68c8fb3f-f021-47a8-9ae4-a87f4bf9c3b2" />
      <DO name="AnIn12" type="MV_aa1d3a08-fcb6-4c5b-8140-96cdeb017856" />
      <DO name="AnIn13" type="MV_8d934d56-8e42-4124-b4ed-bf6a56784fdf" />
      <DO name="AnIn14" type="MV_8328c32a-04f7-4db4-ab77-2b86a68ee9a5" />
      <DO name="AnIn15" type="MV_2686b70f-9a15-4a63-b021-786bf43d6bda" />
    </LNodeType>
    <LNodeType id="SLD.GGIO5" lnClass="GGIO">
      <DO name="Beh" type="ENS_f2477956-f65c-4343-8fa6-88f16f658262" />
      <DO name="AnIn1" type="MV_47ab61bc-cb61-41c7-bf7b-f24301c9ddcf" />
      <DO name="AnIn2" type="MV_83a1f49e-8f65-49bb-9425-6b7f172788ff" />
      <DO name="AnIn3" type="MV_60ebbef0-4aaa-48db-91ad-b614245cd518" />
      <DO name="AnIn4" type="MV_aa496f18-213f-4428-96e4-b1971bf86e0e" />
      <DO name="AnIn5" type="MV_cc3af720-b0f3-4ba8-b731-b976cc7651e8" />
      <DO name="AnIn6" type="MV_a9e38cd3-e0d8-426f-896a-fd0c81fccb48" />
      <DO name="AnIn7" type="MV_cdc8e58b-4d34-4e22-b295-3a6176da5433" />
      <DO name="AnIn8" type="MV_4b7294e7-1e66-4f68-bec2-bb0253d4225c" />
      <DO name="AnIn9" type="MV_b089381a-16d3-4a41-a3df-e56a32137edd" />
      <DO name="AnIn10" type="MV_a98cf727-fe06-4fb1-9755-7844b8b2747a" />
      <DO name="AnIn11" type="MV_064968e2-a0f0-4636-b6e2-aec314cd6adf" />
      <DO name="AnIn12" type="MV_efb5457f-3d96-4767-81c8-305427226dec" />
      <DO name="AnIn13" type="MV_dde0a049-dd66-4399-ab8a-fac154bd7386" />
      <DO name="AnIn14" type="MV_98b69089-8d9f-4f3f-8dbc-54f8120bf095" />
      <DO name="AnIn15" type="MV_9fea139b-4e3f-4f73-a1cd-969d59f279ba" />
    </LNodeType>
    <LNodeType id="SLD.GGIO6" lnClass="GGIO">
      <DO name="Beh" type="ENS_ad8b785f-4f81-4a06-835e-9bd732e549b0" />
      <DO name="AnIn1" type="MV_35c70efb-858a-49f3-b504-8921a2948a04" />
      <DO name="AnIn2" type="MV_18be9fe8-8066-4b85-8520-22c1156ad21b" />
      <DO name="AnIn3" type="MV_340a06cc-9c13-4f15-91ba-7a735af073e8" />
      <DO name="AnIn4" type="MV_a77239ec-2d41-4983-bf6a-d93d781b238e" />
      <DO name="AnIn5" type="MV_3e05f9b9-ad6d-4d2a-8889-dcf1b4c579cc" />
      <DO name="AnIn6" type="MV_0324b3d7-f971-4869-8dda-8a54f200cbfc" />
      <DO name="AnIn7" type="MV_6337adb7-c305-42be-ae37-8014694a1ecc" />
      <DO name="AnIn8" type="MV_88ac84be-d71c-4816-bebd-5f678f828d18" />
      <DO name="AnIn9" type="MV_25b6580c-7d84-4a4c-b838-8e97482b67ad" />
      <DO name="AnIn10" type="MV_322f0b69-cf76-447b-9d65-9d3be4323204" />
      <DO name="AnIn11" type="MV_b2bcb8cd-4851-4a2f-b307-10d66baae500" />
      <DO name="AnIn12" type="MV_aa52ac20-440c-4c95-b18b-89c54d2d1c51" />
      <DO name="AnIn13" type="MV_34dfcc3e-7234-4bf2-842f-73b0b94d2f25" />
      <DO name="AnIn14" type="MV_3837501d-fde4-4a82-886d-d56b123df433" />
      <DO name="AnIn15" type="MV_1088b3da-05ec-49b3-8d86-6aa648eeaedd" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_2" lnClass="LLN0">
      <DO name="Beh" type="ENS_0d5a2f89-adfe-447e-a8d7-57024b333197" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_2" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_b92d0c13-21e3-4514-9aed-2bbebe2acc49" />
      <DO name="PhyHealth" type="ENS_8c4da56a-0222-4688-ba41-b7b580f82a0c" />
      <DO name="Proxy" type="SPS_20a28128-2b69-4154-b473-02922da36641" />
      <DO name="PwrUp" type="SPS_584242c7-4eb3-4372-a904-b81fbbac93b0" />
      <DO name="PwrDn" type="SPS_7028c838-0c6b-44e0-870b-03e3f7a41e0c" />
      <DO name="PwrSupAlm" type="SPS_9399fa4e-fe89-4338-a1e7-a541c015860f" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_1" lnClass="LLN0">
      <DO name="Beh" type="ENS_c7d42071-d2be-4e3a-a378-d206e7a4250f" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1_1" lnClass="MMXU">
      <DO name="Beh" type="ENS_08cf6c84-7377-48da-beed-0d88947e357d" />
      <DO name="A" type="WYE_00bfadf7-42b8-4d34-90c7-2798992a7e9d" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU2_1" lnClass="MMXU">
      <DO name="Beh" type="ENS_f38e2696-2318-425c-8da9-163ee1f72d48" />
      <DO name="A" type="WYE_4f892a8b-65e0-42c3-9dc4-a81b54ba1738" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_1" lnClass="LLN0">
      <DO name="Beh" type="ENS_f539b6fc-99d0-4fb0-bc70-c6cdd9833017" />
    </LNodeType>
    <LNodeType id="CTRL.CILO" lnClass="CILO">
      <DO name="EnaOpn" type="SPS_41ed6019-1b42-4a28-ba47-31cffe81f439" />
      <DO name="NamPlt" type="LPL_d9763dfe-60cb-48d3-81cd-a59f9cb16c36" />
      <DO name="Beh" type="ENS_5e2fc7a4-40a3-4a57-bce5-eef2442cb403" />
      <DO name="EnaCls" type="SPS_aa002350-4efd-44ce-8ba6-1edaa36d60c9" />
      <DO name="Mod" type="ENC_346ff466-41b7-41e0-80c2-0e8b24a4ae1f" />
    </LNodeType>
    <LNodeType id="CTRL.CSWI" lnClass="CSWI">
      <DO name="NamPlt" type="LPL_2c91117e-c99e-4ec5-94ec-e5a3bc92251e" />
      <DO name="Beh" type="ENS_66ad1e05-8fa8-4db3-bb7d-4823117d9dde" />
      <DO name="Loc" type="SPS_dc9b016a-ad6c-4aa9-8b36-e538d6c8b414" />
      <DO name="Health" type="ENS_615d82f1-8c98-448b-9a04-4332ff50329c" />
      <DO name="Mod" type="ENC_c8f01206-36cf-48cb-a52a-449eab7d17f1" />
      <DO name="Pos" type="DPC_7522e6a6-7595-4914-b70e-889450c0a435" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR" lnClass="XCBR">
      <DO name="Beh" type="ENS_6bbf9f4f-12e0-479d-9d35-df135f83e236" />
      <DO name="Loc" type="SPS_9b24c318-834b-4697-95fa-8107ae648311" />
      <DO name="OpCnt" type="INS_3c69991f-75b6-467b-88cd-bf20026ae8b1" />
      <DO name="Pos" type="DPC_f69bdb57-2f25-47d2-9920-ee711394eb92" />
      <DO name="BlkOpn" type="SPC_38cc82c1-94e0-4751-b4ac-4a085878668c" />
      <DO name="BlkCls" type="SPC_0d029287-1b25-4a05-b07f-249fec4c0f01" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_1" lnClass="LLN0">
      <DO name="Beh" type="ENS_2a44f876-e0db-4329-b6c7-2845d8e57c73" />
    </LNodeType>
    <LNodeType id="PROT.PDIF" lnClass="PDIF">
      <DO name="Str" type="ACD_90eda06a-c717-4cd7-bc34-6de0d7324bb4" />
      <DO name="Beh" type="ENS_1a4c5f95-1020-4f79-96e3-19d37f58d55b" />
      <DO name="Op" type="ACT_1a3ce86d-88d1-4955-866a-422aa1573e09" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_3" lnClass="LLN0">
      <DO name="Beh" type="ENS_b5d9b188-514c-4397-93b4-266790e94a6e" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_3" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_52803f2d-d47b-4e06-9fc0-cb4347e562d1" />
      <DO name="PhyHealth" type="ENS_4b893731-8d41-4420-a9c0-d553ca33a69e" />
      <DO name="Proxy" type="SPS_b222238c-9fd8-494b-9caf-caffa99a39b5" />
      <DO name="PwrUp" type="SPS_2cfb55c1-cf9a-4967-8b3f-026cd3433367" />
      <DO name="PwrDn" type="SPS_cb756b80-f5ef-444c-aa15-96c0aad9805c" />
      <DO name="PwrSupAlm" type="SPS_4fc95fa9-c269-4efa-8755-c82fd6189967" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_2" lnClass="LLN0">
      <DO name="Beh" type="ENS_66b3e04a-1547-43c5-81b5-345540af8838" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_2" lnClass="LLN0">
      <DO name="Beh" type="ENS_a62f2a33-6f1a-45e0-b20f-ea561dfa6afc" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_2" lnClass="LLN0">
      <DO name="Beh" type="ENS_2c0e22ad-ccf5-4ca9-a06c-7c7716c81136" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU" lnClass="MMXU">
      <DO name="TotW" type="MV_45786909-18b6-45c8-9a64-265138088f5b" />
      <DO name="Beh" type="ENS_134ffad7-e4b8-4f86-8bdf-d94721758c02" />
      <DO name="TotVAr" type="MV_e4cbb7fc-d2b2-4122-8be3-48a34f277bcf" />
      <DO name="TotVA" type="MV_81a92d82-036b-4a0c-a7d9-cb32a6f2867d" />
      <DO name="TotPF" type="MV_e68a8633-7da8-4b25-a646-42ee55a0623b" />
      <DO name="Hz" type="MV_8a604ddd-fc0c-4c51-a9d3-d620f0081f4d" />
      <DO name="PPV" type="DEL_adf536c6-dbff-4c3d-8e17-fc73b1358afd" />
      <DO name="PhV" type="WYE_7f748f13-24b8-405d-8525-cb6e8a2c9e88" />
      <DO name="A" type="WYE_d30b35dd-6a7d-4ab7-9f7d-03fb4237d04e" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR_1" lnClass="XCBR">
      <DO name="Beh" type="ENS_60bacfef-b3f4-46b5-a68b-0aaba4a952c3" />
      <DO name="Loc" type="SPS_b62bbe83-0ef1-4597-8b2d-c76d6f46e9e1" />
      <DO name="OpCnt" type="INS_a6db5b64-1df3-4363-adc0-4a88d5f13e1e" />
      <DO name="Pos" type="DPC_54c08b2b-fd86-460f-85ec-072befbd067e" />
      <DO name="BlkOpn" type="SPC_3ae05d6a-7cf0-4262-a00d-2335af4204f5" />
      <DO name="BlkCls" type="SPC_000aba29-b0cb-47d4-9f6d-7197a6d0c88f" />
    </LNodeType>
    <LNodeType id="PROT.PTOC" lnClass="PTOC">
      <DO name="Str" type="ACD_4d2e0947-dc8f-47e2-803a-8693ec90eb28" />
      <DO name="Beh" type="ENS_5236a8ac-d220-427c-9458-0ee450fb0378" />
      <DO name="Op" type="ACT_8093ce7e-8c98-4c93-af96-eacc135c9b64" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_4" lnClass="LLN0">
      <DO name="Beh" type="ENS_b5d9b188-514c-4397-93b4-266790e94a6e" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_4" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_52803f2d-d47b-4e06-9fc0-cb4347e562d1" />
      <DO name="PhyHealth" type="ENS_4b893731-8d41-4420-a9c0-d553ca33a69e" />
      <DO name="Proxy" type="SPS_b222238c-9fd8-494b-9caf-caffa99a39b5" />
      <DO name="PwrUp" type="SPS_2cfb55c1-cf9a-4967-8b3f-026cd3433367" />
      <DO name="PwrDn" type="SPS_cb756b80-f5ef-444c-aa15-96c0aad9805c" />
      <DO name="PwrSupAlm" type="SPS_4fc95fa9-c269-4efa-8755-c82fd6189967" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_3" lnClass="LLN0">
      <DO name="Beh" type="ENS_66b3e04a-1547-43c5-81b5-345540af8838" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_3" lnClass="LLN0">
      <DO name="Beh" type="ENS_a62f2a33-6f1a-45e0-b20f-ea561dfa6afc" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_3" lnClass="LLN0">
      <DO name="Beh" type="ENS_2c0e22ad-ccf5-4ca9-a06c-7c7716c81136" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR_2" lnClass="XCBR">
      <DO name="Beh" type="ENS_60bacfef-b3f4-46b5-a68b-0aaba4a952c3" />
      <DO name="Loc" type="SPS_b62bbe83-0ef1-4597-8b2d-c76d6f46e9e1" />
      <DO name="OpCnt" type="INS_a6db5b64-1df3-4363-adc0-4a88d5f13e1e" />
      <DO name="Pos" type="DPC_54c08b2b-fd86-460f-85ec-072befbd067e" />
      <DO name="BlkOpn" type="SPC_3ae05d6a-7cf0-4262-a00d-2335af4204f5" />
      <DO name="BlkCls" type="SPC_000aba29-b0cb-47d4-9f6d-7197a6d0c88f" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_5" lnClass="LLN0">
      <DO name="Beh" type="ENS_dec181dc-183a-4c3a-9f30-76d4a1839cc5" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_5" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_f51b4b69-f391-4efa-aff2-e953a3a1802c" />
      <DO name="PhyHealth" type="ENS_3ce85fee-69cb-4f09-886e-dd5963aad257" />
      <DO name="Proxy" type="SPS_0b22c494-d1cc-4102-8a05-15deb6d95ce4" />
      <DO name="PwrUp" type="SPS_9e567ad6-49ba-4a33-9bd3-b99afdaf350c" />
      <DO name="PwrDn" type="SPS_75d7abbe-4c95-4b02-8ea2-f95b6b1194b9" />
      <DO name="PwrSupAlm" type="SPS_450af5d0-6ce6-4309-b5e3-8915da746abf" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_6" lnClass="LLN0">
      <DO name="Beh" type="ENS_ad5b245f-e11f-4bbf-aaee-88745b142bcb" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_4" lnClass="LLN0">
      <DO name="Beh" type="ENS_f4486011-492f-44c5-b34e-d98ef57368dd" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1_2" lnClass="MMXU">
      <DO name="TotW" type="MV_8c6e2493-50bc-4634-9929-39eee20f7740" />
      <DO name="Beh" type="ENS_100f8ea3-50a9-4b4e-83e4-cb35cd0bc632" />
      <DO name="TotVAr" type="MV_f6eaa884-d398-4a19-aa28-b7d48eb5290d" />
      <DO name="TotVA" type="MV_64a65280-fdc0-4113-ac1d-a04d35c28c93" />
      <DO name="TotPF" type="MV_892744f3-5743-4098-8ac4-b506d66d4b05" />
      <DO name="Hz" type="MV_305d4675-b515-4540-ba06-be8d856eac7d" />
      <DO name="PPV" type="DEL_2d7eb145-fc2e-4d0f-ad81-bb9ff115ab2a" />
      <DO name="PhV" type="WYE_55c81819-1202-40d1-af19-4fbeab705103" />
      <DO name="A" type="WYE_07398044-80b9-4412-8b84-e89c87846e06" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_4" lnClass="LLN0">
      <DO name="Beh" type="ENS_fd54008b-1b7e-4cc4-8eb3-ae56652df620" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR1_1" lnClass="XCBR">
      <DO name="Beh" type="ENS_1394c8a2-dc37-4c3a-8c06-32c6b39b2d5a" />
      <DO name="Loc" type="SPS_acda07a5-8009-4d02-9b11-56f09d077077" />
      <DO name="OpCnt" type="INS_229e9aa4-14bf-4c83-bb28-93a9b45873b7" />
      <DO name="Pos" type="DPC_14e052be-0e1f-4e8d-933e-cdac803c2c9e" />
      <DO name="BlkOpn" type="SPC_ca93fc86-dc5d-463e-b305-ebca2b843546" />
      <DO name="BlkCls" type="SPC_5f35861c-866c-4357-866a-153b39311c63" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_4" lnClass="LLN0">
      <DO name="Beh" type="ENS_8e91d766-5563-48c8-a1fe-88bacabdef67" />
    </LNodeType>
    <LNodeType id="PROT.PTOV1" lnClass="PTOV">
      <DO name="Str" type="ACD_d0065460-927b-4632-98cc-298ac023355f" />
      <DO name="Beh" type="ENS_ad431532-da0f-44e0-8787-f0e6c882943e" />
      <DO name="Op" type="ACT_1f99ceb3-d237-4235-8172-ea818d553e21" />
    </LNodeType>
    <LNodeType id="PROT.PTOC1_1" lnClass="PTOC">
      <DO name="Str" type="ACD_a1970ec6-5f08-4870-9680-81b5f37e2ef8" />
      <DO name="Beh" type="ENS_55be1a9a-a345-40e5-891a-2abd4310d844" />
      <DO name="Op" type="ACT_5165f2d1-7b28-44d7-974f-1fc79249fb7d" />
    </LNodeType>
    <LNodeType id="PROT.PTOC2_1" lnClass="PTOC">
      <DO name="Str" type="ACD_c4f9decb-efda-4922-b5ee-3b8be0238b26" />
      <DO name="Beh" type="ENS_1a98be3a-82c3-429d-82d0-888220f665dd" />
      <DO name="Op" type="ACT_437893b7-3ff9-423b-a0fb-f255b07ebed3" />
    </LNodeType>
    <LNodeType id="PROT.PTOC3" lnClass="PTOC">
      <DO name="Str" type="ACD_a34e0e93-d0e4-4468-a718-974ab5f18544" />
      <DO name="Beh" type="ENS_dbe9ef35-2448-4f2a-8ddc-90882778633e" />
      <DO name="Op" type="ACT_46331ede-65b4-4814-8aa9-93a2e1beb23c" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_6" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1c11e902-15a4-464f-8089-7b9d4da792a9" />
      <DO name="PhyHealth" type="ENS_3af5572c-f374-49c5-adc7-b208fe371141" />
      <DO name="Proxy" type="SPS_b57c1915-a2bd-4409-b9fc-9c4e85cd3644" />
      <DO name="PwrUp" type="SPS_d34818a3-8dc1-426e-b5cb-1cc7e2cf863b" />
      <DO name="PwrDn" type="SPS_604fbec9-0e22-4a4a-8ebd-03cffae90e7a" />
      <DO name="PwrSupAlm" type="SPS_10229666-40c9-4665-9dae-853cbb689f95" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_7" lnClass="LLN0">
      <DO name="Beh" type="ENS_ad5b245f-e11f-4bbf-aaee-88745b142bcb" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_5" lnClass="LLN0">
      <DO name="Beh" type="ENS_f4486011-492f-44c5-b34e-d98ef57368dd" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1_3" lnClass="MMXU">
      <DO name="TotW" type="MV_8c6e2493-50bc-4634-9929-39eee20f7740" />
      <DO name="Beh" type="ENS_100f8ea3-50a9-4b4e-83e4-cb35cd0bc632" />
      <DO name="TotVAr" type="MV_f6eaa884-d398-4a19-aa28-b7d48eb5290d" />
      <DO name="TotVA" type="MV_64a65280-fdc0-4113-ac1d-a04d35c28c93" />
      <DO name="TotPF" type="MV_892744f3-5743-4098-8ac4-b506d66d4b05" />
      <DO name="Hz" type="MV_305d4675-b515-4540-ba06-be8d856eac7d" />
      <DO name="PPV" type="DEL_2d7eb145-fc2e-4d0f-ad81-bb9ff115ab2a" />
      <DO name="PhV" type="WYE_55c81819-1202-40d1-af19-4fbeab705103" />
      <DO name="A" type="WYE_07398044-80b9-4412-8b84-e89c87846e06" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_5" lnClass="LLN0">
      <DO name="Beh" type="ENS_fd54008b-1b7e-4cc4-8eb3-ae56652df620" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR1_2" lnClass="XCBR">
      <DO name="Beh" type="ENS_1394c8a2-dc37-4c3a-8c06-32c6b39b2d5a" />
      <DO name="Loc" type="SPS_acda07a5-8009-4d02-9b11-56f09d077077" />
      <DO name="OpCnt" type="INS_229e9aa4-14bf-4c83-bb28-93a9b45873b7" />
      <DO name="Pos" type="DPC_14e052be-0e1f-4e8d-933e-cdac803c2c9e" />
      <DO name="BlkOpn" type="SPC_ca93fc86-dc5d-463e-b305-ebca2b843546" />
      <DO name="BlkCls" type="SPC_5f35861c-866c-4357-866a-153b39311c63" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_5" lnClass="LLN0">
      <DO name="Beh" type="ENS_8e91d766-5563-48c8-a1fe-88bacabdef67" />
    </LNodeType>
    <LNodeType id="PROT.PTOC1_2" lnClass="PTOC">
      <DO name="Str" type="ACD_a1970ec6-5f08-4870-9680-81b5f37e2ef8" />
      <DO name="Beh" type="ENS_55be1a9a-a345-40e5-891a-2abd4310d844" />
      <DO name="Op" type="ACT_5165f2d1-7b28-44d7-974f-1fc79249fb7d" />
    </LNodeType>
    <LNodeType id="PROT.PTOC2_2" lnClass="PTOC">
      <DO name="Str" type="ACD_c4f9decb-efda-4922-b5ee-3b8be0238b26" />
      <DO name="Beh" type="ENS_1a98be3a-82c3-429d-82d0-888220f665dd" />
      <DO name="Op" type="ACT_437893b7-3ff9-423b-a0fb-f255b07ebed3" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_7" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1c11e902-15a4-464f-8089-7b9d4da792a9" />
      <DO name="PhyHealth" type="ENS_3af5572c-f374-49c5-adc7-b208fe371141" />
      <DO name="Proxy" type="SPS_b57c1915-a2bd-4409-b9fc-9c4e85cd3644" />
      <DO name="PwrUp" type="SPS_d34818a3-8dc1-426e-b5cb-1cc7e2cf863b" />
      <DO name="PwrDn" type="SPS_604fbec9-0e22-4a4a-8ebd-03cffae90e7a" />
      <DO name="PwrSupAlm" type="SPS_10229666-40c9-4665-9dae-853cbb689f95" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_8" lnClass="LLN0">
      <DO name="Beh" type="ENS_ad5b245f-e11f-4bbf-aaee-88745b142bcb" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_6" lnClass="LLN0">
      <DO name="Beh" type="ENS_f4486011-492f-44c5-b34e-d98ef57368dd" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1_4" lnClass="MMXU">
      <DO name="TotW" type="MV_8c6e2493-50bc-4634-9929-39eee20f7740" />
      <DO name="Beh" type="ENS_100f8ea3-50a9-4b4e-83e4-cb35cd0bc632" />
      <DO name="TotVAr" type="MV_f6eaa884-d398-4a19-aa28-b7d48eb5290d" />
      <DO name="TotVA" type="MV_64a65280-fdc0-4113-ac1d-a04d35c28c93" />
      <DO name="TotPF" type="MV_892744f3-5743-4098-8ac4-b506d66d4b05" />
      <DO name="Hz" type="MV_305d4675-b515-4540-ba06-be8d856eac7d" />
      <DO name="PPV" type="DEL_2d7eb145-fc2e-4d0f-ad81-bb9ff115ab2a" />
      <DO name="PhV" type="WYE_55c81819-1202-40d1-af19-4fbeab705103" />
      <DO name="A" type="WYE_07398044-80b9-4412-8b84-e89c87846e06" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_6" lnClass="LLN0">
      <DO name="Beh" type="ENS_fd54008b-1b7e-4cc4-8eb3-ae56652df620" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR1_3" lnClass="XCBR">
      <DO name="Beh" type="ENS_1394c8a2-dc37-4c3a-8c06-32c6b39b2d5a" />
      <DO name="Loc" type="SPS_acda07a5-8009-4d02-9b11-56f09d077077" />
      <DO name="OpCnt" type="INS_229e9aa4-14bf-4c83-bb28-93a9b45873b7" />
      <DO name="Pos" type="DPC_14e052be-0e1f-4e8d-933e-cdac803c2c9e" />
      <DO name="BlkOpn" type="SPC_ca93fc86-dc5d-463e-b305-ebca2b843546" />
      <DO name="BlkCls" type="SPC_5f35861c-866c-4357-866a-153b39311c63" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_6" lnClass="LLN0">
      <DO name="Beh" type="ENS_8e91d766-5563-48c8-a1fe-88bacabdef67" />
    </LNodeType>
    <LNodeType id="PROT.PTOC1_3" lnClass="PTOC">
      <DO name="Str" type="ACD_a1970ec6-5f08-4870-9680-81b5f37e2ef8" />
      <DO name="Beh" type="ENS_55be1a9a-a345-40e5-891a-2abd4310d844" />
      <DO name="Op" type="ACT_5165f2d1-7b28-44d7-974f-1fc79249fb7d" />
    </LNodeType>
    <LNodeType id="PROT.PTOC2_3" lnClass="PTOC">
      <DO name="Str" type="ACD_c4f9decb-efda-4922-b5ee-3b8be0238b26" />
      <DO name="Beh" type="ENS_1a98be3a-82c3-429d-82d0-888220f665dd" />
      <DO name="Op" type="ACT_437893b7-3ff9-423b-a0fb-f255b07ebed3" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_8" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1c11e902-15a4-464f-8089-7b9d4da792a9" />
      <DO name="PhyHealth" type="ENS_3af5572c-f374-49c5-adc7-b208fe371141" />
      <DO name="Proxy" type="SPS_b57c1915-a2bd-4409-b9fc-9c4e85cd3644" />
      <DO name="PwrUp" type="SPS_d34818a3-8dc1-426e-b5cb-1cc7e2cf863b" />
      <DO name="PwrDn" type="SPS_604fbec9-0e22-4a4a-8ebd-03cffae90e7a" />
      <DO name="PwrSupAlm" type="SPS_10229666-40c9-4665-9dae-853cbb689f95" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_9" lnClass="LLN0">
      <DO name="Beh" type="ENS_ad5b245f-e11f-4bbf-aaee-88745b142bcb" />
    </LNodeType>
    <LNodeType id="MEAS.LLN0_7" lnClass="LLN0">
      <DO name="Beh" type="ENS_f4486011-492f-44c5-b34e-d98ef57368dd" />
    </LNodeType>
    <LNodeType id="MEAS.MMXU1_5" lnClass="MMXU">
      <DO name="TotW" type="MV_8c6e2493-50bc-4634-9929-39eee20f7740" />
      <DO name="Beh" type="ENS_100f8ea3-50a9-4b4e-83e4-cb35cd0bc632" />
      <DO name="TotVAr" type="MV_f6eaa884-d398-4a19-aa28-b7d48eb5290d" />
      <DO name="TotVA" type="MV_64a65280-fdc0-4113-ac1d-a04d35c28c93" />
      <DO name="TotPF" type="MV_892744f3-5743-4098-8ac4-b506d66d4b05" />
      <DO name="Hz" type="MV_305d4675-b515-4540-ba06-be8d856eac7d" />
      <DO name="PPV" type="DEL_2d7eb145-fc2e-4d0f-ad81-bb9ff115ab2a" />
      <DO name="PhV" type="WYE_55c81819-1202-40d1-af19-4fbeab705103" />
      <DO name="A" type="WYE_07398044-80b9-4412-8b84-e89c87846e06" />
    </LNodeType>
    <LNodeType id="CTRL.LLN0_7" lnClass="LLN0">
      <DO name="Beh" type="ENS_fd54008b-1b7e-4cc4-8eb3-ae56652df620" />
    </LNodeType>
    <LNodeType id="CTRL.XCBR1_4" lnClass="XCBR">
      <DO name="Beh" type="ENS_1394c8a2-dc37-4c3a-8c06-32c6b39b2d5a" />
      <DO name="Loc" type="SPS_acda07a5-8009-4d02-9b11-56f09d077077" />
      <DO name="OpCnt" type="INS_229e9aa4-14bf-4c83-bb28-93a9b45873b7" />
      <DO name="Pos" type="DPC_14e052be-0e1f-4e8d-933e-cdac803c2c9e" />
      <DO name="BlkOpn" type="SPC_ca93fc86-dc5d-463e-b305-ebca2b843546" />
      <DO name="BlkCls" type="SPC_5f35861c-866c-4357-866a-153b39311c63" />
    </LNodeType>
    <LNodeType id="PROT.LLN0_7" lnClass="LLN0">
      <DO name="Beh" type="ENS_8e91d766-5563-48c8-a1fe-88bacabdef67" />
    </LNodeType>
    <LNodeType id="PROT.PTOC1_4" lnClass="PTOC">
      <DO name="Str" type="ACD_a1970ec6-5f08-4870-9680-81b5f37e2ef8" />
      <DO name="Beh" type="ENS_55be1a9a-a345-40e5-891a-2abd4310d844" />
      <DO name="Op" type="ACT_5165f2d1-7b28-44d7-974f-1fc79249fb7d" />
    </LNodeType>
    <LNodeType id="PROT.PTOC2_4" lnClass="PTOC">
      <DO name="Str" type="ACD_c4f9decb-efda-4922-b5ee-3b8be0238b26" />
      <DO name="Beh" type="ENS_1a98be3a-82c3-429d-82d0-888220f665dd" />
      <DO name="Op" type="ACT_437893b7-3ff9-423b-a0fb-f255b07ebed3" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_9" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_1c11e902-15a4-464f-8089-7b9d4da792a9" />
      <DO name="PhyHealth" type="ENS_3af5572c-f374-49c5-adc7-b208fe371141" />
      <DO name="Proxy" type="SPS_b57c1915-a2bd-4409-b9fc-9c4e85cd3644" />
      <DO name="PwrUp" type="SPS_d34818a3-8dc1-426e-b5cb-1cc7e2cf863b" />
      <DO name="PwrDn" type="SPS_604fbec9-0e22-4a4a-8ebd-03cffae90e7a" />
      <DO name="PwrSupAlm" type="SPS_10229666-40c9-4665-9dae-853cbb689f95" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_10" lnClass="LLN0">
      <DO name="Beh" type="ENS_dec181dc-183a-4c3a-9f30-76d4a1839cc5" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_10" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_f51b4b69-f391-4efa-aff2-e953a3a1802c" />
      <DO name="PhyHealth" type="ENS_3ce85fee-69cb-4f09-886e-dd5963aad257" />
      <DO name="Proxy" type="SPS_0b22c494-d1cc-4102-8a05-15deb6d95ce4" />
      <DO name="PwrUp" type="SPS_9e567ad6-49ba-4a33-9bd3-b99afdaf350c" />
      <DO name="PwrDn" type="SPS_75d7abbe-4c95-4b02-8ea2-f95b6b1194b9" />
      <DO name="PwrSupAlm" type="SPS_450af5d0-6ce6-4309-b5e3-8915da746abf" />
    </LNodeType>
    <LNodeType id="GENERIC_IHMI" lnClass="IHMI">
      <DO name="Beh" type="GENERIC_ENS_Beh" />
      <DO name="NamPlt" type="GENERIC_LPL" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_11" lnClass="LLN0">
      <DO name="NamPlt" type="LPL_a22e70c5-fbf5-49a2-83c9-f325d0de1e8c" />
      <DO name="Beh" type="ENS_8b3e5d9a-3374-4846-bfb7-7d43553be95c" />
      <DO name="Loc" type="SPS_8c87e730-1372-4015-a7dd-176184596175" />
      <DO name="Health" type="ENS_e103174a-f387-4962-a71e-d58138a14da4" />
      <DO name="Mod" type="ENC_d211f969-3900-4cf2-9ff2-028a699c1170" />
    </LNodeType>
    <LNodeType id="LPHD_83cbb97e-c58c-49cd-9bbf-54081bc0326d" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_2eeb3a70-4e28-4788-bd38-ebf95b390359" />
      <DO name="PhyHealth" type="ENS_f1b9d8c3-929a-4749-af39-5ca7d76b2742" />
      <DO name="Proxy" type="SPS_2950cfc6-52a9-4375-ac64-f1fa12512081" />
    </LNodeType>
    <LNodeType id="IHMI_b6860cfc-abe8-4ace-ae28-1bcaeef88188" lnClass="IHMI">
      <DO name="NamPlt" type="LPL_ff7ec900-d5fb-4e3b-ba1d-6df0294d8b61" />
      <DO name="Beh" type="ENS_033a5c95-387b-4d8b-9cd0-d38f25865fd6" />
      <DO name="Health" type="ENS_c49659ad-a32a-4abc-82c8-a03b37607738" />
      <DO name="Mod" type="ENC_0fe55817-5516-49b9-9da8-102c4d30159b" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_11" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_2eeb3a70-4e28-4788-bd38-ebf95b390359" />
      <DO name="PhyHealth" type="ENS_f1b9d8c3-929a-4749-af39-5ca7d76b2742" />
      <DO name="Proxy" type="SPS_2950cfc6-52a9-4375-ac64-f1fa12512081" />
    </LNodeType>
    <LNodeType id="LD0.IHMI" lnClass="IHMI">
      <DO name="NamPlt" type="LPL_ff7ec900-d5fb-4e3b-ba1d-6df0294d8b61" />
      <DO name="Beh" type="ENS_033a5c95-387b-4d8b-9cd0-d38f25865fd6" />
      <DO name="Health" type="ENS_c49659ad-a32a-4abc-82c8-a03b37607738" />
      <DO name="Mod" type="ENC_0fe55817-5516-49b9-9da8-102c4d30159b" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_12" lnClass="LLN0">
      <DO name="NamPlt" type="LPL_a22e70c5-fbf5-49a2-83c9-f325d0de1e8c" />
      <DO name="Beh" type="ENS_8b3e5d9a-3374-4846-bfb7-7d43553be95c" />
      <DO name="Loc" type="SPS_8c87e730-1372-4015-a7dd-176184596175" />
      <DO name="Health" type="ENS_e103174a-f387-4962-a71e-d58138a14da4" />
      <DO name="Mod" type="ENC_d211f969-3900-4cf2-9ff2-028a699c1170" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_12" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_2eeb3a70-4e28-4788-bd38-ebf95b390359" />
      <DO name="PhyHealth" type="ENS_f1b9d8c3-929a-4749-af39-5ca7d76b2742" />
      <DO name="Proxy" type="SPS_2950cfc6-52a9-4375-ac64-f1fa12512081" />
    </LNodeType>
    <LNodeType id="LD0.LLN0_13" lnClass="LLN0">
      <DO name="Beh" type="ENS_dec181dc-183a-4c3a-9f30-76d4a1839cc5" />
    </LNodeType>
    <LNodeType id="LD0.LPHD_13" lnClass="LPHD">
      <DO name="PhyNam" type="DPL_f51b4b69-f391-4efa-aff2-e953a3a1802c" />
      <DO name="PhyHealth" type="ENS_3ce85fee-69cb-4f09-886e-dd5963aad257" />
      <DO name="Proxy" type="SPS_0b22c494-d1cc-4102-8a05-15deb6d95ce4" />
      <DO name="PwrUp" type="SPS_9e567ad6-49ba-4a33-9bd3-b99afdaf350c" />
      <DO name="PwrDn" type="SPS_75d7abbe-4c95-4b02-8ea2-f95b6b1194b9" />
      <DO name="PwrSupAlm" type="SPS_450af5d0-6ce6-4309-b5e3-8915da746abf" />
    </LNodeType>
    <LNodeType id="SLD.GGIO1_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_1ac33e6e-87fc-4ace-a5b4-9b34fb135ff7" />
      <DO name="SPCSO1" type="SPC_87ab1b82-7185-45da-8f5f-1da71de8498d" />
      <DO name="SPCSO2" type="SPC_74d0ed65-244f-41f7-aaf1-baa66b77589e" />
      <DO name="SPCSO3" type="SPC_20d919a5-ff42-4dfb-9dad-22d456ff9bda" />
      <DO name="SPCSO4" type="SPC_754e3a1e-c231-4109-902b-1fe3f22158de" />
      <DO name="SPCSO5" type="SPC_1fffd839-9e75-4089-9c45-50c0dd5742b9" />
      <DO name="SPCSO6" type="SPC_0c11e5e5-6e8d-4ae0-9a6b-3f9aed2d3f42" />
      <DO name="SPCSO7" type="SPC_ad7d9a6a-80d9-4957-9c2b-0a0351ab63de" />
      <DO name="SPCSO8" type="SPC_875b53f2-c3c8-4064-9fab-6f99b228d1d2" />
      <DO name="SPCSO9" type="SPC_af0d3b93-c651-4a38-b9d8-87197e126723" />
      <DO name="SPCSO10" type="SPC_c15d307d-9102-4f6a-af0b-15eb3c0ae485" />
      <DO name="SPCSO11" type="SPC_956d746a-8788-4d2c-81dd-a1f98492ff5c" />
      <DO name="SPCSO12" type="SPC_38cf841f-921e-4a7e-9dc9-4a6eaa24a35d" />
    </LNodeType>
    <LNodeType id="SLD.GGIO2_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_38f50feb-9eb6-4470-8a0c-c03f9092c0e7" />
      <DO name="DPCSO1" type="DPC_7d38c21a-2807-403a-be45-387f8b6f3b08" />
      <DO name="DPCSO2" type="DPC_bece2671-c0aa-4c73-a26c-be20c80dde3b" />
      <DO name="DPCSO3" type="DPC_48749bd3-1c1d-4214-84be-3f2f5fdb5e13" />
      <DO name="DPCSO4" type="DPC_c1d63c37-7f65-4edd-8e87-f994d639c566" />
      <DO name="DPCSO5" type="DPC_25243034-e80b-4d72-a20a-2834599d66b4" />
      <DO name="DPCSO6" type="DPC_c76a5a94-92a7-4fbd-8e0d-1d9b51b99199" />
      <DO name="DPCSO7" type="DPC_a4db3d9b-31c6-4d5b-ace5-0db71f17c9af" />
      <DO name="DPCSO8" type="DPC_077ae2af-fb29-47b4-9755-2041e6c1e557" />
      <DO name="DPCSO9" type="DPC_a7ba8288-ea63-43f1-a29a-30c205112292" />
      <DO name="DPCSO10" type="DPC_450721ae-5b71-4e35-8148-1096a5fabb4f" />
      <DO name="DPCSO11" type="DPC_8722f29c-cdd8-4d93-95ed-20ef0285faae" />
      <DO name="DPCSO12" type="DPC_169bb01f-6376-469c-bdad-0e701a0ce70d" />
    </LNodeType>
    <LNodeType id="SLD.GGIO3_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_7543a45c-3bbe-4ec1-8fac-eb9e69b63740" />
      <DO name="AnIn1" type="MV_977bcdf7-065d-40cd-8d0b-952df970c0f7" />
      <DO name="AnIn2" type="MV_b6d699a7-10e1-4959-82a2-41fb29a1face" />
      <DO name="AnIn3" type="MV_6b5a3f0e-a04b-49ea-9eaa-6574d5bd46ed" />
      <DO name="AnIn4" type="MV_591d0901-df5d-4b3d-838d-f0788640978a" />
      <DO name="AnIn5" type="MV_b210208d-22a5-4118-98f3-461f365fa24a" />
      <DO name="AnIn6" type="MV_44a1ae58-9a07-4ff2-9086-0f2600f50626" />
      <DO name="AnIn7" type="MV_fdb409db-0217-4be0-966d-cb587dce3c85" />
      <DO name="AnIn8" type="MV_11bb2846-c7db-4cf4-ac92-637575faae1f" />
      <DO name="AnIn9" type="MV_92c7caa6-78cd-48d1-8dbf-7696efe55188" />
      <DO name="AnIn10" type="MV_d7076120-9456-4755-a627-26384e525732" />
      <DO name="AnIn11" type="MV_8821ca7e-d889-4745-aff4-fa51005c93a7" />
      <DO name="AnIn12" type="MV_e88f62ba-a216-4fa9-8eed-4774daefe436" />
      <DO name="AnIn13" type="MV_3189e45b-1c79-4e96-8e6b-5a622c55017b" />
      <DO name="AnIn14" type="MV_89a32140-9126-4cdb-8e21-197fe9c9da05" />
      <DO name="AnIn15" type="MV_f6abd147-793c-452e-a86b-664142b5fbdd" />
      <DO name="AnIn16" type="MV_f4b41926-94c7-4ae6-b422-d7a17b2427b8" />
      <DO name="AnIn17" type="MV_4175f310-fb6c-41a9-84d3-03bd3eba131d" />
      <DO name="AnIn18" type="MV_ec9f8d41-ebfb-4932-9f2d-50bcdebf8ea3" />
      <DO name="AnIn19" type="MV_6098e5c9-f41d-41a1-b043-26e1437c305a" />
      <DO name="AnIn20" type="MV_370cfe05-f829-4b7e-a02e-fb99b849afda" />
      <DO name="AnIn21" type="MV_1ccabd3e-bee4-47c4-b0fe-a9893871b750" />
      <DO name="AnIn22" type="MV_dc91a34a-dd0f-430b-a978-b7962581da4e" />
      <DO name="AnIn23" type="MV_b7ce7a3e-c668-434d-872b-5f09aeb5d7c3" />
      <DO name="AnIn24" type="MV_49eb8529-7966-4bd3-8bb6-8c84ad12743e" />
      <DO name="AnIn25" type="MV_010453a0-d0da-4fe5-bc92-969644876d60" />
      <DO name="AnIn26" type="MV_ebb310c7-043b-403d-86bc-b46ecbb4aea7" />
      <DO name="AnIn27" type="MV_f87dc6e4-9cf2-4e69-990b-f51b334fb718" />
      <DO name="AnIn28" type="MV_7bd12f3b-80eb-4d01-9659-831b81961680" />
      <DO name="AnIn29" type="MV_2469a6c3-a865-4c49-a70a-3a2bfc621a6a" />
      <DO name="AnIn30" type="MV_bf616206-65e2-4070-9c14-7d925b6140c5" />
    </LNodeType>
    <LNodeType id="SLD.GGIO4_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_412f1afd-7894-4798-bad4-b81cc45cc335" />
      <DO name="AnIn1" type="MV_37b16b19-7d20-4bff-bdc4-ee6df6b0ab88" />
      <DO name="AnIn2" type="MV_0d13c3ba-15d7-4c0e-b50f-f2f9c55a1a9a" />
      <DO name="AnIn3" type="MV_509f993e-2ff8-4f22-8317-a3700dc73e96" />
      <DO name="AnIn4" type="MV_65b3b294-1fc5-4747-b391-0da3eade794b" />
      <DO name="AnIn5" type="MV_ff05c0a1-962a-444f-9e82-69b825d24cc3" />
      <DO name="AnIn6" type="MV_392f56d0-2747-4c17-9f0d-8f8fb8b5f12d" />
      <DO name="AnIn7" type="MV_2e778be4-1d3f-4860-aba0-32bf12b39c75" />
      <DO name="AnIn8" type="MV_5dbe59f1-1099-4fcb-9cb6-6c56eac7c615" />
      <DO name="AnIn9" type="MV_7178ac9f-37c9-4c0a-b26e-6d441233cb81" />
      <DO name="AnIn10" type="MV_fe02e486-76a7-4d7d-90ae-8fc28399612d" />
      <DO name="AnIn11" type="MV_68c8fb3f-f021-47a8-9ae4-a87f4bf9c3b2" />
      <DO name="AnIn12" type="MV_aa1d3a08-fcb6-4c5b-8140-96cdeb017856" />
      <DO name="AnIn13" type="MV_8d934d56-8e42-4124-b4ed-bf6a56784fdf" />
      <DO name="AnIn14" type="MV_8328c32a-04f7-4db4-ab77-2b86a68ee9a5" />
      <DO name="AnIn15" type="MV_2686b70f-9a15-4a63-b021-786bf43d6bda" />
      <DO name="AnIn16" type="MV_2e99a548-04af-4cd8-a22a-1f0dd26510fc" />
      <DO name="AnIn17" type="MV_0fd8395a-a14f-4688-b0ab-5372fb7a0d3d" />
      <DO name="AnIn18" type="MV_b619dcf4-c1db-4e16-82c4-2afff96b027d" />
      <DO name="AnIn19" type="MV_e8a4675d-0527-4dfe-8f02-90729d62d4e5" />
      <DO name="AnIn20" type="MV_1461a4e1-eaf1-4bae-a47e-d2c9bf2cf495" />
      <DO name="AnIn21" type="MV_9e008817-d3a9-4fef-bd60-b3395614168a" />
      <DO name="AnIn22" type="MV_d61e943d-9dc0-49f5-a0f4-01e952bfa9e0" />
      <DO name="AnIn23" type="MV_340a86e1-a15b-4c79-89cf-9169ae0e01de" />
      <DO name="AnIn24" type="MV_5ee6b77b-65ed-4642-8642-710e243a86ec" />
      <DO name="AnIn25" type="MV_aef202ac-fbfc-47b8-8217-c24684bb8bb3" />
      <DO name="AnIn26" type="MV_937d15b8-8b40-4bb6-bf43-b8c8835ee830" />
      <DO name="AnIn27" type="MV_6f5590ec-34e4-4387-b6d4-ad703beece08" />
      <DO name="AnIn28" type="MV_31de59cb-1769-4cf6-8b49-0ba470357c2a" />
      <DO name="AnIn29" type="MV_e66d2648-ebd4-41b2-9e51-b8d0a09909e5" />
      <DO name="AnIn30" type="MV_92245e13-4300-445e-9f0a-3374392d5dec" />
    </LNodeType>
    <LNodeType id="SLD.GGIO5_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_f2477956-f65c-4343-8fa6-88f16f658262" />
      <DO name="AnIn1" type="MV_47ab61bc-cb61-41c7-bf7b-f24301c9ddcf" />
      <DO name="AnIn2" type="MV_83a1f49e-8f65-49bb-9425-6b7f172788ff" />
      <DO name="AnIn3" type="MV_60ebbef0-4aaa-48db-91ad-b614245cd518" />
      <DO name="AnIn4" type="MV_aa496f18-213f-4428-96e4-b1971bf86e0e" />
      <DO name="AnIn5" type="MV_cc3af720-b0f3-4ba8-b731-b976cc7651e8" />
      <DO name="AnIn6" type="MV_a9e38cd3-e0d8-426f-896a-fd0c81fccb48" />
      <DO name="AnIn7" type="MV_cdc8e58b-4d34-4e22-b295-3a6176da5433" />
      <DO name="AnIn8" type="MV_4b7294e7-1e66-4f68-bec2-bb0253d4225c" />
      <DO name="AnIn9" type="MV_b089381a-16d3-4a41-a3df-e56a32137edd" />
      <DO name="AnIn10" type="MV_a98cf727-fe06-4fb1-9755-7844b8b2747a" />
      <DO name="AnIn11" type="MV_064968e2-a0f0-4636-b6e2-aec314cd6adf" />
      <DO name="AnIn12" type="MV_efb5457f-3d96-4767-81c8-305427226dec" />
      <DO name="AnIn13" type="MV_dde0a049-dd66-4399-ab8a-fac154bd7386" />
      <DO name="AnIn14" type="MV_98b69089-8d9f-4f3f-8dbc-54f8120bf095" />
      <DO name="AnIn15" type="MV_9fea139b-4e3f-4f73-a1cd-969d59f279ba" />
      <DO name="AnIn16" type="MV_9e1f6eff-5f5e-4874-8a26-04b313ac8779" />
      <DO name="AnIn17" type="MV_4f49ac7f-6552-4eaa-a8c7-44812a735344" />
      <DO name="AnIn18" type="MV_6da10f28-bb46-4e84-a8c4-900d17c705e9" />
      <DO name="AnIn19" type="MV_e1768dcc-913e-4e00-9630-0226439541b3" />
      <DO name="AnIn20" type="MV_0767c113-b35f-46b2-ac78-08671e5d8bd3" />
      <DO name="AnIn21" type="MV_9896e276-fdb1-47ba-8248-718c3b760f44" />
      <DO name="AnIn22" type="MV_df13b210-7f5d-4382-ac47-7a3faed68048" />
      <DO name="AnIn23" type="MV_2093c202-7d51-4513-a8e8-ed37504f4d35" />
      <DO name="AnIn24" type="MV_1186d848-655b-442c-a434-335e1b901952" />
      <DO name="AnIn25" type="MV_b36e21c7-a988-4e8c-8e38-94969b02534f" />
      <DO name="AnIn26" type="MV_f5d4f493-c4f2-41cd-9b46-1cddfef59866" />
      <DO name="AnIn27" type="MV_d5ef6e4f-af6d-4bc6-9b19-2879110e2e8d" />
      <DO name="AnIn28" type="MV_fc61193c-f67d-4ae2-b5c0-b2784e2b1b1a" />
      <DO name="AnIn29" type="MV_31a57119-98a5-4cf0-8923-ec5d79999048" />
      <DO name="AnIn30" type="MV_8714c476-7c85-4cee-b83b-6ef420fee175" />
    </LNodeType>
    <LNodeType id="SLD.GGIO6_1" lnClass="GGIO">
      <DO name="Beh" type="ENS_ad8b785f-4f81-4a06-835e-9bd732e549b0" />
      <DO name="AnIn1" type="MV_35c70efb-858a-49f3-b504-8921a2948a04" />
      <DO name="AnIn2" type="MV_18be9fe8-8066-4b85-8520-22c1156ad21b" />
      <DO name="AnIn3" type="MV_340a06cc-9c13-4f15-91ba-7a735af073e8" />
      <DO name="AnIn4" type="MV_a77239ec-2d41-4983-bf6a-d93d781b238e" />
      <DO name="AnIn5" type="MV_3e05f9b9-ad6d-4d2a-8889-dcf1b4c579cc" />
      <DO name="AnIn6" type="MV_0324b3d7-f971-4869-8dda-8a54f200cbfc" />
      <DO name="AnIn7" type="MV_6337adb7-c305-42be-ae37-8014694a1ecc" />
      <DO name="AnIn8" type="MV_88ac84be-d71c-4816-bebd-5f678f828d18" />
      <DO name="AnIn9" type="MV_25b6580c-7d84-4a4c-b838-8e97482b67ad" />
      <DO name="AnIn10" type="MV_322f0b69-cf76-447b-9d65-9d3be4323204" />
      <DO name="AnIn11" type="MV_b2bcb8cd-4851-4a2f-b307-10d66baae500" />
      <DO name="AnIn12" type="MV_aa52ac20-440c-4c95-b18b-89c54d2d1c51" />
      <DO name="AnIn13" type="MV_34dfcc3e-7234-4bf2-842f-73b0b94d2f25" />
      <DO name="AnIn14" type="MV_3837501d-fde4-4a82-886d-d56b123df433" />
      <DO name="AnIn15" type="MV_1088b3da-05ec-49b3-8d86-6aa648eeaedd" />
      <DO name="AnIn16" type="MV_52455ea1-dc32-4293-8483-70c9f246157e" />
      <DO name="AnIn17" type="MV_a12961b6-88e9-406e-b0f8-e4e505a7cf01" />
      <DO name="AnIn18" type="MV_4a66fb12-7219-44c4-ab2a-d4db167ed109" />
      <DO name="AnIn19" type="MV_09d4c13c-1eb7-4a00-b03d-923e0bc52a24" />
      <DO name="AnIn20" type="MV_0b28da44-4f9c-4cb6-b559-5b1363074043" />
      <DO name="AnIn21" type="MV_661c69aa-2ddf-4586-898c-4270d9d1f0b1" />
      <DO name="AnIn22" type="MV_9743cf69-34a1-4560-98de-d55fd2f5e0aa" />
      <DO name="AnIn23" type="MV_df9f3b6c-b7ae-4701-a122-2dc8956fbbea" />
      <DO name="AnIn24" type="MV_56e5e220-677f-41f5-ab49-98288d656425" />
      <DO name="AnIn25" type="MV_606f46c2-8af8-4ad8-a643-dafc7126e798" />
      <DO name="AnIn26" type="MV_d27071ff-57e1-4e22-8fd7-86dd101538db" />
      <DO name="AnIn27" type="MV_7193f47a-7831-4f3b-82e7-648787ad5a8a" />
      <DO name="AnIn28" type="MV_03e459c0-9344-461a-bb86-15de2f722c4d" />
      <DO name="AnIn29" type="MV_2f83482c-399e-480e-84ad-5a2eaf461ecc" />
      <DO name="AnIn30" type="MV_34c0531a-f2ed-4c6d-871b-171f699766ef" />
    </LNodeType>
    <LNodeType id="SLD.GGIO7" lnClass="GGIO">
      <DO name="Beh" type="ENS_b6ece0b3-940d-4ff9-b0be-754d6afa2a03" />
      <DO name="AnIn1" type="MV_55a579df-e176-423d-aafe-86a33fdd289e" />
      <DO name="AnIn2" type="MV_f5599acc-7733-4566-8a27-16a61dcb6b47" />
      <DO name="AnIn3" type="MV_164981a6-df02-401f-85dd-7e82ed4a83bc" />
      <DO name="AnIn4" type="MV_ccae7a08-d4ee-4be5-8f32-b0975f788846" />
      <DO name="AnIn5" type="MV_b74655db-4271-4e46-8205-18e82bafb28e" />
      <DO name="AnIn6" type="MV_376ab280-86ba-4bae-9fc9-8b2a681f4b64" />
      <DO name="AnIn7" type="MV_322393b2-6e71-4122-8e96-897c50596cc5" />
      <DO name="AnIn8" type="MV_7d345114-0853-473a-823e-1369bf1a94d4" />
      <DO name="AnIn9" type="MV_137b4ebc-4548-4710-b47d-b17fd62df01c" />
      <DO name="AnIn10" type="MV_ee71f2a7-c1f5-47af-af25-64c51d2523af" />
      <DO name="AnIn11" type="MV_93a1602e-2d32-4838-9f44-ae1969ccbf04" />
      <DO name="AnIn12" type="MV_0de92c7f-d556-47e4-b479-8198553f4dad" />
      <DO name="AnIn13" type="MV_780f7eb2-ce36-4dc2-8a74-bc599d6a48ea" />
      <DO name="AnIn14" type="MV_cd192ef5-11fc-4ff6-a163-307632d63a9e" />
      <DO name="AnIn15" type="MV_93b2693f-ce13-4713-b31f-fc9b7f638f76" />
      <DO name="AnIn16" type="MV_a0d7493d-fbbc-42bc-8f57-814bedd60516" />
      <DO name="AnIn17" type="MV_3fb5e23e-d2af-4e2f-8b5c-dd6db51dc469" />
      <DO name="AnIn18" type="MV_ed5747f6-cdfc-45bc-a487-30f68f5f9ca9" />
      <DO name="AnIn19" type="MV_83c2da94-59d1-48fc-a43c-cf29f0457c4e" />
      <DO name="AnIn20" type="MV_c86859d4-6c6d-4ee6-b868-3bdf0ff2f958" />
    </LNodeType>
    <LNodeType id="SLD.GGIO8" lnClass="GGIO">
      <DO name="Beh" type="ENS_e548bc5c-6d76-42ba-acd8-c395dd571a49" />
      <DO name="AnIn1" type="MV_2a129416-27e4-404b-b4a0-e6915481cc35" />
      <DO name="AnIn2" type="MV_4a8313b2-71cd-4efe-92d3-623402a3ad93" />
      <DO name="AnIn3" type="MV_a0bb8bfe-c3bd-421f-84e7-39d9ba8390de" />
      <DO name="AnIn4" type="MV_d4f20657-04a3-4fa6-8c7c-a6d56f3a3c8a" />
      <DO name="AnIn5" type="MV_8cc1bf2e-395e-4ec2-b649-493e699af348" />
      <DO name="AnIn6" type="MV_ca63a2b3-80c3-432e-ae40-fbbb9f22f88f" />
      <DO name="AnIn7" type="MV_386379c0-ba2e-4dc7-b85d-dc17f4ea86c5" />
      <DO name="AnIn8" type="MV_2ec79d96-14e2-4e53-9df2-10a19aa91405" />
      <DO name="AnIn9" type="MV_a523b425-36bb-490f-8421-0fccbb765552" />
      <DO name="AnIn10" type="MV_8b7b83bd-3b98-49b3-a2d9-6a1468290c81" />
      <DO name="AnIn11" type="MV_ff58d31e-7b9a-4721-b0c7-9bc0d3fc6e0c" />
      <DO name="AnIn12" type="MV_9be217d0-d5ea-4d28-9621-57fc95f822a7" />
      <DO name="AnIn13" type="MV_a24cb354-f4e4-44bf-b480-fe61aff9981c" />
      <DO name="AnIn14" type="MV_af7bd0a7-1774-4559-b0b4-dcbde9f73016" />
      <DO name="AnIn15" type="MV_8495f51e-487a-4687-bf07-d559cde4055c" />
      <DO name="AnIn16" type="MV_15503ea7-753c-4ca6-80c3-bc9681f39059" />
      <DO name="AnIn17" type="MV_aacb1a57-4eab-443a-8e0f-96483a1758ee" />
      <DO name="AnIn18" type="MV_a2a61c53-c159-4cd9-8a79-7c62549cafb1" />
      <DO name="AnIn19" type="MV_53ddf7cb-b75a-4176-aa33-5d00bd6cf9ed" />
      <DO name="AnIn20" type="MV_f39ba44c-3fb8-4aae-9b88-d54002a9cf91" />
    </LNodeType>
    <LNodeType id="SLD.GGIO9" lnClass="GGIO">
      <DO name="Beh" type="ENS_8d337e8d-0bb0-4542-9328-5e58eb76614f" />
      <DO name="AnIn1" type="MV_80c70518-baae-4b2e-a33b-b42a64deb21a" />
      <DO name="AnIn2" type="MV_a56ccf4c-c3f6-4fba-a2a1-0f6825fcf5ed" />
      <DO name="AnIn3" type="MV_36e2658e-3803-47a3-8686-08021d43002c" />
      <DO name="AnIn4" type="MV_7499b21f-741e-45c3-815d-1a6ea804a772" />
      <DO name="AnIn5" type="MV_5a9412a7-eb1a-4c43-aa55-23d319df88d8" />
      <DO name="AnIn6" type="MV_9dc42bfa-47ec-44a5-88d5-3d1add7353c4" />
      <DO name="AnIn7" type="MV_1c0a2bff-0833-403b-bd28-7533b6f9172f" />
      <DO name="AnIn8" type="MV_368e5059-003a-41fd-a666-3d37f1cacb97" />
      <DO name="AnIn9" type="MV_53745e7b-c486-482f-8725-e2867b8e32ee" />
      <DO name="AnIn10" type="MV_b130ef26-a661-45c6-b57a-016c56b1e425" />
      <DO name="AnIn11" type="MV_7720d956-ac58-4dad-9453-0e15b2765de4" />
      <DO name="AnIn12" type="MV_a02f427f-4224-4527-9a1a-2fd8080d1cba" />
      <DO name="AnIn13" type="MV_041ed9f9-7ed9-4981-87cd-be6c16006bc9" />
      <DO name="AnIn14" type="MV_c1885740-79c1-43c4-ada3-be9685e6ea47" />
      <DO name="AnIn15" type="MV_9fbe6e82-3221-44ad-9aef-354d71f97033" />
      <DO name="AnIn16" type="MV_e6a9ddc7-5fbb-4838-af45-74420ad706e0" />
      <DO name="AnIn17" type="MV_e766c056-57da-45a0-b039-7089d97d62b1" />
      <DO name="AnIn18" type="MV_65ff1578-2dae-4bb8-895b-460ba0508fb1" />
      <DO name="AnIn19" type="MV_9c43c10f-253f-43e0-b97a-48e967a94acf" />
      <DO name="AnIn20" type="MV_23f757db-a7bb-4594-97bc-132a9865744d" />
    </LNodeType>
    <LNodeType id="SLD.GGIO10" lnClass="GGIO">
      <DO name="Beh" type="ENS_76727c4d-6e36-4c80-af37-fc3e0763559e" />
      <DO name="AnIn1" type="MV_e6cd849e-bcec-4641-8db6-8e05f0b8c255" />
      <DO name="AnIn2" type="MV_a33a0d74-b83b-4367-8118-26e1ee41aa13" />
      <DO name="AnIn3" type="MV_1ce60ab7-9078-4378-8701-6c2d81f520c0" />
      <DO name="AnIn4" type="MV_7d52bee0-3b6b-40fa-8b29-b7278f460846" />
      <DO name="AnIn5" type="MV_f96c01c3-2602-47a0-93f8-5b527b507698" />
      <DO name="AnIn6" type="MV_41abaf27-07af-412a-9415-d42d2a71bc51" />
      <DO name="AnIn7" type="MV_8eb9e30d-6369-42bf-b875-675376c4595a" />
      <DO name="AnIn8" type="MV_d4f8a574-a0f8-4216-9603-5104435a20dd" />
      <DO name="AnIn9" type="MV_bfcb6b43-7f0f-4e09-b8bf-1a89400c87d7" />
      <DO name="AnIn10" type="MV_07df3e95-a7af-4f67-8b2b-3e1020221d6c" />
      <DO name="AnIn11" type="MV_e09ef4f8-7b91-4ec2-aa3c-0cc3d33a36a4" />
      <DO name="AnIn12" type="MV_911081e4-16ab-4767-80f3-2b7d95102f26" />
      <DO name="AnIn13" type="MV_49fdce1b-4e4a-4a13-b915-679ea2e1fe20" />
      <DO name="AnIn14" type="MV_ccdeaa93-31f2-4a0b-834d-bca14ed017a5" />
      <DO name="AnIn15" type="MV_54016b0a-4dc4-4e31-a650-ffc46388fd7d" />
      <DO name="AnIn16" type="MV_1e548477-36ea-4758-8378-43ef678842fc" />
      <DO name="AnIn17" type="MV_54838836-e06c-467c-b087-07ceba8c93e2" />
      <DO name="AnIn18" type="MV_4afb0931-e120-45cb-9821-f1461c82526f" />
      <DO name="AnIn19" type="MV_bf8e4928-c122-4295-862d-db4f447bb974" />
      <DO name="AnIn20" type="MV_5074f0f3-4a9f-45c3-a4d5-df1cc9bc0a21" />
    </LNodeType>
    <LNodeType id="SLD.GGIO11" lnClass="GGIO">
      <DO name="Beh" type="ENS_d2bb6b1b-1fd0-4865-815d-47d5b3f38996" />
      <DO name="AnIn1" type="MV_0fe3f74e-780f-4607-a7cd-28bcdf6a5fed" />
      <DO name="AnIn2" type="MV_295916ca-7122-4fe4-8ad8-8225b887c1bf" />
      <DO name="AnIn3" type="MV_eeb6e0ae-7c1d-4d7e-9a90-37f28e0aa102" />
      <DO name="AnIn4" type="MV_e13f11a3-35db-462f-9bf9-cd5820dc71e5" />
      <DO name="AnIn5" type="MV_4c835739-ba36-4182-9691-9462a4fa0bae" />
      <DO name="AnIn6" type="MV_dc49f986-c117-46ab-91e9-dbd9c5647236" />
      <DO name="AnIn7" type="MV_9f215baa-76ad-4645-849e-2740b5a1b7cf" />
      <DO name="AnIn8" type="MV_b8fbb85e-7ee6-4b3b-859c-0d5e4031f734" />
      <DO name="AnIn9" type="MV_62c043e8-3eb1-476a-9e29-7b6dfd2a1b3d" />
      <DO name="AnIn10" type="MV_ee0a2599-9de8-4524-ab94-7f074056a47f" />
      <DO name="AnIn11" type="MV_2684146d-f9d7-4d5d-8ecd-14cb1c3831f2" />
      <DO name="AnIn12" type="MV_7f4f0736-f284-4ecc-954c-0a42f882ce68" />
      <DO name="AnIn13" type="MV_b4b63b02-ee5f-4b99-979b-86e85510ed59" />
      <DO name="AnIn14" type="MV_bdd5fe7c-4120-49f1-b00b-0c992de23790" />
      <DO name="AnIn15" type="MV_efdcf5ee-3f2a-4c2e-a31d-e806055342b3" />
      <DO name="AnIn16" type="MV_765123d4-8224-448f-904e-41a4ac679f01" />
      <DO name="AnIn17" type="MV_a351ca6f-28e4-4fac-8d1c-504fe1cc78e4" />
      <DO name="AnIn18" type="MV_a208ce58-5634-459c-aada-1ae6766ab8f5" />
      <DO name="AnIn19" type="MV_12921272-6d3d-4924-abf6-b5bc53686841" />
      <DO name="AnIn20" type="MV_66837d9a-efa0-496e-8728-14d569f0dfc8" />
    </LNodeType>
    <DOType id="ENS_12310d44-4f0b-48bf-9e21-240a7f02e725" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_001d5763-d272-45e3-acee-9331849dfd3f" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_479f6688-6dba-4fdd-8877-7076b592105f" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_9b77ce36-cde8-4cd7-8b24-30cb5cf5a45f" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_9b40b53c-bcfe-47ec-b2f8-ff9e695aedc6" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_77dcdaa8-faca-4fe2-a429-9686abd5b9dc" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_044c4371-c288-45d1-8ef6-101921295901" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_2fbbf790-97eb-4a9a-8fa0-5600d46e4a1c" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="WYE_53c8d46e-4d36-454c-8d0b-f88b74c950aa" cdc="WYE">
      <SDO name="phsA" type="CMV_4809fe75-43a0-4084-82a3-7388f5e0052b" />
      <SDO name="phsB" type="CMV_e8fb1378-39d0-459f-a13c-9286cfdb944d" />
      <SDO name="phsC" type="CMV_c210b953-e690-410a-b5b1-d862df7f9e5f" />
    </DOType>
    <DOType id="ENS_fd5de9dd-6433-49b1-8023-dc4db3aa816c" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_652078b5-0742-447e-8b27-c75cb8320030" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_55d84b99-cae7-405e-8b0d-10defaf2c035" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="LPL_64c791f5-2528-413c-8873-7db150b2e485" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="WYE_aa0d505a-2213-4a36-9fc6-a21fd4941e58" cdc="WYE">
      <SDO name="phsA" type="CMV_643e0861-c607-4490-bc1c-4d5a4eb9d83a" />
      <SDO name="phsB" type="CMV_cc15bd74-f622-437e-9575-173914560e73" />
      <SDO name="phsC" type="CMV_1b28b93d-a837-42f1-a320-2c103a2332ed" />
    </DOType>
    <DOType id="WYE_a2e992be-9a74-47fd-9674-16e8f2af65d5" cdc="WYE">
      <SDO name="phsA" type="CMV_c00e6408-cd99-4be3-b373-2ab02e378b32" />
      <SDO name="phsB" type="CMV_ed2ac70f-d6dc-4303-b687-e5883f387f93" />
      <SDO name="phsC" type="CMV_89970118-c3bc-47ad-8c68-5fab4ae21b1c" />
      <SDO name="neut" type="CMV_41421a5f-8f44-45e3-a712-df72c4ca58b5" />
    </DOType>
    <DOType id="DEL_4769adc0-7ea2-458f-8d01-2a82f9e007d9" cdc="DEL">
      <SDO name="phsAB" type="CMV_2a02e6ce-e4d1-4154-ae8f-b2769703e950" />
      <SDO name="phsBC" type="CMV_7a04ef32-958e-4190-b8aa-4536b21048ca" />
      <SDO name="phsCA" type="CMV_74805059-a3b3-40a6-a62c-b1529e608e7b" />
    </DOType>
    <DOType id="MV_4cbcdea2-4306-4348-8450-b3a3e8d9cace" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_25668ff8-151e-4d5b-bc34-504e371a0227" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_5d6c085b-fef6-4b8e-a2b3-de3245d8635e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_21b9a11c-7376-4deb-bc89-3c52fb1d90ad" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_08961be3-b887-4f82-a5b7-683b920f7434" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9b3bdb69-bd3e-4a38-a30c-89a18bcc2dee" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a2b1e0c3-992b-4990-aada-2afc77f2c90c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_98ede0ce-ac0a-4081-a05e-cec5369f26bd" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_2a02e6ce-e4d1-4154-ae8f-b2769703e950" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_7956ed27-85db-40d6-8499-557ae3be3c63" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_c00e6408-cd99-4be3-b373-2ab02e378b32" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_282c21a9-8851-4acc-8e44-36d04bc1ca85" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_4809fe75-43a0-4084-82a3-7388f5e0052b" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_6fc28b28-a75b-45dc-a85c-af1e4ce50710" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_643e0861-c607-4490-bc1c-4d5a4eb9d83a" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_bfc7c0c6-ffed-416d-9e7a-b8d2881615e1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_7a04ef32-958e-4190-b8aa-4536b21048ca" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_866ff327-7cef-4446-b4a4-3ff8f675eb36" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_74805059-a3b3-40a6-a62c-b1529e608e7b" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_375188e7-6005-4ca4-bedd-7357c5256df2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_ed2ac70f-d6dc-4303-b687-e5883f387f93" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_cc591b2b-bdf3-47a2-9d53-044193a61f47" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_89970118-c3bc-47ad-8c68-5fab4ae21b1c" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_9e328836-4ad4-4cdc-a666-90b8b537e85d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_41421a5f-8f44-45e3-a712-df72c4ca58b5" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_bb9bae9c-4093-472b-8ab7-87ee1a13e071" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_e8fb1378-39d0-459f-a13c-9286cfdb944d" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_4ebfc6a3-1b85-41dd-9288-440171fe7298" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_c210b953-e690-410a-b5b1-d862df7f9e5f" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_737c7629-00a9-44a4-86f8-62574402f6d4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="WYE_71bafa83-e9c8-4e6e-8952-ba45a052cbc0" cdc="WYE">
      <SDO name="phsA" type="CMV_c559fe9a-0d68-411d-ac85-fd9a0c8ba464" />
      <SDO name="phsB" type="CMV_46096cf9-0c97-45a3-a491-dae7dcecc3cb" />
      <SDO name="phsC" type="CMV_23c40863-709d-4971-a09e-2244d0e3e089" />
      <SDO name="neut" type="CMV_29a8355e-56b4-4a33-8d65-2310f9db8566" />
    </DOType>
    <DOType id="ENS_8976437b-749a-4b47-b81e-1b42bd2e19f8" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_e674661d-93e7-4f9c-9759-64728183b7db" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_97976c83-b87b-4454-814c-25133caaf5fe" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="LPL_9d03363d-de76-45d6-b91e-da7d05e8bac9" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="WYE_8b369fab-4f4a-4f90-8863-f5fb9c5810d9" cdc="WYE">
      <SDO name="phsA" type="CMV_7534d8c1-0fac-475e-8e01-b38d10ead5e7" />
      <SDO name="phsB" type="CMV_83a1cf21-42bb-461b-adcb-fbba1ec30af3" />
      <SDO name="phsC" type="CMV_a20e05a0-a5f9-440f-bcc5-0eecb4fbd5d3" />
    </DOType>
    <DOType id="WYE_1a189976-6305-4f43-a72a-c9ad56907e34" cdc="WYE">
      <SDO name="phsA" type="CMV_f3b4f1c2-cf28-444b-8755-c0c065715f5a" />
      <SDO name="phsB" type="CMV_4d77bbee-0444-4bb4-9819-c53a0b77034f" />
      <SDO name="phsC" type="CMV_291d7b28-5251-4e6d-bfd5-11504d0a1920" />
    </DOType>
    <DOType id="DEL_f0222ddf-3c9d-495c-9650-73746314c9ed" cdc="DEL">
      <SDO name="phsAB" type="CMV_040a139d-d201-49a5-aeb7-94491d4ad9c8" />
      <SDO name="phsBC" type="CMV_cbf21f83-1098-4625-871b-42873e62c0aa" />
      <SDO name="phsCA" type="CMV_f715e969-46f5-4e91-a07e-88a42be28eff" />
    </DOType>
    <DOType id="MV_81b1f552-4f06-4c48-aaca-6ac021c03d84" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_66306ba5-208d-4b38-aac9-0775341af9b7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_fa5282e6-8698-43c6-b115-b0011aa53d49" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6a529d7a-4201-4e9b-88bd-6251a19fc24b" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_350a77fe-85bf-4c2b-9d39-513b3e887ce8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0ab861db-3ba4-4829-83d4-008ed554cd96" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_790edd8d-e53d-458e-9cc0-6a39c96a32ea" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9d7a1556-5b80-4ae3-a747-bf378da95aea" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_040a139d-d201-49a5-aeb7-94491d4ad9c8" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_384f7d69-5505-4578-b8f4-ba4616757dca" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_f3b4f1c2-cf28-444b-8755-c0c065715f5a" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_48f946d6-f61d-4c63-b102-078f2c09fe3d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_c559fe9a-0d68-411d-ac85-fd9a0c8ba464" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_f5ed0926-113d-4a85-bdee-45f706359875" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_7534d8c1-0fac-475e-8e01-b38d10ead5e7" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_81ca959b-ec4e-475e-93eb-5734986d764c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_ac135516-6fcc-41ac-9536-48b6cc038512" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_46bb116a-552f-474d-9be2-aaefec18de20" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_60527e72-5e8f-4697-b1e9-8e0fdbb8aeda" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_c0d75bd1-1a5e-4a6e-8241-df0cbe2dd180" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_576ce1f2-c24a-4c4d-881d-c54a6a1edf3f" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_ff7a4c23-e49a-4503-8218-2ab1478a7ac8" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_a9cdaca7-22be-496c-8cc9-935c192d70f4" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_59fd2967-993b-4691-86d0-9f6bf69ff98a" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_6f5289ee-3aa2-4819-9daf-1633c004c507" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_be47af59-0da1-4c63-8b22-2964d74d392c" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_e31005af-401b-4246-9d2d-2dbb4bee144c" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_0acbdb4b-e874-4c7f-8f47-ede89646f4e9" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_0b4f6f10-87e4-417d-b53a-fccebd76cdaa" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_47be1ee5-894c-4bc6-82f0-759751127b74" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_4e712532-a3b2-4a20-976b-54cfbc1e3f36" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_2ec3538c-e956-420e-8419-dececab99c4d" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_2aeb45e0-f559-4eee-97b5-da4055d1ec33" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_792ab0d2-fdc5-45a0-9884-c96581497dfa" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_dcebf785-794d-4a89-afc0-6675f7493dbe" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_58021efa-447c-4122-a822-6afa2d9affa4" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_cdecb104-c3f3-4eb9-8238-9e0f11c4bf07" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_81cc188b-e264-46f2-8a18-ee792542640a" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_0b582698-9a91-4b11-ba4b-a0551830104e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_0fa4c8c4-4266-4ce0-bc34-289ad6b7e963" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_5d9f5977-ef0f-4aba-bb09-40d3ae0a51fe" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_e48b85c2-c3a7-481f-8b7c-d389bbc64ee6" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_b39c5910-a995-46c3-aab3-83b4f6942c20" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_9e7a4d45-530c-4dda-aa47-e0a98aecbaf5" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="CMV_cbf21f83-1098-4625-871b-42873e62c0aa" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_dda17501-ddfe-4b06-b944-3d0a0734f855" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_f715e969-46f5-4e91-a07e-88a42be28eff" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_87b3b7c2-0448-4803-89d9-63a410c20e1d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_4d77bbee-0444-4bb4-9819-c53a0b77034f" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_242f07a5-4884-4358-b44a-d240959a2e23" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_291d7b28-5251-4e6d-bfd5-11504d0a1920" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_7c97f3e6-6bfb-4428-9977-ce42a9cf0fc7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_46096cf9-0c97-45a3-a491-dae7dcecc3cb" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_2a72622e-3457-4bf5-83d3-3fcbd08e146c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_23c40863-709d-4971-a09e-2244d0e3e089" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_293845ce-6e82-4be9-a2c5-eb7e64d5d06d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_29a8355e-56b4-4a33-8d65-2310f9db8566" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_507b4b2f-8f2a-4c98-aa50-0e813636b094" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_83a1cf21-42bb-461b-adcb-fbba1ec30af3" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_c60b99a1-c2c4-4bc3-8b64-daa605c005c3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_a20e05a0-a5f9-440f-bcc5-0eecb4fbd5d3" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_3a22d831-7792-4b3a-a5fb-4e11e922f1dc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_cc15bd74-f622-437e-9575-173914560e73" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_a3faee20-60d0-4cd4-b1fa-ba81852b90e7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_1b28b93d-a837-42f1-a320-2c103a2332ed" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_f5aeba7c-fe72-4bd8-81e7-9051cf87655c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_247f2852-0095-4dc8-8ee0-5b3fb980c38f" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_19a6207e-c923-4a57-b72b-39dc8cad833c" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_af29b9b3-eba7-4c8d-a812-07261039b1b3" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_ea24fde7-81b5-4435-b4b6-081758210e5b" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_b6f04d8f-c85c-4396-acc1-6e372535b630" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_53dfbad9-fa4b-4779-af67-0433eaf0cf91" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_dec181dc-183a-4c3a-9f30-76d4a1839cc5" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_3ce85fee-69cb-4f09-886e-dd5963aad257" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_f51b4b69-f391-4efa-aff2-e953a3a1802c" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_0b22c494-d1cc-4102-8a05-15deb6d95ce4" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_75d7abbe-4c95-4b02-8ea2-f95b6b1194b9" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_450af5d0-6ce6-4309-b5e3-8915da746abf" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_9e567ad6-49ba-4a33-9bd3-b99afdaf350c" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_33899e3f-87d1-456f-b5fe-41f05779390a" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_1ac33e6e-87fc-4ace-a5b4-9b34fb135ff7" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_26ac275c-e823-4acf-be02-8bb930ad6f21" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_87ab1b82-7185-45da-8f5f-1da71de8498d" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_74d0ed65-244f-41f7-aaf1-baa66b77589e" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_20d919a5-ff42-4dfb-9dad-22d456ff9bda" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_754e3a1e-c231-4109-902b-1fe3f22158de" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_1fffd839-9e75-4089-9c45-50c0dd5742b9" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_0c11e5e5-6e8d-4ae0-9a6b-3f9aed2d3f42" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_ad7d9a6a-80d9-4957-9c2b-0a0351ab63de" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_875b53f2-c3c8-4064-9fab-6f99b228d1d2" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_38f50feb-9eb6-4470-8a0c-c03f9092c0e7" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_7d38c21a-2807-403a-be45-387f8b6f3b08" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_450721ae-5b71-4e35-8148-1096a5fabb4f" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_bece2671-c0aa-4c73-a26c-be20c80dde3b" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_48749bd3-1c1d-4214-84be-3f2f5fdb5e13" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_c1d63c37-7f65-4edd-8e87-f994d639c566" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_25243034-e80b-4d72-a20a-2834599d66b4" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_c76a5a94-92a7-4fbd-8e0d-1d9b51b99199" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_a4db3d9b-31c6-4d5b-ace5-0db71f17c9af" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_077ae2af-fb29-47b4-9755-2041e6c1e557" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_a7ba8288-ea63-43f1-a29a-30c205112292" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_c15d307d-9102-4f6a-af0b-15eb3c0ae485" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_af0d3b93-c651-4a38-b9d8-87197e126723" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="MV_977bcdf7-065d-40cd-8d0b-952df970c0f7" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7a114ede-f20e-4070-9e1a-04b32f5926e4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d7076120-9456-4755-a627-26384e525732" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d0a97327-fa61-4d2b-9c70-53d68313814d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8821ca7e-d889-4745-aff4-fa51005c93a7" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_be7a8d53-0f29-4dd2-950c-0a3a086fc5f2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e88f62ba-a216-4fa9-8eed-4774daefe436" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e0b2aee5-2029-4b91-8bef-0437b1a23fab" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_3189e45b-1c79-4e96-8e6b-5a622c55017b" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2ac51c2f-4565-4fcf-8865-277c68e7f380" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_89a32140-9126-4cdb-8e21-197fe9c9da05" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6433e019-beee-4050-b7a8-23aabb0170b1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f6abd147-793c-452e-a86b-664142b5fbdd" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c2ef6817-4ad5-45d8-9f64-e68c7223e20a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b6d699a7-10e1-4959-82a2-41fb29a1face" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_80696484-7660-493e-973d-26f3c15de844" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_6b5a3f0e-a04b-49ea-9eaa-6574d5bd46ed" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4aec9793-d2cd-47a8-a3a3-c14eeba6abe6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_591d0901-df5d-4b3d-838d-f0788640978a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_338fa4ac-f965-492d-ba8c-fd124dce0694" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b210208d-22a5-4118-98f3-461f365fa24a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_30cb98db-314d-4237-9a2f-9c99e99eedc6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_44a1ae58-9a07-4ff2-9086-0f2600f50626" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c7defa1b-355f-4e46-af60-e20c5d21f81f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_fdb409db-0217-4be0-966d-cb587dce3c85" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_95bae543-6b18-490c-87d5-73fee1814160" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_11bb2846-c7db-4cf4-ac92-637575faae1f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7da199b7-c578-4fde-82f3-dbc075f9b8a9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_92c7caa6-78cd-48d1-8dbf-7696efe55188" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_fa2dc460-7c38-4e59-83ca-8cf10dbb6b7a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_7543a45c-3bbe-4ec1-8fac-eb9e69b63740" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_37b16b19-7d20-4bff-bdc4-ee6df6b0ab88" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_cad94ee3-edd9-4bbd-9210-4f29453c7a34" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_fe02e486-76a7-4d7d-90ae-8fc28399612d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2df475b7-85bc-45a1-964b-8a86b908e438" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_68c8fb3f-f021-47a8-9ae4-a87f4bf9c3b2" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5b8a096e-fbde-4526-b5ce-2241ab4a8812" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_aa1d3a08-fcb6-4c5b-8140-96cdeb017856" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2b1100d8-0aad-424b-bbbb-6a8f1ea60608" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8d934d56-8e42-4124-b4ed-bf6a56784fdf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f704e1bb-5cdb-4706-9d12-69d46ca9fab0" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8328c32a-04f7-4db4-ab77-2b86a68ee9a5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5066ea01-a05c-4ac9-a658-dd4d4e6847ab" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2686b70f-9a15-4a63-b021-786bf43d6bda" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7c20a244-d288-42c1-8e2a-9b458499cfff" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0d13c3ba-15d7-4c0e-b50f-f2f9c55a1a9a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_876dfacc-ebeb-472e-a942-e01001de02f9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_509f993e-2ff8-4f22-8317-a3700dc73e96" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d9a994d1-d88e-4810-b0bf-f743845c8df7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_65b3b294-1fc5-4747-b391-0da3eade794b" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9c4802d3-cf8f-48c4-99d5-c64022b56e66" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ff05c0a1-962a-444f-9e82-69b825d24cc3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f0f15dac-f69f-419e-ac00-32fdad94398f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_392f56d0-2747-4c17-9f0d-8f8fb8b5f12d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_14cbc6f5-241c-4849-bbc6-7b9c24e505d7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2e778be4-1d3f-4860-aba0-32bf12b39c75" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_8bebc5ab-9b8e-4df9-a664-9e323bcd3659" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_5dbe59f1-1099-4fcb-9cb6-6c56eac7c615" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_737ec678-3ca9-4fd2-9d3f-47bd1edc43a8" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7178ac9f-37c9-4c0a-b26e-6d441233cb81" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3813f96e-f6bd-4257-bc96-0cc53d7f6ff2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_412f1afd-7894-4798-bad4-b81cc45cc335" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_47ab61bc-cb61-41c7-bf7b-f24301c9ddcf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_46a9489e-fd54-494c-a46c-6ae21a57d4f4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a98cf727-fe06-4fb1-9755-7844b8b2747a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d57e4913-6725-4243-9fba-a2cf2c3dfb30" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_064968e2-a0f0-4636-b6e2-aec314cd6adf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5ca23ec0-e286-4ece-a811-587e714a38d3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_efb5457f-3d96-4767-81c8-305427226dec" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3a177bae-ae43-4d3e-b036-bc91fe4264cb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_dde0a049-dd66-4399-ab8a-fac154bd7386" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1bb9a83e-fab8-4002-8c33-6f61663f5fdc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_98b69089-8d9f-4f3f-8dbc-54f8120bf095" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9eed1cc4-c320-49a3-a795-ed6d6fdac0ad" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9fea139b-4e3f-4f73-a1cd-969d59f279ba" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bab0d3e4-411f-4893-b3a6-cd78ee69eb8d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_83a1f49e-8f65-49bb-9425-6b7f172788ff" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_96c871e4-fcb5-4b0f-b950-9084d8818a3f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_60ebbef0-4aaa-48db-91ad-b614245cd518" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_17398091-f9f3-4981-b1c1-4bf43da7c1d4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_aa496f18-213f-4428-96e4-b1971bf86e0e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_662a81c6-cd37-4a30-b97a-c1f05c7f8101" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_cc3af720-b0f3-4ba8-b731-b976cc7651e8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_64eafd0e-198f-4486-a52c-d0b6a8bd1d10" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a9e38cd3-e0d8-426f-896a-fd0c81fccb48" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_06b2ae0e-161d-4d1e-8904-f92dbed3bdd7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_cdc8e58b-4d34-4e22-b295-3a6176da5433" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_21598994-7b3f-4e07-a56e-8508b7ac983e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4b7294e7-1e66-4f68-bec2-bb0253d4225c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2fcbae56-3acf-4930-9f1f-c37a629189f0" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b089381a-16d3-4a41-a3df-e56a32137edd" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_460f878e-b132-4383-ae1b-53d6151d478f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_f2477956-f65c-4343-8fa6-88f16f658262" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_35c70efb-858a-49f3-b504-8921a2948a04" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4e7bcaa9-79e1-4d1e-a6c8-15bce8c28ab8" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_322f0b69-cf76-447b-9d65-9d3be4323204" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_8e6d6507-dca8-45f4-989a-18cf4660a8bc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b2bcb8cd-4851-4a2f-b307-10d66baae500" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a45a3092-562f-41e4-902d-59857549f576" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_aa52ac20-440c-4c95-b18b-89c54d2d1c51" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_55ecd01d-719b-4f7b-b585-895c6dc406e5" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_34dfcc3e-7234-4bf2-842f-73b0b94d2f25" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1d62ef2f-e585-4359-bd46-4650b2f32364" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_3837501d-fde4-4a82-886d-d56b123df433" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a7018e42-c383-462c-b060-e78d9fcf2061" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1088b3da-05ec-49b3-8d86-6aa648eeaedd" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_077d91f1-893e-410e-9ceb-beb68431aae1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_18be9fe8-8066-4b85-8520-22c1156ad21b" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_648e278a-5f9d-4e54-a009-a4a8c7c7385c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_340a06cc-9c13-4f15-91ba-7a735af073e8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_efefd0af-eb36-4b20-8cff-263ba78d60ea" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a77239ec-2d41-4983-bf6a-d93d781b238e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f951eb81-31b7-4bd7-9719-d3e268d81f3c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_3e05f9b9-ad6d-4d2a-8889-dcf1b4c579cc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d5d321d5-a636-4b4d-949a-d40c36d3f7cc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0324b3d7-f971-4869-8dda-8a54f200cbfc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5d0b46fa-4793-4c5a-b076-7cc2f252590c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_6337adb7-c305-42be-ae37-8014694a1ecc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a1717296-182f-4bc8-a684-1b5cf494a6a1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_88ac84be-d71c-4816-bebd-5f678f828d18" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_cdf6daa8-7d35-4cb5-bd80-ffaab2d652b3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_25b6580c-7d84-4a4c-b838-8e97482b67ad" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d2ad0e58-83a2-46e1-8cb8-f943a59458b8" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_ad8b785f-4f81-4a06-835e-9bd732e549b0" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_0d5a2f89-adfe-447e-a8d7-57024b333197" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_8c4da56a-0222-4688-ba41-b7b580f82a0c" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_b92d0c13-21e3-4514-9aed-2bbebe2acc49" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_20a28128-2b69-4154-b473-02922da36641" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_7028c838-0c6b-44e0-870b-03e3f7a41e0c" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_9399fa4e-fe89-4338-a1e7-a541c015860f" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_584242c7-4eb3-4372-a904-b81fbbac93b0" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_c7d42071-d2be-4e3a-a378-d206e7a4250f" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="WYE_00bfadf7-42b8-4d34-90c7-2798992a7e9d" cdc="WYE">
      <SDO name="phsA" type="CMV_f99d0730-b520-47ab-b1ad-4c6fb43de53f" />
      <SDO name="phsB" type="CMV_94c2786b-278c-4762-98b9-786f3002b223" />
      <SDO name="phsC" type="CMV_aa60da4b-a59c-4b90-9bd4-8526b623b1bc" />
    </DOType>
    <DOType id="ENS_08cf6c84-7377-48da-beed-0d88947e357d" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="CMV_f99d0730-b520-47ab-b1ad-4c6fb43de53f" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_cb6df959-7333-4570-9641-46e2e8e37abf" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_94c2786b-278c-4762-98b9-786f3002b223" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_0aff6127-9578-4c70-93b2-a198dcb36130" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_aa60da4b-a59c-4b90-9bd4-8526b623b1bc" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_217bb3f7-e8a9-424c-884c-8ba11980cb89" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="WYE_4f892a8b-65e0-42c3-9dc4-a81b54ba1738" cdc="WYE">
      <SDO name="phsA" type="CMV_3dd165e1-6270-417b-b85f-f01365481a83" />
      <SDO name="phsB" type="CMV_7dc671b7-2412-46c3-910b-2b32a372604b" />
      <SDO name="phsC" type="CMV_4b05dc19-6b91-45b0-9611-bfcd72e00e6d" />
    </DOType>
    <DOType id="ENS_f38e2696-2318-425c-8da9-163ee1f72d48" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="CMV_3dd165e1-6270-417b-b85f-f01365481a83" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_e789e90b-1e17-4371-bb4d-c94af48b9bd2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_7dc671b7-2412-46c3-910b-2b32a372604b" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_3e42c977-81b3-4fb6-ae0c-e2d974f78ad3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_4b05dc19-6b91-45b0-9611-bfcd72e00e6d" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_9270550f-7ddd-4f80-aa81-eff87fd0bdba" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_f539b6fc-99d0-4fb0-bc70-c6cdd9833017" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_5e2fc7a4-40a3-4a57-bce5-eef2442cb403" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_aa002350-4efd-44ce-8ba6-1edaa36d60c9" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_41ed6019-1b42-4a28-ba47-31cffe81f439" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENC_346ff466-41b7-41e0-80c2-0e8b24a4ae1f" cdc="ENC">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="LPL_d9763dfe-60cb-48d3-81cd-a59f9cb16c36" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="ENS_66ad1e05-8fa8-4db3-bb7d-4823117d9dde" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_615d82f1-8c98-448b-9a04-4332ff50329c" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_dc9b016a-ad6c-4aa9-8b36-e538d6c8b414" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENC_c8f01206-36cf-48cb-a52a-449eab7d17f1" cdc="ENC">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="LPL_2c91117e-c99e-4ec5-94ec-e5a3bc92251e" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="DPC_7522e6a6-7595-4914-b70e-889450c0a435" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_6bbf9f4f-12e0-479d-9d35-df135f83e236" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_0d029287-1b25-4a05-b07f-249fec4c0f01" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_38cc82c1-94e0-4751-b4ac-4a085878668c" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_9b24c318-834b-4697-95fa-8107ae648311" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_3c69991f-75b6-467b-88cd-bf20026ae8b1" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_f69bdb57-2f25-47d2-9920-ee711394eb92" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_2a44f876-e0db-4329-b6c7-2845d8e57c73" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_1a4c5f95-1020-4f79-96e3-19d37f58d55b" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_1a3ce86d-88d1-4955-866a-422aa1573e09" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_90eda06a-c717-4cd7-bc34-6de0d7324bb4" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_b5d9b188-514c-4397-93b4-266790e94a6e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_4b893731-8d41-4420-a9c0-d553ca33a69e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_52803f2d-d47b-4e06-9fc0-cb4347e562d1" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_b222238c-9fd8-494b-9caf-caffa99a39b5" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_cb756b80-f5ef-444c-aa15-96c0aad9805c" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_4fc95fa9-c269-4efa-8755-c82fd6189967" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_2cfb55c1-cf9a-4967-8b3f-026cd3433367" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_66b3e04a-1547-43c5-81b5-345540af8838" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_a62f2a33-6f1a-45e0-b20f-ea561dfa6afc" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_2c0e22ad-ccf5-4ca9-a06c-7c7716c81136" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="WYE_d30b35dd-6a7d-4ab7-9f7d-03fb4237d04e" cdc="WYE">
      <SDO name="phsA" type="CMV_880109bb-a767-4dde-a5d0-2da53ad5b5b1" />
      <SDO name="phsB" type="CMV_b9a97b54-ceb5-4a79-aaff-eb72a58345f6" />
      <SDO name="phsC" type="CMV_88158b3c-f455-48df-928d-dde7dfa2f324" />
      <SDO name="neut" type="CMV_f7cdc26d-d845-46bf-b62a-803559bc41e6" />
    </DOType>
    <DOType id="ENS_134ffad7-e4b8-4f86-8bdf-d94721758c02" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_8a604ddd-fc0c-4c51-a9d3-d620f0081f4d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d3f2a721-740a-40ae-a583-a328b28d4eec" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="WYE_7f748f13-24b8-405d-8525-cb6e8a2c9e88" cdc="WYE">
      <SDO name="phsA" type="CMV_2d8cc7fe-7c34-44a7-97be-24098e666ad0" />
      <SDO name="phsB" type="CMV_203cdfb3-0d55-4f86-a4c6-b0c72cb18f8a" />
      <SDO name="phsC" type="CMV_911cd719-1f08-4bbd-8c5a-a47f8458515d" />
    </DOType>
    <DOType id="DEL_adf536c6-dbff-4c3d-8e17-fc73b1358afd" cdc="DEL">
      <SDO name="phsAB" type="CMV_ac168a1a-4c24-4c44-a788-51b1037a1631" />
      <SDO name="phsBC" type="CMV_221f0a51-6bf5-44b5-89fe-f0fc5ce63e85" />
      <SDO name="phsCA" type="CMV_8ea4febe-fb49-484d-8382-b031f6744852" />
    </DOType>
    <DOType id="MV_e68a8633-7da8-4b25-a646-42ee55a0623b" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bb3f11c6-8eae-401b-ba79-d911d2922f14" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_81a92d82-036b-4a0c-a7d9-cb32a6f2867d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1fe679bb-628b-4583-b71a-c50298be8c9d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e4cbb7fc-d2b2-4122-8be3-48a34f277bcf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c246424e-35a4-497d-bf15-412b4f81996f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_45786909-18b6-45c8-9a64-265138088f5b" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c66e2c94-744e-491f-a433-cb979e3e8e30" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_ac168a1a-4c24-4c44-a788-51b1037a1631" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_fd9083b2-302a-4029-a855-c2aaac9caecb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_2d8cc7fe-7c34-44a7-97be-24098e666ad0" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_dda078be-9162-40a7-9d9e-9b562fc18f88" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_880109bb-a767-4dde-a5d0-2da53ad5b5b1" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_0a119fec-e3cc-46c5-9f51-9d5359271221" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_221f0a51-6bf5-44b5-89fe-f0fc5ce63e85" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_5b17fb54-b205-4826-8aa4-4d7f76f64704" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_8ea4febe-fb49-484d-8382-b031f6744852" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_f8aab95c-1574-47aa-b0c5-b6a4fa89bf5b" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_203cdfb3-0d55-4f86-a4c6-b0c72cb18f8a" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_2dc9dc4b-517a-4527-a3e0-7b121c386bed" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_911cd719-1f08-4bbd-8c5a-a47f8458515d" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_0f62f044-f536-49d3-8898-de928bd51039" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_b9a97b54-ceb5-4a79-aaff-eb72a58345f6" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_1e12425d-5a3e-4d8e-8030-9a83eccd5ffc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_88158b3c-f455-48df-928d-dde7dfa2f324" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_1576c288-bcc1-4804-a555-36f5ee1c81ec" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_f7cdc26d-d845-46bf-b62a-803559bc41e6" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_1fbcd783-5bca-4818-8e12-e8bcb56489c3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_60bacfef-b3f4-46b5-a68b-0aaba4a952c3" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_000aba29-b0cb-47d4-9f6d-7197a6d0c88f" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_3ae05d6a-7cf0-4262-a00d-2335af4204f5" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_b62bbe83-0ef1-4597-8b2d-c76d6f46e9e1" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_a6db5b64-1df3-4363-adc0-4a88d5f13e1e" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_54c08b2b-fd86-460f-85ec-072befbd067e" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_5236a8ac-d220-427c-9458-0ee450fb0378" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_8093ce7e-8c98-4c93-af96-eacc135c9b64" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_4d2e0947-dc8f-47e2-803a-8693ec90eb28" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_ad5b245f-e11f-4bbf-aaee-88745b142bcb" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_f4486011-492f-44c5-b34e-d98ef57368dd" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="WYE_07398044-80b9-4412-8b84-e89c87846e06" cdc="WYE">
      <SDO name="phsA" type="CMV_da791049-1219-4131-8446-ded77334b434" />
      <SDO name="phsB" type="CMV_b1244b75-d0c5-44f0-95b2-46b031bc3eb5" />
      <SDO name="phsC" type="CMV_1c103c7d-42ea-4e0d-91b4-73fd2c116bfb" />
      <SDO name="neut" type="CMV_738862bd-f3d1-47f5-96a3-1334b0cd4f5a" />
    </DOType>
    <DOType id="ENS_100f8ea3-50a9-4b4e-83e4-cb35cd0bc632" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_305d4675-b515-4540-ba06-be8d856eac7d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0ae89e86-c1d9-4a57-80e8-b5a91b9ee0fc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="WYE_55c81819-1202-40d1-af19-4fbeab705103" cdc="WYE">
      <SDO name="phsA" type="CMV_8076f253-2f1b-4a00-a38e-b26d23fc8be7" />
      <SDO name="phsB" type="CMV_4e5144eb-cd00-45f6-8284-8ee86fe00789" />
      <SDO name="phsC" type="CMV_cd64b33b-b9d4-4f90-8654-d69571050d84" />
    </DOType>
    <DOType id="DEL_2d7eb145-fc2e-4d0f-ad81-bb9ff115ab2a" cdc="DEL">
      <SDO name="phsAB" type="CMV_6e6a4b88-8866-4ed8-83eb-80875ec0b9e4" />
      <SDO name="phsBC" type="CMV_58afee89-3400-4190-9129-9b220397468d" />
      <SDO name="phsCA" type="CMV_bef7b518-b5d8-48cb-86c8-6417697f5c84" />
    </DOType>
    <DOType id="MV_892744f3-5743-4098-8ac4-b506d66d4b05" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7715780c-780e-440b-93ec-5774a3595ede" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_64a65280-fdc0-4113-ac1d-a04d35c28c93" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b7e9a1f9-47f9-4028-b7e6-e0fe5999783d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f6eaa884-d398-4a19-aa28-b7d48eb5290d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bc83e86d-96b9-441d-9c6e-ede254c10ba3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8c6e2493-50bc-4634-9929-39eee20f7740" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3f77ddf6-143f-48bb-9624-6783dc7693aa" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_6e6a4b88-8866-4ed8-83eb-80875ec0b9e4" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_f3e13eac-f1da-4272-a61f-424744beb9d6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_8076f253-2f1b-4a00-a38e-b26d23fc8be7" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_b183fb6f-9741-4c06-8896-6404c4b3c8bb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_da791049-1219-4131-8446-ded77334b434" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_08f6d2e0-4958-4385-be6f-acc8ff1ae45a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_58afee89-3400-4190-9129-9b220397468d" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_1aa9867c-a1dd-4ff5-909a-9384abce8596" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_bef7b518-b5d8-48cb-86c8-6417697f5c84" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_28130cbc-1f03-4f4e-bdb0-f7add7f8e590" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_4e5144eb-cd00-45f6-8284-8ee86fe00789" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_203ea41e-f0b4-4eb5-9abf-56082f49d3aa" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_cd64b33b-b9d4-4f90-8654-d69571050d84" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_345f33e9-2159-400f-8844-2a13e7fbe505" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_b1244b75-d0c5-44f0-95b2-46b031bc3eb5" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_822d0293-48e8-4de5-985f-88ae1b3599e2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_1c103c7d-42ea-4e0d-91b4-73fd2c116bfb" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_01ec0cbf-36c3-4ec3-8605-2bc461c83199" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="CMV_738862bd-f3d1-47f5-96a3-1334b0cd4f5a" cdc="CMV">
      <DA name="cVal" bType="Struct" type="Vector_f646c13d-a68e-4da0-af3a-3bfc32457a3a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_fd54008b-1b7e-4cc4-8eb3-ae56652df620" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_1394c8a2-dc37-4c3a-8c06-32c6b39b2d5a" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_5f35861c-866c-4357-866a-153b39311c63" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_ca93fc86-dc5d-463e-b305-ebca2b843546" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPS_acda07a5-8009-4d02-9b11-56f09d077077" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="INS_229e9aa4-14bf-4c83-bb28-93a9b45873b7" cdc="INS">
      <DA name="stVal" bType="INT32" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPC_14e052be-0e1f-4e8d-933e-cdac803c2c9e" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="ENS_8e91d766-5563-48c8-a1fe-88bacabdef67" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_ad431532-da0f-44e0-8787-f0e6c882943e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_1f99ceb3-d237-4235-8172-ea818d553e21" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_d0065460-927b-4632-98cc-298ac023355f" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_55be1a9a-a345-40e5-891a-2abd4310d844" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_5165f2d1-7b28-44d7-974f-1fc79249fb7d" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_a1970ec6-5f08-4870-9680-81b5f37e2ef8" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_1a98be3a-82c3-429d-82d0-888220f665dd" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_437893b7-3ff9-423b-a0fb-f255b07ebed3" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_c4f9decb-efda-4922-b5ee-3b8be0238b26" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_dbe9ef35-2448-4f2a-8ddc-90882778633e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACT_46331ede-65b4-4814-8aa9-93a2e1beb23c" cdc="ACT">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ACD_a34e0e93-d0e4-4468-a718-974ab5f18544" cdc="ACD">
      <DA name="general" bType="BOOLEAN" fc="ST" />
      <DA name="dirGeneral" bType="Enum" type="FaultDirectionKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_3af5572c-f374-49c5-adc7-b208fe371141" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_1c11e902-15a4-464f-8089-7b9d4da792a9" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_b57c1915-a2bd-4409-b9fc-9c4e85cd3644" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_604fbec9-0e22-4a4a-8ebd-03cffae90e7a" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_10229666-40c9-4665-9dae-853cbb689f95" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPS_d34818a3-8dc1-426e-b5cb-1cc7e2cf863b" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="GENERIC_ENS_Beh" cdc="ENS">
      <DA name="stVal" fc="ST" bType="Enum" type="BehaviourModeKind" dchg="true" />
      <DA name="q" fc="ST" qchg="true" bType="Quality" />
      <DA name="t" fc="ST" bType="Timestamp" />
      <DA name="d" fc="DC" bType="VisString255" />
    </DOType>
    <DOType id="GENERIC_LPL" cdc="LPL">
      <DA name="vendor" fc="DC" bType="VisString255" valKind="RO" />
      <DA name="swRev" fc="DC" bType="VisString255" />
      <DA name="d" fc="DC" bType="VisString255" valKind="RO" />
      <DA name="configRev" fc="DC" bType="VisString255" />
      <DA name="lnNs" fc="EX" bType="VisString255" />
    </DOType>
    <DOType id="ENS_8b3e5d9a-3374-4846-bfb7-7d43553be95c" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_f1b9d8c3-929a-4749-af39-5ca7d76b2742" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="DPL_2eeb3a70-4e28-4788-bd38-ebf95b390359" cdc="DPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_2950cfc6-52a9-4375-ac64-f1fa12512081" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_033a5c95-387b-4d8b-9cd0-d38f25865fd6" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENS_c49659ad-a32a-4abc-82c8-a03b37607738" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENC_0fe55817-5516-49b9-9da8-102c4d30159b" cdc="ENC">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="LPL_ff7ec900-d5fb-4e3b-ba1d-6df0294d8b61" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="SPS_8c87e730-1372-4015-a7dd-176184596175" cdc="SPS">
      <DA name="stVal" bType="BOOLEAN" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="ENC_d211f969-3900-4cf2-9ff2-028a699c1170" cdc="ENC">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="LPL_a22e70c5-fbf5-49a2-83c9-f325d0de1e8c" cdc="LPL">
      <DA name="vendor" bType="VisString255" fc="DC" />
      <DA name="swRev" bType="VisString255" fc="DC" />
    </DOType>
    <DOType id="ENS_e103174a-f387-4962-a71e-d58138a14da4" cdc="ENS">
      <DA name="stVal" bType="Enum" type="HealthKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="SPC_956d746a-8788-4d2c-81dd-a1f98492ff5c" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="SPC_38cf841f-921e-4a7e-9dc9-4a6eaa24a35d" cdc="SPC">
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_8722f29c-cdd8-4d93-95ed-20ef0285faae" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="DPC_169bb01f-6376-469c-bdad-0e701a0ce70d" cdc="DPC">
      <DA name="stVal" bType="Dbpos" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
      <DA name="ctlModel" bType="Enum" type="CtlModelKind" fc="CF" />
    </DOType>
    <DOType id="MV_f4b41926-94c7-4ae6-b422-d7a17b2427b8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e30d483a-4549-4610-b56e-a23c0223b99a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4175f310-fb6c-41a9-84d3-03bd3eba131d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_053d8e88-21bc-4a0d-be21-9855c0482038" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ec9f8d41-ebfb-4932-9f2d-50bcdebf8ea3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0938609b-07ec-4004-bf75-dcdf30302583" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_6098e5c9-f41d-41a1-b043-26e1437c305a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_69aca37d-940d-44d0-9432-78daf2b985fe" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_370cfe05-f829-4b7e-a02e-fb99b849afda" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b05a284a-0035-4bb0-9f19-fbc7a8981696" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1ccabd3e-bee4-47c4-b0fe-a9893871b750" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_30dddd20-b306-4393-8c7d-bb5289e7fc57" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_dc91a34a-dd0f-430b-a978-b7962581da4e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a05e5f4f-9a32-4893-9d41-2c2acb76e2d9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b7ce7a3e-c668-434d-872b-5f09aeb5d7c3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7041a81b-fd49-4170-a2a9-16fb1e2a043f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_49eb8529-7966-4bd3-8bb6-8c84ad12743e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d6c56bd7-9617-4588-90b0-39cbcbb3a175" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_010453a0-d0da-4fe5-bc92-969644876d60" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ba5c1290-8399-4358-b914-fa98aeb53dee" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ebb310c7-043b-403d-86bc-b46ecbb4aea7" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bfaaac5b-4ba8-4752-81eb-d77a77ca367d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f87dc6e4-9cf2-4e69-990b-f51b334fb718" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a40bf50f-e33d-44db-936d-9564a4abfb72" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7bd12f3b-80eb-4d01-9659-831b81961680" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a82932d3-a175-4f5a-8729-2b1883768c14" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2469a6c3-a865-4c49-a70a-3a2bfc621a6a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ba242dda-6a3f-4d1f-b842-2b03452f741c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_bf616206-65e2-4070-9c14-7d925b6140c5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ca7f8ea3-6f56-4a82-9fa4-47cab7dbe317" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2e99a548-04af-4cd8-a22a-1f0dd26510fc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4b555eda-5675-4562-bcd2-16bc38025f75" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0fd8395a-a14f-4688-b0ab-5372fb7a0d3d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_263d5002-088c-438a-9911-ea54085c7ea1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b619dcf4-c1db-4e16-82c4-2afff96b027d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_56018f95-b7e8-4766-9029-0f4addc17513" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e8a4675d-0527-4dfe-8f02-90729d62d4e5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_38d86a6a-bb04-4f03-9c90-2e6de750e439" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1461a4e1-eaf1-4bae-a47e-d2c9bf2cf495" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_30efc65c-00c6-47d3-9948-f34d51f78c5f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9e008817-d3a9-4fef-bd60-b3395614168a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3afe3969-ab22-40a4-9c55-7384189e55a4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d61e943d-9dc0-49f5-a0f4-01e952bfa9e0" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1cdb3bcd-9747-46e7-94e3-37f49c4918ff" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_340a86e1-a15b-4c79-89cf-9169ae0e01de" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2aca1722-967f-4274-ab60-303aa2cb59df" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_5ee6b77b-65ed-4642-8642-710e243a86ec" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_fcb35db2-4d69-4459-bc5f-ef7fe4a2d3c5" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_aef202ac-fbfc-47b8-8217-c24684bb8bb3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3f6a6b6e-dc76-498e-83e3-4b398ba89369" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_937d15b8-8b40-4bb6-bf43-b8c8835ee830" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f08cfa66-0225-405a-92cc-9db1cfca6959" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_6f5590ec-34e4-4387-b6d4-ad703beece08" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_229d4b4c-c334-4414-b0ec-81d5019c93d7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_31de59cb-1769-4cf6-8b49-0ba470357c2a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_022b1bcb-467d-471f-9d5d-ac4182626eb8" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e66d2648-ebd4-41b2-9e51-b8d0a09909e5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a2e3a44c-2527-4242-a656-283db418a7c7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_92245e13-4300-445e-9f0a-3374392d5dec" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_89e413ac-80cb-4911-95f3-ab4b2cd7c5c7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9e1f6eff-5f5e-4874-8a26-04b313ac8779" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1267f68c-0dba-42e0-b56c-7ad60fac5903" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4f49ac7f-6552-4eaa-a8c7-44812a735344" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ca1140bb-25ed-489a-b5d2-f9021bbf3cc7" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_6da10f28-bb46-4e84-a8c4-900d17c705e9" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a2526308-9627-4c90-b498-a303ac0932bb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e1768dcc-913e-4e00-9630-0226439541b3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f3e66a11-0dad-408d-af0d-32d209152ab0" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0767c113-b35f-46b2-ac78-08671e5d8bd3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c4606415-3536-486f-a346-3077c6455017" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9896e276-fdb1-47ba-8248-718c3b760f44" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c97237ae-b538-4f86-947e-244eafa01625" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_df13b210-7f5d-4382-ac47-7a3faed68048" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_951290a1-ee8e-4f32-a59f-11439f4155a6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2093c202-7d51-4513-a8e8-ed37504f4d35" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_888602f3-c8c7-4336-b8c0-01df322ee7ca" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1186d848-655b-442c-a434-335e1b901952" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f7a4907f-7066-490e-a2e9-a4fb89770d14" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b36e21c7-a988-4e8c-8e38-94969b02534f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_18f3cc36-7083-4324-bc2c-a27214a5f046" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f5d4f493-c4f2-41cd-9b46-1cddfef59866" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_2e58b861-75a5-4dff-8aaf-c04566a42499" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d5ef6e4f-af6d-4bc6-9b19-2879110e2e8d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b0215030-91bb-4794-8b7e-99784aff5297" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_fc61193c-f67d-4ae2-b5c0-b2784e2b1b1a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4d2322e7-3896-4976-ac7e-9df5355e31a9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_31a57119-98a5-4cf0-8923-ec5d79999048" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4d7c0271-5d1e-4e81-b5e4-83bba0ed7b42" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8714c476-7c85-4cee-b83b-6ef420fee175" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_eaa1fd2e-90ce-41dd-a0e8-5a8ca02d762e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_52455ea1-dc32-4293-8483-70c9f246157e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_37ad5d72-d270-4739-8ea2-129124ccf8a4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a12961b6-88e9-406e-b0f8-e4e505a7cf01" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_be0f903d-efd6-4794-87fb-61aa3a86fe27" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4a66fb12-7219-44c4-ab2a-d4db167ed109" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_eaf339f9-a08b-40c9-a710-7f11a118b024" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_09d4c13c-1eb7-4a00-b03d-923e0bc52a24" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_502d9dd7-5980-4899-9b52-8fda299d4e84" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0b28da44-4f9c-4cb6-b559-5b1363074043" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_70f09166-1de2-42e4-849f-8f15285b6c82" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_661c69aa-2ddf-4586-898c-4270d9d1f0b1" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ac7bfd17-7433-481a-a346-3aee0a4bae3d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9743cf69-34a1-4560-98de-d55fd2f5e0aa" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b1a12d8c-840a-4332-bfa8-3a787f70e09a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_df9f3b6c-b7ae-4701-a122-2dc8956fbbea" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9055fa82-a595-4958-b006-a974e4636f42" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_56e5e220-677f-41f5-ab49-98288d656425" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_db33f675-e2a5-40a8-9e57-777eda8be322" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_606f46c2-8af8-4ad8-a643-dafc7126e798" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4962bf4b-aac0-40f3-bede-ee7123e4e1e5" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d27071ff-57e1-4e22-8fd7-86dd101538db" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4d74d3f6-4c47-46da-af98-757daf17fe4d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7193f47a-7831-4f3b-82e7-648787ad5a8a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1191bd97-8ba2-469e-a5b8-1c72cae03d13" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_03e459c0-9344-461a-bb86-15de2f722c4d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_24259500-11cb-4a7e-9750-ace62ac849ef" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2f83482c-399e-480e-84ad-5a2eaf461ecc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_237a30b6-a5ae-4ad7-8e5d-6e3f1ed8e3f8" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_34c0531a-f2ed-4c6d-871b-171f699766ef" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_328b2d0b-454b-4299-9c06-20497828ef2a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_55a579df-e176-423d-aafe-86a33fdd289e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_8abcf0e5-92c5-4d15-8605-deb4bc705543" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ee71f2a7-c1f5-47af-af25-64c51d2523af" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_af58a1a2-d93a-45e9-8639-09a402f1fe4a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_93a1602e-2d32-4838-9f44-ae1969ccbf04" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_998c5c57-f855-4cc5-8345-c38070381017" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_0de92c7f-d556-47e4-b479-8198553f4dad" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_554e5889-3709-4266-a8a1-2933dcee3ec2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_780f7eb2-ce36-4dc2-8a74-bc599d6a48ea" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0fa8443f-b200-439b-b3cb-05f4498b211c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_cd192ef5-11fc-4ff6-a163-307632d63a9e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_103dca19-1337-4ae2-b46c-950bd1315118" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_93b2693f-ce13-4713-b31f-fc9b7f638f76" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_fdb2c5e7-c233-45f4-967f-ae3658aa8e65" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a0d7493d-fbbc-42bc-8f57-814bedd60516" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_baa8552a-acbd-4b0a-952d-0393aee3813a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_3fb5e23e-d2af-4e2f-8b5c-dd6db51dc469" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7b1e2f0e-5d78-4e9c-94f1-924ee54eeddc" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ed5747f6-cdfc-45bc-a487-30f68f5f9ca9" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_89b3e3eb-238f-47a6-adb3-6f65ad7f5bd9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_83c2da94-59d1-48fc-a43c-cf29f0457c4e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_564fc5df-1e38-4299-a2d8-0550f8c6f4d3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f5599acc-7733-4566-8a27-16a61dcb6b47" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6a398f74-28f1-4508-9160-c8471f493de2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_c86859d4-6c6d-4ee6-b868-3bdf0ff2f958" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_22d6e9e8-212e-4eb9-bff6-006411f232ea" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_164981a6-df02-401f-85dd-7e82ed4a83bc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6b296bcc-c6ce-47f0-995f-6bf45f156d38" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ccae7a08-d4ee-4be5-8f32-b0975f788846" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d6cd7a27-be2d-47c9-94ff-2281c67871d5" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b74655db-4271-4e46-8205-18e82bafb28e" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4730a8c2-3a00-40c3-9946-6c35851f6caf" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_376ab280-86ba-4bae-9fc9-8b2a681f4b64" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_02375694-0bff-4d3b-a6a6-f9febdf5af5f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_322393b2-6e71-4122-8e96-897c50596cc5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e7676204-7c93-4940-a752-a77bf6fb7177" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7d345114-0853-473a-823e-1369bf1a94d4" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_109ef998-cd8f-4c2b-88fc-cbc2adfaa2ab" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_137b4ebc-4548-4710-b47d-b17fd62df01c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_57a33250-f0e2-4890-8b74-783f757a4563" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_b6ece0b3-940d-4ff9-b0be-754d6afa2a03" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_2a129416-27e4-404b-b4a0-e6915481cc35" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_793dbd03-7613-4ab1-b45a-a651824fcd1e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8b7b83bd-3b98-49b3-a2d9-6a1468290c81" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_daa3f40f-ddaf-4641-8eb3-6f2902744aea" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ff58d31e-7b9a-4721-b0c7-9bc0d3fc6e0c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6e5fcc97-d98f-4ce9-9f51-a72a61d2de4c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9be217d0-d5ea-4d28-9621-57fc95f822a7" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1a7f8cbd-6890-49ac-88a0-7981db9b3ef6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a24cb354-f4e4-44bf-b480-fe61aff9981c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e7b35e8d-791b-45d2-b923-a8950b3f994b" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_af7bd0a7-1774-4559-b0b4-dcbde9f73016" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4a94e810-09b1-40c0-9c1d-a91451afc19f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8495f51e-487a-4687-bf07-d559cde4055c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_00a28eaf-34c9-40cf-9bc7-5df7a3689442" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_15503ea7-753c-4ca6-80c3-bc9681f39059" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c8048579-6f61-4bb2-b3af-a6d31d448a15" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_aacb1a57-4eab-443a-8e0f-96483a1758ee" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_46ce0cd6-f292-4e5e-8cb0-87cd88d8846b" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a2a61c53-c159-4cd9-8a79-7c62549cafb1" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b867c35a-02aa-49e0-bb52-430adcb36b7e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_53ddf7cb-b75a-4176-aa33-5d00bd6cf9ed" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_00883a23-e8c2-4873-81fc-a83d8bc0008a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4a8313b2-71cd-4efe-92d3-623402a3ad93" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_55358345-a4f7-44b9-8cfd-b3084c27fc81" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f39ba44c-3fb8-4aae-9b88-d54002a9cf91" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ae691e6c-8c4a-4597-8deb-1b200904f1d3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a0bb8bfe-c3bd-421f-84e7-39d9ba8390de" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_77908080-ab6b-473f-9952-c8d0c53504e3" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d4f20657-04a3-4fa6-8c7c-a6d56f3a3c8a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e75d859c-99f9-4f8a-99c4-126e203c0c88" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8cc1bf2e-395e-4ec2-b649-493e699af348" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6cce342e-a517-415e-9366-f9bd3d380ccf" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ca63a2b3-80c3-432e-ae40-fbbb9f22f88f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_eca49c3d-1908-489f-9c5d-94811644df7f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_386379c0-ba2e-4dc7-b85d-dc17f4ea86c5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b599321b-e3c0-4c3f-8654-a2d8423ef043" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2ec79d96-14e2-4e53-9df2-10a19aa91405" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_9924c553-a8f6-4acd-b9b1-73a425205606" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a523b425-36bb-490f-8421-0fccbb765552" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a799e2b2-b532-463a-b19a-78426e2c9a50" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_e548bc5c-6d76-42ba-acd8-c395dd571a49" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_80c70518-baae-4b2e-a33b-b42a64deb21a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_00e1002b-09bb-4afc-a2e0-a161b65579d5" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b130ef26-a661-45c6-b57a-016c56b1e425" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_550b8dd2-2a15-40ad-a945-5f6e4e5c3954" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7720d956-ac58-4dad-9453-0e15b2765de4" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d7bebdae-2256-4a94-8fd9-b8dd9aae4885" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a02f427f-4224-4527-9a1a-2fd8080d1cba" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b5434829-a554-41e2-bcc4-d15f6abfbe09" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_041ed9f9-7ed9-4981-87cd-be6c16006bc9" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_cebe602f-25fc-4eb0-8ee5-238f54d3b8db" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_c1885740-79c1-43c4-ada3-be9685e6ea47" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bf992c71-3f48-4589-8336-0e142aac67fe" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9fbe6e82-3221-44ad-9aef-354d71f97033" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_8c5a1e8c-c81c-4757-b22f-f35c0b51fefb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e6a9ddc7-5fbb-4838-af45-74420ad706e0" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b0a8e6a1-54cc-43bf-8688-e27cef989c59" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e766c056-57da-45a0-b039-7089d97d62b1" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_56f5e574-7886-476a-b315-156ddd59725d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_65ff1578-2dae-4bb8-895b-460ba0508fb1" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_296a810a-528e-488e-b9a1-5f0267455d1c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9c43c10f-253f-43e0-b97a-48e967a94acf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0e0482a2-003e-4546-8674-0823c8520f56" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a56ccf4c-c3f6-4fba-a2a1-0f6825fcf5ed" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_be20c9a8-90dd-4b8c-b1f1-9587f7e2fe6e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_23f757db-a7bb-4594-97bc-132a9865744d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e8b1aabc-8d5c-4456-a440-77f016c3c868" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_36e2658e-3803-47a3-8686-08021d43002c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_3ea4fe99-671f-495d-b256-00a5c7a6a447" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7499b21f-741e-45c3-815d-1a6ea804a772" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_90effbfc-dd64-4ffe-90dc-0f85c0e55d02" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_5a9412a7-eb1a-4c43-aa55-23d319df88d8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_e079f381-b50d-4123-a0af-83a083d9ad75" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9dc42bfa-47ec-44a5-88d5-3d1add7353c4" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b90273f9-e116-4ab4-8e49-8ce39e0c8143" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1c0a2bff-0833-403b-bd28-7533b6f9172f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_d2e2340d-0e57-4154-b907-1a4253a1d2fb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_368e5059-003a-41fd-a666-3d37f1cacb97" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_90a3680b-c059-4742-86b6-0359ce26bd8e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_53745e7b-c486-482f-8725-e2867b8e32ee" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_006436c7-291f-4af7-9c76-6cb58842df8c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_8d337e8d-0bb0-4542-9328-5e58eb76614f" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_e6cd849e-bcec-4641-8db6-8e05f0b8c255" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_ce8cc547-d469-437f-b838-9fc5560d34d1" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_07df3e95-a7af-4f67-8b2b-3e1020221d6c" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_985569e5-16d7-4889-b509-6149f69a669d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e09ef4f8-7b91-4ec2-aa3c-0cc3d33a36a4" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_02d3e401-dc35-48db-ba96-8ac53c275e85" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_911081e4-16ab-4767-80f3-2b7d95102f26" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c168482f-c3e4-41e0-b4e4-9b34d9e4497a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_49fdce1b-4e4a-4a13-b915-679ea2e1fe20" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_11cecae9-ce88-4d59-8c7e-5406cd6d9961" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ccdeaa93-31f2-4a0b-834d-bca14ed017a5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_85db8a13-f33d-44a2-85a1-048c36432b97" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_54016b0a-4dc4-4e31-a650-ffc46388fd7d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_fd8cf6e2-35cb-467f-8bfa-fe2f812aa48e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1e548477-36ea-4758-8378-43ef678842fc" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_20fc591b-c281-4cd3-a056-1231449ddb97" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_54838836-e06c-467c-b087-07ceba8c93e2" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_831584f0-51f8-4c7e-91fa-b40b883c3b44" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4afb0931-e120-45cb-9821-f1461c82526f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_fe814cfe-55ba-4cfc-8496-6a1c15e25a97" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_bf8e4928-c122-4295-862d-db4f447bb974" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0c84f97d-0093-452c-b95c-d045690e06be" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a33a0d74-b83b-4367-8118-26e1ee41aa13" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c4780d9d-2943-490a-8d11-233cd62c9177" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_5074f0f3-4a9f-45c3-a4d5-df1cc9bc0a21" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b262ee25-bc60-472f-828c-bf2149d46e98" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_1ce60ab7-9078-4378-8701-6c2d81f520c0" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_bf322061-87c8-4ae9-af4b-5ec837483427" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7d52bee0-3b6b-40fa-8b29-b7278f460846" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7334e0ab-bd10-4b34-abb0-e24779eb6900" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_f96c01c3-2602-47a0-93f8-5b527b507698" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_6a4d6484-6da8-4b41-92bd-36c478aac7c6" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_41abaf27-07af-412a-9415-d42d2a71bc51" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_02b262b7-e216-4afc-b4da-16951f79eed9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_8eb9e30d-6369-42bf-b875-675376c4595a" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5c3a75b6-9220-4858-8c58-9c585c76b1ed" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_d4f8a574-a0f8-4216-9603-5104435a20dd" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4aabc54a-b03b-4422-91ef-a71a778fe1a2" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_bfcb6b43-7f0f-4e09-b8bf-1a89400c87d7" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b32a0cc5-c345-4b89-9671-c0c360f629eb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_76727c4d-6e36-4c80-af37-fc3e0763559e" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DOType id="MV_0fe3f74e-780f-4607-a7cd-28bcdf6a5fed" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_742e26e5-e25d-4182-84c6-ff1c32da0c4a" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_ee0a2599-9de8-4524-ab94-7f074056a47f" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0138ff88-20ec-4821-ab4c-48711dae707e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_2684146d-f9d7-4d5d-8ecd-14cb1c3831f2" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_5e207f9a-bd49-4443-9c7a-6e0f5770ea52" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_7f4f0736-f284-4ecc-954c-0a42f882ce68" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0fdce59f-19a4-44a2-b2fd-56df3b3f431c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b4b63b02-ee5f-4b99-979b-86e85510ed59" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_39cc06f9-2f11-4326-84c2-c9d97b577d42" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_bdd5fe7c-4120-49f1-b00b-0c992de23790" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f5fdedc2-4088-469f-8275-0968f8dbae11" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_efdcf5ee-3f2a-4c2e-a31d-e806055342b3" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_57c61c8a-e17f-42c2-ae33-f8e88646371f" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_765123d4-8224-448f-904e-41a4ac679f01" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_baf96330-f7e1-49a1-900c-0fec8a69da83" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a351ca6f-28e4-4fac-8d1c-504fe1cc78e4" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4ab4cd12-997e-4090-8f27-0204ddc1059d" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_a208ce58-5634-459c-aada-1ae6766ab8f5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_884f22fa-2c12-4173-ab13-e50e8690dafa" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_12921272-6d3d-4924-abf6-b5bc53686841" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_da585eab-0647-4c92-8825-5138618d584c" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_295916ca-7122-4fe4-8ad8-8225b887c1bf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_a1236444-711c-404e-a92f-3c48ebcf97c9" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_66837d9a-efa0-496e-8728-14d569f0dfc8" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_f59bfef4-7e88-4cbd-b8d6-35c187ec5bfb" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_eeb6e0ae-7c1d-4d7e-9a90-37f28e0aa102" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_0fc3b280-aa27-4fe0-9c9c-9cdb08734695" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_e13f11a3-35db-462f-9bf9-cd5820dc71e5" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_1c878568-a77e-4fc7-94ab-651b097f30b4" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_4c835739-ba36-4182-9691-9462a4fa0bae" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_8ea389e4-7be2-4874-bade-519159950284" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_dc49f986-c117-46ab-91e9-dbd9c5647236" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_7548c86b-faf3-4a73-be81-8ae229d0c63e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_9f215baa-76ad-4645-849e-2740b5a1b7cf" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_c264fbf5-aa00-44dd-8347-dd684f8f77bf" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_b8fbb85e-7ee6-4b3b-859c-0d5e4031f734" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_b14c1d7a-bee9-4dba-84f9-a062fb812b35" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="MV_62c043e8-3eb1-476a-9e29-7b6dfd2a1b3d" cdc="MV">
      <DA name="mag" bType="Struct" type="AnalogueValue_4789b50f-7249-4b08-b677-e9f02a74af5e" fc="MX" />
      <DA name="q" bType="Quality" fc="MX" />
      <DA name="t" bType="Timestamp" fc="MX" />
    </DOType>
    <DOType id="ENS_d2bb6b1b-1fd0-4865-815d-47d5b3f38996" cdc="ENS">
      <DA name="stVal" bType="Enum" type="BehaviourModeKind" fc="ST" />
      <DA name="q" bType="Quality" fc="ST" />
      <DA name="t" bType="Timestamp" fc="ST" />
    </DOType>
    <DAType id="AnalogueValue_55d84b99-cae7-405e-8b0d-10defaf2c035">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_25668ff8-151e-4d5b-bc34-504e371a0227">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_21b9a11c-7376-4deb-bc89-3c52fb1d90ad">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9b3bdb69-bd3e-4a38-a30c-89a18bcc2dee">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_98ede0ce-ac0a-4081-a05e-cec5369f26bd">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f478c082-ea39-4441-a525-69ec7be1429d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_7956ed27-85db-40d6-8499-557ae3be3c63">
      <BDA name="mag" bType="Struct" type="AnalogueValue_f478c082-ea39-4441-a525-69ec7be1429d" />
    </DAType>
    <DAType id="AnalogueValue_107d72d7-92bd-43d4-80fd-ed449cf79543">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_282c21a9-8851-4acc-8e44-36d04bc1ca85">
      <BDA name="mag" bType="Struct" type="AnalogueValue_107d72d7-92bd-43d4-80fd-ed449cf79543" />
    </DAType>
    <DAType id="AnalogueValue_9f7b8980-00f5-486f-9e3f-156f7ed42334">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_6fc28b28-a75b-45dc-a85c-af1e4ce50710">
      <BDA name="mag" bType="Struct" type="AnalogueValue_9f7b8980-00f5-486f-9e3f-156f7ed42334" />
    </DAType>
    <DAType id="AnalogueValue_b8673232-d9a9-44ae-ae5e-25ee7b936fa1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_bfc7c0c6-ffed-416d-9e7a-b8d2881615e1">
      <BDA name="mag" bType="Struct" type="AnalogueValue_b8673232-d9a9-44ae-ae5e-25ee7b936fa1" />
    </DAType>
    <DAType id="AnalogueValue_80cc6bae-89f9-49de-8ff8-819dddf9a009">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_866ff327-7cef-4446-b4a4-3ff8f675eb36">
      <BDA name="mag" bType="Struct" type="AnalogueValue_80cc6bae-89f9-49de-8ff8-819dddf9a009" />
    </DAType>
    <DAType id="AnalogueValue_21ea76b2-e190-4b32-ac27-c59706160324">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_375188e7-6005-4ca4-bedd-7357c5256df2">
      <BDA name="mag" bType="Struct" type="AnalogueValue_21ea76b2-e190-4b32-ac27-c59706160324" />
    </DAType>
    <DAType id="AnalogueValue_567c718f-350a-4da3-bcaa-cc14f1f34d1e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_cc591b2b-bdf3-47a2-9d53-044193a61f47">
      <BDA name="mag" bType="Struct" type="AnalogueValue_567c718f-350a-4da3-bcaa-cc14f1f34d1e" />
    </DAType>
    <DAType id="AnalogueValue_99de2390-bd9f-4517-928f-60fb677586e1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_9e328836-4ad4-4cdc-a666-90b8b537e85d">
      <BDA name="mag" bType="Struct" type="AnalogueValue_99de2390-bd9f-4517-928f-60fb677586e1" />
    </DAType>
    <DAType id="AnalogueValue_f6945f4d-b6a5-4f6d-844f-b1e6f4ba955f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_bb9bae9c-4093-472b-8ab7-87ee1a13e071">
      <BDA name="mag" bType="Struct" type="AnalogueValue_f6945f4d-b6a5-4f6d-844f-b1e6f4ba955f" />
    </DAType>
    <DAType id="AnalogueValue_b7d77b06-92c8-44d9-a9d8-89c7bb560990">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_4ebfc6a3-1b85-41dd-9288-440171fe7298">
      <BDA name="mag" bType="Struct" type="AnalogueValue_b7d77b06-92c8-44d9-a9d8-89c7bb560990" />
    </DAType>
    <DAType id="AnalogueValue_9e470cec-74cf-4654-a922-d52550c64318">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_737c7629-00a9-44a4-86f8-62574402f6d4">
      <BDA name="mag" bType="Struct" type="AnalogueValue_9e470cec-74cf-4654-a922-d52550c64318" />
    </DAType>
    <DAType id="AnalogueValue_97976c83-b87b-4454-814c-25133caaf5fe">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_66306ba5-208d-4b38-aac9-0775341af9b7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6a529d7a-4201-4e9b-88bd-6251a19fc24b">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0ab861db-3ba4-4829-83d4-008ed554cd96">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9d7a1556-5b80-4ae3-a747-bf378da95aea">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_cf1b61c2-6ce5-4268-bb27-27ab07120da2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_384f7d69-5505-4578-b8f4-ba4616757dca">
      <BDA name="mag" bType="Struct" type="AnalogueValue_cf1b61c2-6ce5-4268-bb27-27ab07120da2" />
    </DAType>
    <DAType id="AnalogueValue_580862bd-cf81-487a-ac5b-ab808bce5d3e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_48f946d6-f61d-4c63-b102-078f2c09fe3d">
      <BDA name="mag" bType="Struct" type="AnalogueValue_580862bd-cf81-487a-ac5b-ab808bce5d3e" />
    </DAType>
    <DAType id="AnalogueValue_936ae538-96c8-4f40-9651-ed7cf12107c1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_f5ed0926-113d-4a85-bdee-45f706359875">
      <BDA name="mag" bType="Struct" type="AnalogueValue_936ae538-96c8-4f40-9651-ed7cf12107c1" />
    </DAType>
    <DAType id="AnalogueValue_ce25915a-e040-4e2a-b084-e483f0666997">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_81ca959b-ec4e-475e-93eb-5734986d764c">
      <BDA name="mag" bType="Struct" type="AnalogueValue_ce25915a-e040-4e2a-b084-e483f0666997" />
    </DAType>
    <DAType id="AnalogueValue_2437a8a9-a0dc-48dc-a3ae-34525c581ded">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_dda17501-ddfe-4b06-b944-3d0a0734f855">
      <BDA name="mag" bType="Struct" type="AnalogueValue_2437a8a9-a0dc-48dc-a3ae-34525c581ded" />
    </DAType>
    <DAType id="AnalogueValue_32b1a5cf-500b-4212-b8a9-b3047eec2572">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_87b3b7c2-0448-4803-89d9-63a410c20e1d">
      <BDA name="mag" bType="Struct" type="AnalogueValue_32b1a5cf-500b-4212-b8a9-b3047eec2572" />
    </DAType>
    <DAType id="AnalogueValue_f42b85ba-aae4-42d1-973f-29dfca51ee71">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_242f07a5-4884-4358-b44a-d240959a2e23">
      <BDA name="mag" bType="Struct" type="AnalogueValue_f42b85ba-aae4-42d1-973f-29dfca51ee71" />
    </DAType>
    <DAType id="AnalogueValue_3aabb7db-5dbe-4e57-ab4f-9c866f564de3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_7c97f3e6-6bfb-4428-9977-ce42a9cf0fc7">
      <BDA name="mag" bType="Struct" type="AnalogueValue_3aabb7db-5dbe-4e57-ab4f-9c866f564de3" />
    </DAType>
    <DAType id="AnalogueValue_39bfe1c3-cd7e-4c3d-95e6-04045366a42b">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_2a72622e-3457-4bf5-83d3-3fcbd08e146c">
      <BDA name="mag" bType="Struct" type="AnalogueValue_39bfe1c3-cd7e-4c3d-95e6-04045366a42b" />
    </DAType>
    <DAType id="AnalogueValue_793ef6ce-f038-43e0-b43f-27d8de40751e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_293845ce-6e82-4be9-a2c5-eb7e64d5d06d">
      <BDA name="mag" bType="Struct" type="AnalogueValue_793ef6ce-f038-43e0-b43f-27d8de40751e" />
    </DAType>
    <DAType id="AnalogueValue_cea0eb55-c3b1-4e79-a24c-34b32dd30be5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_507b4b2f-8f2a-4c98-aa50-0e813636b094">
      <BDA name="mag" bType="Struct" type="AnalogueValue_cea0eb55-c3b1-4e79-a24c-34b32dd30be5" />
    </DAType>
    <DAType id="AnalogueValue_7a65a732-b7ef-4505-a9f7-4f60a20bcebe">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_c60b99a1-c2c4-4bc3-8b64-daa605c005c3">
      <BDA name="mag" bType="Struct" type="AnalogueValue_7a65a732-b7ef-4505-a9f7-4f60a20bcebe" />
    </DAType>
    <DAType id="AnalogueValue_b918e0e8-b57b-4922-94f1-47307a182ae6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_3a22d831-7792-4b3a-a5fb-4e11e922f1dc">
      <BDA name="mag" bType="Struct" type="AnalogueValue_b918e0e8-b57b-4922-94f1-47307a182ae6" />
    </DAType>
    <DAType id="AnalogueValue_9717d1d2-351d-4676-b6a4-e60c91e1352e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_a3faee20-60d0-4cd4-b1fa-ba81852b90e7">
      <BDA name="mag" bType="Struct" type="AnalogueValue_9717d1d2-351d-4676-b6a4-e60c91e1352e" />
    </DAType>
    <DAType id="AnalogueValue_60d54707-caa7-464a-90dd-61134ae931c9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_f5aeba7c-fe72-4bd8-81e7-9051cf87655c">
      <BDA name="mag" bType="Struct" type="AnalogueValue_60d54707-caa7-464a-90dd-61134ae931c9" />
    </DAType>
    <DAType id="AnalogueValue_7a114ede-f20e-4070-9e1a-04b32f5926e4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d0a97327-fa61-4d2b-9c70-53d68313814d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_be7a8d53-0f29-4dd2-950c-0a3a086fc5f2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e0b2aee5-2029-4b91-8bef-0437b1a23fab">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2ac51c2f-4565-4fcf-8865-277c68e7f380">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6433e019-beee-4050-b7a8-23aabb0170b1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c2ef6817-4ad5-45d8-9f64-e68c7223e20a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_80696484-7660-493e-973d-26f3c15de844">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4aec9793-d2cd-47a8-a3a3-c14eeba6abe6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_338fa4ac-f965-492d-ba8c-fd124dce0694">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_30cb98db-314d-4237-9a2f-9c99e99eedc6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c7defa1b-355f-4e46-af60-e20c5d21f81f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_95bae543-6b18-490c-87d5-73fee1814160">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7da199b7-c578-4fde-82f3-dbc075f9b8a9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_fa2dc460-7c38-4e59-83ca-8cf10dbb6b7a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_cad94ee3-edd9-4bbd-9210-4f29453c7a34">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2df475b7-85bc-45a1-964b-8a86b908e438">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5b8a096e-fbde-4526-b5ce-2241ab4a8812">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2b1100d8-0aad-424b-bbbb-6a8f1ea60608">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f704e1bb-5cdb-4706-9d12-69d46ca9fab0">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5066ea01-a05c-4ac9-a658-dd4d4e6847ab">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7c20a244-d288-42c1-8e2a-9b458499cfff">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_876dfacc-ebeb-472e-a942-e01001de02f9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d9a994d1-d88e-4810-b0bf-f743845c8df7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9c4802d3-cf8f-48c4-99d5-c64022b56e66">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f0f15dac-f69f-419e-ac00-32fdad94398f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_14cbc6f5-241c-4849-bbc6-7b9c24e505d7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_8bebc5ab-9b8e-4df9-a664-9e323bcd3659">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_737ec678-3ca9-4fd2-9d3f-47bd1edc43a8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3813f96e-f6bd-4257-bc96-0cc53d7f6ff2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_46a9489e-fd54-494c-a46c-6ae21a57d4f4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d57e4913-6725-4243-9fba-a2cf2c3dfb30">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5ca23ec0-e286-4ece-a811-587e714a38d3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3a177bae-ae43-4d3e-b036-bc91fe4264cb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1bb9a83e-fab8-4002-8c33-6f61663f5fdc">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9eed1cc4-c320-49a3-a795-ed6d6fdac0ad">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bab0d3e4-411f-4893-b3a6-cd78ee69eb8d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_96c871e4-fcb5-4b0f-b950-9084d8818a3f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_17398091-f9f3-4981-b1c1-4bf43da7c1d4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_662a81c6-cd37-4a30-b97a-c1f05c7f8101">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_64eafd0e-198f-4486-a52c-d0b6a8bd1d10">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_06b2ae0e-161d-4d1e-8904-f92dbed3bdd7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_21598994-7b3f-4e07-a56e-8508b7ac983e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2fcbae56-3acf-4930-9f1f-c37a629189f0">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_460f878e-b132-4383-ae1b-53d6151d478f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4e7bcaa9-79e1-4d1e-a6c8-15bce8c28ab8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_8e6d6507-dca8-45f4-989a-18cf4660a8bc">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a45a3092-562f-41e4-902d-59857549f576">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_55ecd01d-719b-4f7b-b585-895c6dc406e5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1d62ef2f-e585-4359-bd46-4650b2f32364">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a7018e42-c383-462c-b060-e78d9fcf2061">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_077d91f1-893e-410e-9ceb-beb68431aae1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_648e278a-5f9d-4e54-a009-a4a8c7c7385c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_efefd0af-eb36-4b20-8cff-263ba78d60ea">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f951eb81-31b7-4bd7-9719-d3e268d81f3c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d5d321d5-a636-4b4d-949a-d40c36d3f7cc">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5d0b46fa-4793-4c5a-b076-7cc2f252590c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a1717296-182f-4bc8-a684-1b5cf494a6a1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_cdf6daa8-7d35-4cb5-bd80-ffaab2d652b3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d2ad0e58-83a2-46e1-8cb8-f943a59458b8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_93c9a580-0a1f-477d-8a73-8c88939183d8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_cb6df959-7333-4570-9641-46e2e8e37abf">
      <BDA name="mag" bType="Struct" type="AnalogueValue_93c9a580-0a1f-477d-8a73-8c88939183d8" />
    </DAType>
    <DAType id="AnalogueValue_4d1157ca-a88d-4514-9887-9b46a2da27d1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_0aff6127-9578-4c70-93b2-a198dcb36130">
      <BDA name="mag" bType="Struct" type="AnalogueValue_4d1157ca-a88d-4514-9887-9b46a2da27d1" />
    </DAType>
    <DAType id="AnalogueValue_cd031841-4420-4e55-b5d2-a32aa7bbc6b7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_217bb3f7-e8a9-424c-884c-8ba11980cb89">
      <BDA name="mag" bType="Struct" type="AnalogueValue_cd031841-4420-4e55-b5d2-a32aa7bbc6b7" />
    </DAType>
    <DAType id="AnalogueValue_b4606b22-73ed-48c5-b8d3-99027f75762e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_e789e90b-1e17-4371-bb4d-c94af48b9bd2">
      <BDA name="mag" bType="Struct" type="AnalogueValue_b4606b22-73ed-48c5-b8d3-99027f75762e" />
    </DAType>
    <DAType id="AnalogueValue_33809e17-abca-4ec2-b8fa-912950dc523b">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_3e42c977-81b3-4fb6-ae0c-e2d974f78ad3">
      <BDA name="mag" bType="Struct" type="AnalogueValue_33809e17-abca-4ec2-b8fa-912950dc523b" />
    </DAType>
    <DAType id="AnalogueValue_971a4a51-97c7-4576-9e5a-6fc62ca6dea5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_9270550f-7ddd-4f80-aa81-eff87fd0bdba">
      <BDA name="mag" bType="Struct" type="AnalogueValue_971a4a51-97c7-4576-9e5a-6fc62ca6dea5" />
    </DAType>
    <DAType id="AnalogueValue_d3f2a721-740a-40ae-a583-a328b28d4eec">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bb3f11c6-8eae-401b-ba79-d911d2922f14">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1fe679bb-628b-4583-b71a-c50298be8c9d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c246424e-35a4-497d-bf15-412b4f81996f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c66e2c94-744e-491f-a433-cb979e3e8e30">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3d2d8653-51dd-45bc-a4d5-25435b3ceee5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_fd9083b2-302a-4029-a855-c2aaac9caecb">
      <BDA name="mag" bType="Struct" type="AnalogueValue_3d2d8653-51dd-45bc-a4d5-25435b3ceee5" />
    </DAType>
    <DAType id="AnalogueValue_17180f16-0cbc-4ad9-b985-e46051f641d5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_dda078be-9162-40a7-9d9e-9b562fc18f88">
      <BDA name="mag" bType="Struct" type="AnalogueValue_17180f16-0cbc-4ad9-b985-e46051f641d5" />
    </DAType>
    <DAType id="AnalogueValue_589dd8ae-155e-48bf-a20c-cf4fc307dda7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_0a119fec-e3cc-46c5-9f51-9d5359271221">
      <BDA name="mag" bType="Struct" type="AnalogueValue_589dd8ae-155e-48bf-a20c-cf4fc307dda7" />
    </DAType>
    <DAType id="AnalogueValue_6bd9793c-348e-4648-a554-a51f18c27781">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_5b17fb54-b205-4826-8aa4-4d7f76f64704">
      <BDA name="mag" bType="Struct" type="AnalogueValue_6bd9793c-348e-4648-a554-a51f18c27781" />
    </DAType>
    <DAType id="AnalogueValue_a1e18ba6-eeb3-4dd1-a016-607687a98f6e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_f8aab95c-1574-47aa-b0c5-b6a4fa89bf5b">
      <BDA name="mag" bType="Struct" type="AnalogueValue_a1e18ba6-eeb3-4dd1-a016-607687a98f6e" />
    </DAType>
    <DAType id="AnalogueValue_24c49228-926b-4aea-b6fa-5ed5d58a008c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_2dc9dc4b-517a-4527-a3e0-7b121c386bed">
      <BDA name="mag" bType="Struct" type="AnalogueValue_24c49228-926b-4aea-b6fa-5ed5d58a008c" />
    </DAType>
    <DAType id="AnalogueValue_5ab90812-06f5-491b-85dc-1860b78f6347">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_0f62f044-f536-49d3-8898-de928bd51039">
      <BDA name="mag" bType="Struct" type="AnalogueValue_5ab90812-06f5-491b-85dc-1860b78f6347" />
    </DAType>
    <DAType id="AnalogueValue_bd99bda0-34c0-4701-8185-c612e06be843">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_1e12425d-5a3e-4d8e-8030-9a83eccd5ffc">
      <BDA name="mag" bType="Struct" type="AnalogueValue_bd99bda0-34c0-4701-8185-c612e06be843" />
    </DAType>
    <DAType id="AnalogueValue_6af0d58f-44e4-448a-8fd8-f2dab887f1fe">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_1576c288-bcc1-4804-a555-36f5ee1c81ec">
      <BDA name="mag" bType="Struct" type="AnalogueValue_6af0d58f-44e4-448a-8fd8-f2dab887f1fe" />
    </DAType>
    <DAType id="AnalogueValue_80cb6658-7e0f-402c-86ff-6daefe7ea558">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_1fbcd783-5bca-4818-8e12-e8bcb56489c3">
      <BDA name="mag" bType="Struct" type="AnalogueValue_80cb6658-7e0f-402c-86ff-6daefe7ea558" />
    </DAType>
    <DAType id="AnalogueValue_0ae89e86-c1d9-4a57-80e8-b5a91b9ee0fc">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7715780c-780e-440b-93ec-5774a3595ede">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b7e9a1f9-47f9-4028-b7e6-e0fe5999783d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bc83e86d-96b9-441d-9c6e-ede254c10ba3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3f77ddf6-143f-48bb-9624-6783dc7693aa">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_647ef555-3eb1-4d75-a4e1-33109fed19c6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_f3e13eac-f1da-4272-a61f-424744beb9d6">
      <BDA name="mag" bType="Struct" type="AnalogueValue_647ef555-3eb1-4d75-a4e1-33109fed19c6" />
    </DAType>
    <DAType id="AnalogueValue_2f1a68b6-b2ff-4d0f-8da4-03b46882cb52">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_b183fb6f-9741-4c06-8896-6404c4b3c8bb">
      <BDA name="mag" bType="Struct" type="AnalogueValue_2f1a68b6-b2ff-4d0f-8da4-03b46882cb52" />
    </DAType>
    <DAType id="AnalogueValue_e225e306-64b6-4323-971e-686ebdd6089d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_08f6d2e0-4958-4385-be6f-acc8ff1ae45a">
      <BDA name="mag" bType="Struct" type="AnalogueValue_e225e306-64b6-4323-971e-686ebdd6089d" />
    </DAType>
    <DAType id="AnalogueValue_15e2010b-e3a7-4ca4-9427-adf0675b9260">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_1aa9867c-a1dd-4ff5-909a-9384abce8596">
      <BDA name="mag" bType="Struct" type="AnalogueValue_15e2010b-e3a7-4ca4-9427-adf0675b9260" />
    </DAType>
    <DAType id="AnalogueValue_cbd12117-914b-45b6-ab72-1f59442a5236">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_28130cbc-1f03-4f4e-bdb0-f7add7f8e590">
      <BDA name="mag" bType="Struct" type="AnalogueValue_cbd12117-914b-45b6-ab72-1f59442a5236" />
    </DAType>
    <DAType id="AnalogueValue_70ae6ced-592b-4346-a56b-b35ab57812a8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_203ea41e-f0b4-4eb5-9abf-56082f49d3aa">
      <BDA name="mag" bType="Struct" type="AnalogueValue_70ae6ced-592b-4346-a56b-b35ab57812a8" />
    </DAType>
    <DAType id="AnalogueValue_96ff7a60-30d3-445c-883c-5c6f5296aef3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_345f33e9-2159-400f-8844-2a13e7fbe505">
      <BDA name="mag" bType="Struct" type="AnalogueValue_96ff7a60-30d3-445c-883c-5c6f5296aef3" />
    </DAType>
    <DAType id="AnalogueValue_89f8f6cc-d615-4e01-b70f-dd88f3c56097">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_822d0293-48e8-4de5-985f-88ae1b3599e2">
      <BDA name="mag" bType="Struct" type="AnalogueValue_89f8f6cc-d615-4e01-b70f-dd88f3c56097" />
    </DAType>
    <DAType id="AnalogueValue_924f43fc-170b-4d10-96ed-4274dc439156">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_01ec0cbf-36c3-4ec3-8605-2bc461c83199">
      <BDA name="mag" bType="Struct" type="AnalogueValue_924f43fc-170b-4d10-96ed-4274dc439156" />
    </DAType>
    <DAType id="AnalogueValue_6fb44968-3968-4c03-89b7-7505a4eb415c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="Vector_f646c13d-a68e-4da0-af3a-3bfc32457a3a">
      <BDA name="mag" bType="Struct" type="AnalogueValue_6fb44968-3968-4c03-89b7-7505a4eb415c" />
    </DAType>
    <DAType id="AnalogueValue_e30d483a-4549-4610-b56e-a23c0223b99a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_053d8e88-21bc-4a0d-be21-9855c0482038">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0938609b-07ec-4004-bf75-dcdf30302583">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_69aca37d-940d-44d0-9432-78daf2b985fe">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b05a284a-0035-4bb0-9f19-fbc7a8981696">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_30dddd20-b306-4393-8c7d-bb5289e7fc57">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a05e5f4f-9a32-4893-9d41-2c2acb76e2d9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7041a81b-fd49-4170-a2a9-16fb1e2a043f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d6c56bd7-9617-4588-90b0-39cbcbb3a175">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ba5c1290-8399-4358-b914-fa98aeb53dee">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bfaaac5b-4ba8-4752-81eb-d77a77ca367d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a40bf50f-e33d-44db-936d-9564a4abfb72">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a82932d3-a175-4f5a-8729-2b1883768c14">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ba242dda-6a3f-4d1f-b842-2b03452f741c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ca7f8ea3-6f56-4a82-9fa4-47cab7dbe317">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4b555eda-5675-4562-bcd2-16bc38025f75">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_263d5002-088c-438a-9911-ea54085c7ea1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_56018f95-b7e8-4766-9029-0f4addc17513">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_38d86a6a-bb04-4f03-9c90-2e6de750e439">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_30efc65c-00c6-47d3-9948-f34d51f78c5f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3afe3969-ab22-40a4-9c55-7384189e55a4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1cdb3bcd-9747-46e7-94e3-37f49c4918ff">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2aca1722-967f-4274-ab60-303aa2cb59df">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_fcb35db2-4d69-4459-bc5f-ef7fe4a2d3c5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3f6a6b6e-dc76-498e-83e3-4b398ba89369">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f08cfa66-0225-405a-92cc-9db1cfca6959">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_229d4b4c-c334-4414-b0ec-81d5019c93d7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_022b1bcb-467d-471f-9d5d-ac4182626eb8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a2e3a44c-2527-4242-a656-283db418a7c7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_89e413ac-80cb-4911-95f3-ab4b2cd7c5c7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1267f68c-0dba-42e0-b56c-7ad60fac5903">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ca1140bb-25ed-489a-b5d2-f9021bbf3cc7">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a2526308-9627-4c90-b498-a303ac0932bb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f3e66a11-0dad-408d-af0d-32d209152ab0">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c4606415-3536-486f-a346-3077c6455017">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c97237ae-b538-4f86-947e-244eafa01625">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_951290a1-ee8e-4f32-a59f-11439f4155a6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_888602f3-c8c7-4336-b8c0-01df322ee7ca">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f7a4907f-7066-490e-a2e9-a4fb89770d14">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_18f3cc36-7083-4324-bc2c-a27214a5f046">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_2e58b861-75a5-4dff-8aaf-c04566a42499">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b0215030-91bb-4794-8b7e-99784aff5297">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4d2322e7-3896-4976-ac7e-9df5355e31a9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4d7c0271-5d1e-4e81-b5e4-83bba0ed7b42">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_eaa1fd2e-90ce-41dd-a0e8-5a8ca02d762e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_37ad5d72-d270-4739-8ea2-129124ccf8a4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_be0f903d-efd6-4794-87fb-61aa3a86fe27">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_eaf339f9-a08b-40c9-a710-7f11a118b024">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_502d9dd7-5980-4899-9b52-8fda299d4e84">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_70f09166-1de2-42e4-849f-8f15285b6c82">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ac7bfd17-7433-481a-a346-3aee0a4bae3d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b1a12d8c-840a-4332-bfa8-3a787f70e09a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9055fa82-a595-4958-b006-a974e4636f42">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_db33f675-e2a5-40a8-9e57-777eda8be322">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4962bf4b-aac0-40f3-bede-ee7123e4e1e5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4d74d3f6-4c47-46da-af98-757daf17fe4d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1191bd97-8ba2-469e-a5b8-1c72cae03d13">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_24259500-11cb-4a7e-9750-ace62ac849ef">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_237a30b6-a5ae-4ad7-8e5d-6e3f1ed8e3f8">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_328b2d0b-454b-4299-9c06-20497828ef2a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_8abcf0e5-92c5-4d15-8605-deb4bc705543">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_af58a1a2-d93a-45e9-8639-09a402f1fe4a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_998c5c57-f855-4cc5-8345-c38070381017">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_554e5889-3709-4266-a8a1-2933dcee3ec2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0fa8443f-b200-439b-b3cb-05f4498b211c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_103dca19-1337-4ae2-b46c-950bd1315118">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_fdb2c5e7-c233-45f4-967f-ae3658aa8e65">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_baa8552a-acbd-4b0a-952d-0393aee3813a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7b1e2f0e-5d78-4e9c-94f1-924ee54eeddc">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_89b3e3eb-238f-47a6-adb3-6f65ad7f5bd9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_564fc5df-1e38-4299-a2d8-0550f8c6f4d3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6a398f74-28f1-4508-9160-c8471f493de2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_22d6e9e8-212e-4eb9-bff6-006411f232ea">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6b296bcc-c6ce-47f0-995f-6bf45f156d38">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d6cd7a27-be2d-47c9-94ff-2281c67871d5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4730a8c2-3a00-40c3-9946-6c35851f6caf">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_02375694-0bff-4d3b-a6a6-f9febdf5af5f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e7676204-7c93-4940-a752-a77bf6fb7177">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_109ef998-cd8f-4c2b-88fc-cbc2adfaa2ab">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_57a33250-f0e2-4890-8b74-783f757a4563">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_793dbd03-7613-4ab1-b45a-a651824fcd1e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_daa3f40f-ddaf-4641-8eb3-6f2902744aea">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6e5fcc97-d98f-4ce9-9f51-a72a61d2de4c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1a7f8cbd-6890-49ac-88a0-7981db9b3ef6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e7b35e8d-791b-45d2-b923-a8950b3f994b">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4a94e810-09b1-40c0-9c1d-a91451afc19f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_00a28eaf-34c9-40cf-9bc7-5df7a3689442">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c8048579-6f61-4bb2-b3af-a6d31d448a15">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_46ce0cd6-f292-4e5e-8cb0-87cd88d8846b">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b867c35a-02aa-49e0-bb52-430adcb36b7e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_00883a23-e8c2-4873-81fc-a83d8bc0008a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_55358345-a4f7-44b9-8cfd-b3084c27fc81">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ae691e6c-8c4a-4597-8deb-1b200904f1d3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_77908080-ab6b-473f-9952-c8d0c53504e3">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e75d859c-99f9-4f8a-99c4-126e203c0c88">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6cce342e-a517-415e-9366-f9bd3d380ccf">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_eca49c3d-1908-489f-9c5d-94811644df7f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b599321b-e3c0-4c3f-8654-a2d8423ef043">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_9924c553-a8f6-4acd-b9b1-73a425205606">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a799e2b2-b532-463a-b19a-78426e2c9a50">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_00e1002b-09bb-4afc-a2e0-a161b65579d5">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_550b8dd2-2a15-40ad-a945-5f6e4e5c3954">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d7bebdae-2256-4a94-8fd9-b8dd9aae4885">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b5434829-a554-41e2-bcc4-d15f6abfbe09">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_cebe602f-25fc-4eb0-8ee5-238f54d3b8db">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bf992c71-3f48-4589-8336-0e142aac67fe">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_8c5a1e8c-c81c-4757-b22f-f35c0b51fefb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b0a8e6a1-54cc-43bf-8688-e27cef989c59">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_56f5e574-7886-476a-b315-156ddd59725d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_296a810a-528e-488e-b9a1-5f0267455d1c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0e0482a2-003e-4546-8674-0823c8520f56">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_be20c9a8-90dd-4b8c-b1f1-9587f7e2fe6e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e8b1aabc-8d5c-4456-a440-77f016c3c868">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_3ea4fe99-671f-495d-b256-00a5c7a6a447">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_90effbfc-dd64-4ffe-90dc-0f85c0e55d02">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_e079f381-b50d-4123-a0af-83a083d9ad75">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b90273f9-e116-4ab4-8e49-8ce39e0c8143">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_d2e2340d-0e57-4154-b907-1a4253a1d2fb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_90a3680b-c059-4742-86b6-0359ce26bd8e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_006436c7-291f-4af7-9c76-6cb58842df8c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_ce8cc547-d469-437f-b838-9fc5560d34d1">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_985569e5-16d7-4889-b509-6149f69a669d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_02d3e401-dc35-48db-ba96-8ac53c275e85">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c168482f-c3e4-41e0-b4e4-9b34d9e4497a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_11cecae9-ce88-4d59-8c7e-5406cd6d9961">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_85db8a13-f33d-44a2-85a1-048c36432b97">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_fd8cf6e2-35cb-467f-8bfa-fe2f812aa48e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_20fc591b-c281-4cd3-a056-1231449ddb97">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_831584f0-51f8-4c7e-91fa-b40b883c3b44">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_fe814cfe-55ba-4cfc-8496-6a1c15e25a97">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0c84f97d-0093-452c-b95c-d045690e06be">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c4780d9d-2943-490a-8d11-233cd62c9177">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b262ee25-bc60-472f-828c-bf2149d46e98">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_bf322061-87c8-4ae9-af4b-5ec837483427">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7334e0ab-bd10-4b34-abb0-e24779eb6900">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_6a4d6484-6da8-4b41-92bd-36c478aac7c6">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_02b262b7-e216-4afc-b4da-16951f79eed9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5c3a75b6-9220-4858-8c58-9c585c76b1ed">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4aabc54a-b03b-4422-91ef-a71a778fe1a2">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b32a0cc5-c345-4b89-9671-c0c360f629eb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_742e26e5-e25d-4182-84c6-ff1c32da0c4a">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0138ff88-20ec-4821-ab4c-48711dae707e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_5e207f9a-bd49-4443-9c7a-6e0f5770ea52">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0fdce59f-19a4-44a2-b2fd-56df3b3f431c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_39cc06f9-2f11-4326-84c2-c9d97b577d42">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f5fdedc2-4088-469f-8275-0968f8dbae11">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_57c61c8a-e17f-42c2-ae33-f8e88646371f">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_baf96330-f7e1-49a1-900c-0fec8a69da83">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4ab4cd12-997e-4090-8f27-0204ddc1059d">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_884f22fa-2c12-4173-ab13-e50e8690dafa">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_da585eab-0647-4c92-8825-5138618d584c">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_a1236444-711c-404e-a92f-3c48ebcf97c9">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_f59bfef4-7e88-4cbd-b8d6-35c187ec5bfb">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_0fc3b280-aa27-4fe0-9c9c-9cdb08734695">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_1c878568-a77e-4fc7-94ab-651b097f30b4">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_8ea389e4-7be2-4874-bade-519159950284">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_7548c86b-faf3-4a73-be81-8ae229d0c63e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_c264fbf5-aa00-44dd-8347-dd684f8f77bf">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_b14c1d7a-bee9-4dba-84f9-a062fb812b35">
      <BDA name="i" bType="INT32" />
    </DAType>
    <DAType id="AnalogueValue_4789b50f-7249-4b08-b677-e9f02a74af5e">
      <BDA name="i" bType="INT32" />
    </DAType>
    <EnumType id="BehaviourModeKind">
      <EnumVal ord="1">on</EnumVal>
      <EnumVal ord="2">blocked</EnumVal>
      <EnumVal ord="3">test</EnumVal>
      <EnumVal ord="4">test/blocked</EnumVal>
      <EnumVal ord="5">off</EnumVal>
    </EnumType>
    <EnumType id="HealthKind">
      <EnumVal ord="1">Ok</EnumVal>
      <EnumVal ord="2">Warning</EnumVal>
      <EnumVal ord="3">Alarm</EnumVal>
    </EnumType>
    <EnumType id="CtlModelKind">
      <EnumVal ord="1">status-only</EnumVal>
      <EnumVal ord="2">direct-with-normal-security</EnumVal>
      <EnumVal ord="3">sbo-with-normal-security</EnumVal>
      <EnumVal ord="4">direct-with-enhanced-security</EnumVal>
      <EnumVal ord="5">sbo-with-enhanced-security</EnumVal>
    </EnumType>
    <EnumType id="FaultDirectionKind">
      <EnumVal ord="1">unknown</EnumVal>
      <EnumVal ord="2">forward</EnumVal>
      <EnumVal ord="3">backward</EnumVal>
      <EnumVal ord="4">both</EnumVal>
    </EnumType>
  </DataTypeTemplates>
</SCL>