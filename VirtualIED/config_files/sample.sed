<?xml version="1.0"?>
<SCL xmlns:sxy="http://www.iec.ch/61850/2003/SCLcoordinates" xmlns="http://www.iec.ch/61850/2003/SCL">
    <Header id="SS-SS S1 – S2" toolID="SSI-Tool" nameStructure="IEDName"/>
    <Substation name = "S1" desc="substation">
	</Substation>
    <Substation name = "S2" desc="substation">
	</Substation>
    <Substation name = "LineL2" desc="Line between S1 and S2">
        <VoltageLevel name="H1" desc="Line Voltage Level">
            <Bay name="L2" desc="Bay" sxy:x="55" sxy:y="62" sxy:dir="vertical">
                <ConductingEquipment name="LL2" desc="Overhead line" type="LIN" sxy:x="2" sxy:y="12">
                    <Terminal name="S1H1B4N1" connectivityNode="S1/D1/B4/N1" substationName="S1" voltageLevelName="H1" bayName="B4" cNodeName="N1" />
                    <Terminal name="S2H1B1N1" connectivityNode="S2/H1/B1/N1" substationName="S2" voltageLevelName="H1" bayName="B1" cNodeName="N1" />
                </ConductingEquipment>
            </Bay>
        </VoltageLevel>
    </Substation>
    <Communication>
        <SubNetwork name="S1net" desc="IEC61850 through both stations" type="8-MMS">
            <ConnectedAP iedName="IED100" apName="S1">
                <Address>
                    <P type="SA">0</P>
                    <P type="IP">192.168.170.200</P>
                    <P type="IP-SUBNET">255.255.255.0</P>
                    <P type="OSI-AP-Title">1,3,9999,23</P>
                    <P type="OSI-AE-Qualifier">23</P>
                    <P type="OSI-TSEL">0001</P>
                    <P type="OSI-PSEL">00000001</P>
                    <P type="OSI-SSEL">0001</P>
                </Address>
				<GSE ldInst="LD1" cbName="CBStatusIED100_GOOSE">
                    <Address>
                        <P type="IP">238.0.101.1</P>
                        <P type="APPID">0101</P>
                        <P type="VLAN-ID">0</P>
                        <P type="VLAN-PRIORITY">4</P>
                    </Address>
                    <MinTime multiplier="m" unit="s">1000</MinTime>
                    <MaxTime multiplier="m" unit="s">60000</MaxTime>
                </GSE>
                <SMV cbName="MeasurementsIED100_SV" desc="MeasurementsIED100_SV" ldInst="LD1">
                    <Address>
                        <P type="IP">238.0.102.1</P>
                        <P type="APPID">0110</P>
                        <P type="VLAN-ID">0</P>
                        <P type="VLAN-PRIORITY">4</P>
                    </Address>
                </SMV>
                
            </ConnectedAP>
        </SubNetwork>
        <SubNetwork name="S2net" desc="IEC61850 through both stations" type="8-MMS">
            <ConnectedAP iedName="IED0" apName="W1">
                <Address>
                    <P type="IP">192.168.170.140</P>
                    <P type="IP-SUBNET">255.255.255.0</P>
                    <P type="IP-GATEWAY">192.168.170.2</P>
                </Address>
                <GSE ldInst="LD1" cbName="CBStatusIED0_GOOSE">
                    <Address>
                        <P type="IP">238.0.1.1</P>
                        <P type="APPID">0001</P>
                        <P type="VLAN-ID">0</P>
                        <P type="VLAN-PRIORITY">4</P>
                    </Address>
                    <MinTime multiplier="m" unit="s">1000</MinTime>
                    <MaxTime multiplier="m" unit="s">60000</MaxTime>
                </GSE>
                <SMV cbName="MeasurementsIED0_SV" desc="MeasurementsIED0_SV" ldInst="LD1">
                    <Address>
                        <P type="IP">238.0.2.1</P>
                        <P type="APPID">0010</P>
                        <P type="VLAN-ID">0</P>
                        <P type="VLAN-PRIORITY">4</P>
                    </Address>
                </SMV>
            </ConnectedAP>
        </SubNetwork>
    </Communication>
    <IED name="IED100" type="" manufacturer="">
        <Services>
            <DynAssociation />
            <GetDirectory />
            <GetDataObjectDefinition />
            <DataObjectDirectory />
            <GetDataSetValue />
            <DataSetDirectory />
            <ConfDataSet max="10" maxAttributes="100" modify="true" />
            <ReadWrite />
            <ConfReportControl max="10" bufConf="false" />
            <GetCBValues />
            <SMVSettings cbName="L2Diff22-R-SV" datSet="measurementsofIED22toS2" appID="0001" dataLabel="measurementsofIED22toS2" />
            <GSESettings cbName="CB22_Status-R-GOOSE" datSet="StatusofCB22" appID="0005" dataLabel="Status info of CB22" />
            <GOOSE max="10" fixedOffs="false" />
        </Services>
        <AccessPoint name="S1">
            <LDevice inst="LD1">
                <LN0 lnClass="LLN0" inst="1" lnType="LD1.LLN0">
                    <DataSet name="MeasurementsIED100">
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="A.phsA" daName="cVal" fc="MX" />
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="A.phsB" daName="cVal" fc="MX" />
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="A.phsC" daName="cVal" fc="MX" />
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="PhV.phsA" daName="cVal" fc="MX" />
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="PhV.phsB" daName="cVal" fc="MX" />
                        <FCDA ldInst="LD1" lnInst="0" lnClass="MMXU" doName="PhV.phsC" daName="cVal" fc="MX" />
                    </DataSet>
                    <DataSet name="CBStatusIED100">
                        <FCDA ldInst="LD1" lnInst="0" lnClass="XCBR" doName="Pos" daName="DPC" fc="MX" />
                    </DataSet>
                    <SampledValuesControl Name="MeasurementsIED100_SV" desc="MeasurementsIED100_SV" datSet="MeasurementsIED100">
                        <IEDName>IED0</IEDName>
                    </SampledValuesControl>
                    <GSEControl Name="CBStatusIED100_GOOSE" desc="CBStatusIED100_GOOSE" type="GOOSE" fixedOffs="false" confRev="0" appID="0005" datSet="CBStatusIED100">
                        <IEDName>IED0</IEDName>
                    </GSEControl >
                </LN0>
                <LN lnClass="MMXU" inst="0" lnType="LD1.MMXU0" />
                <LNode lnClass="XCBR" inst="0" lnType="LD1.XCBR" />
            </LDevice>
        </AccessPoint>
    </IED>
    <IED name="IED0" type="Telecontrol application" manufacturer="NOONE" configVersion="1.0">
        <Services>
            <DynAssociation />
            <SettingGroups />
            <GetDirectory />
            <GetDataObjectDefinition />
            <GetDataSetValue />
            <SetDataSetValue />
            <DataSetDirectory />
            <ConfDataSet max="2" />
            <DynDataSet max="2" maxAttributes="50" />
            <ReadWrite />
            <TimerActivatedControl />
            <ConfReportControl max="14" />
            <GetCBValues />
            <ReportSettings cbName="Conf" datSet="Conf" rptID="Conf" optFields="Conf" bufTime="Conf" trgOps="Conf" intgPd="Conf" />
            <ConfLNs fixPrefix="true" fixLnInst="true" />
            <GOOSE max="0" />
        </Services>
        <AccessPoint name="W1" desc="">
            <Server>
                <Authentication none="true" />
                <LDevice inst="LD1" desc="">
                    <LN0 desc="" lnType="LLN0_0" lnClass="LLN0" inst="">
                        <DataSet name="MeasurementsIED0">
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="A" daName="phsA.cVal" fc="MX" />
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="A" daName="phsB.cVal" fc="MX" />
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="A" daName="phsC.cVal" fc="MX" />
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="PhV" daName="phsA.cVal" fc="MX" />
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="PhV" daName="phsB.cVal" fc="MX" />
                            <FCDA ldInst="LD1" lnInst="1" lnClass="MMXU" doName="PhV" daName="phsC.cVal" fc="MX" />
                        </DataSet>
                        <DataSet name="CBStatusIED0">
                            <FCDA ldInst="LD1" prefix="" lnClass="GGIO" lnInst="1" doName="SPC1" daName="stVal" fc="ST" />
                        </DataSet>
                        <GSEControl Name="CBStatusIED0_GOOSE" desc="CBStatusIED0_GOOSE" type="GOOSE" fixedOffs="false" confRev="0" appID="0001" datSet="CBStatusIED0" />
                        <SampledValuesControl Name="MeasurementsIED0_SV" desc="MeasurementsIED0_SV" datSet="MeasurementsIED0" appID= "0010"/>
                        <ReportControl name="MeasurementsIED0_MMS" desc="" datSet="MeasurementsIED0" intgPd="1000" rptID="Measurements" confRev="0" buffered="false" bufTime="50">
                            <TrgOps dchg="true" qchg="true" dupd="true" period="true" />
                            <OptFields seqNum="true" timeStamp="true" reasonCode="true" dataSet="true" dataRef="true" entryID="true" configRef="true" />
                            <RptEnabled max="5" />
                        </ReportControl>
                        <ReportControl name="CBStatusIED0_MMS" desc="" datSet="CBStatusIED0" intgPd="1000" rptID="Controls" confRev="0" buffered="false" bufTime="50">
                            <TrgOps dchg="true" qchg="true" dupd="true" period="true" />
                            <OptFields seqNum="true" timeStamp="true" reasonCode="true" dataSet="true" dataRef="true" entryID="true" configRef="true" />
                            <RptEnabled max="5" />
                        </ReportControl>
                    </LN0>
                    <LN lnClass="MMXU" inst="1" lnType="MMXU_1" />
                    <LN desc="" lnType="GGIO_3" lnClass="GGIO" inst="1" prefix=""/>
                </LDevice>
            </Server>
        </AccessPoint>
    </IED>
    <DataTypeTemplates>
        <LNodeType id="LD1.LLN0" lnClass="LLN0">
            <DO name="NamPlt" type="LPL" />
            <DO name="Beh" type="ENS" />
            <DO name="Mod" type="ENC" />
        </LNodeType>
        <LNodeType id="LD1.XCBR" lnClass="XCBR">
            <DO name="Beh" type="ENS" />
            <DO name="Health" type="ENS" />
            <DO name="Loc" type="SPS" />
            <DO name="Mod" type="ENC" />
            <DO name="OpCnt" type="INS" />
            <DO name="Pos" type="DPC" />
            <DO name="BlkOpn" type="SPC" />
            <DO name="BlkCls" type="SPC" />
        </LNodeType>
        <LNodeType id="LD1.MMXU0" lnClass="MMXU">
            <DO name="TotW" type="MV" />
            <DO name="Beh" type="ENS" />
            <DO name="TotVAr" type="MV" />
            <DO name="TotVA" type="MV" />
            <DO name="PPV" type="DEL" />
            <DO name="PhV" type="WYE" />
            <DO name="A" type="WYE" />
        </LNodeType>
        <LNodeType id="LD1.MMXU1" lnClass="MMXU">
            <DO name="TotW" type="MV" />
            <DO name="Beh" type="ENS" />
            <DO name="TotVAr" type="MV" />
            <DO name="TotVA" type="MV" />
            <DO name="PPV" type="DEL" />
            <DO name="PhV" type="WYE" />
            <DO name="A" type="WYE" />
        </LNodeType>
    </DataTypeTemplates>
</SCL>