<?xml version="1.0"?>
<SCL xmlns:sxy="http://www.iec.ch/61850/2003/SCLcoordinates" xmlns="http://www.iec.ch/61850/2003/SCL">
	<Header id="SS-SS S1 – S2" toolID="SSI-Tool" nameStructure="IEDName" />


	<Substation name="S1" desc="substation"></Substation>
	<Substation name="S2" desc="substation"></Substation>


	<Substation name="LineL2" desc="Line between S1 and S2">
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

			<ConnectedAP iedName="TIED1" apName="P1">
				<Address>
					<P type="IP" xsi:type="tP_IP">172.16.2.11</P>
					<P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.0.0.0</P>
					<P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
					<P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
					<P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
					<P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
					<P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
					<P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
				</Address>
				<SMV cbName="Diff1_R-SV" desc="R-SV from TIED1" ldInst="MEAS">
					<Address>
						<P type="IP">238.0.0.2</P>
						<P type="APPID">0010</P>
						<P type="VLAN-ID">0</P>
						<P type="VLAN-PRIORITY">4</P>
					</Address>
				</SMV>
				<GSE ldInst="CTRL" cbName="TIED1_Status-R-GOOSE" desc="Status info of CB TIED1">
					<Address>
						<P type="IP">238.0.1.1</P>
						<P type="APPID">0005</P>
						<P type="VLAN-ID">0</P>
						<P type="VLAN-PRIORITY">4</P>
					</Address>
					<MinTime multiplier="m" unit="s">1000</MinTime>
					<MaxTime multiplier="m" unit="s">60000</MaxTime>
				</GSE>
			</ConnectedAP>
		</SubNetwork>

		<SubNetwork name="S2net" desc="IEC61850 through both stations" type="8-MMS">

			<ConnectedAP iedName="S1IED1" apName="P2">
				<Address>
					<P type="IP" xsi:type="tP_IP">172.16.4.11</P>
					<P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.0.0.0</P>
					<P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
					<P type="OSI-AP-Title" xsi:type="tP_OSI-AP-Title">1119991</P>
					<P type="OSI-AE-Qualifier" xsi:type="tP_OSI-AE-Qualifier">12</P>
					<P type="OSI-TSEL" xsi:type="tP_OSI-TSEL">0001</P>
					<P type="OSI-SSEL" xsi:type="tP_OSI-SSEL">0001</P>
					<P type="OSI-PSEL" xsi:type="tP_OSI-PSEL">00000001</P>
				</Address>
				<SMV cbName="Diff2_R-SV" desc="R-SV from S1IED1" ldInst="MEAS">
					<Address>
						<P type="IP">238.0.0.1</P>
						<P type="APPID">0011</P>
						<P type="VLAN-ID">0</P>
						<P type="VLAN-PRIORITY">4</P>
					</Address>
				</SMV>
				<GSE ldInst="CTRL" cbName="S1IED1_Status-R-GOOSE" desc="Status info of CB S1IED1">
					<Address>
						<P type="IP">238.0.1.2</P>
						<P type="APPID">0006</P>
						<P type="VLAN-ID">0</P>
						<P type="VLAN-PRIORITY">4</P>
					</Address>
					<MinTime multiplier="m" unit="s">1000</MinTime>
					<MaxTime multiplier="m" unit="s">60000</MaxTime>
				</GSE>
			</ConnectedAP>

		</SubNetwork>
	</Communication>


	<IED name="TIED1" type="" manufacturer="">
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
			<SMVSettings cbName="Diff1_R-SV" datSet="MDS1" appID="0010" dataLabel="measurementsofTIED1toS1IED1" />
			<GSESettings cbName="TIED1_Status-R-GOOSE" datSet="CDS" appID="0005" dataLabel="Status info of CB TIED1" />
			<GOOSE max="10" fixedOffs="false" />
		</Services>
		<AccessPoint name="P1">
			<LDevice inst="CTRL">
				<LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0">
					<DataSet name="CDS">
						<FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="MX" />
					</DataSet>
					<GSEControl Name="TIED1_Status-R-GOOSE" desc="Status info of CB TIED1" type="GOOSE" fixedOffs="false" confRev="0" appID="0005" datSet="CDS">
						<IEDName>S1IED1</IEDName>
					</GSEControl>
				</LN0>
				<LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR">
					<DOI name="Pos">
						<DAI valImport="true" name="stVal">
							<Val>On</Val>
						</DAI>
						<DAI valImport="true" name="ctlModel">
							<Val>direct-with-normal-security</Val>
						</DAI>
						<SDI name="Oper">
							<DAI valImport="false" name="ctlVal">
								<Val>true</Val>
							</DAI>
						</SDI>
					</DOI>
				</LN>

			</LDevice>
			<LDevice inst="MEAS">
				<LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0">
					<DataSet name="MDS1" desc="measurementsofTIED1toS1IED1">
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="2" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.f" fc="MX" />
					</DataSet>
					<SampledValuesControl Name="Diff1_R-SV" desc="R-SV from TIED1" datSet="MDS1">
						<IEDName>S1IED1</IEDName>
					</SampledValuesControl>
				</LN0>
				<LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU1" />
				<LN lnClass="MMXU" inst="2" lnType="MEAS.MMXU2" />

			</LDevice>
		</AccessPoint>
	</IED>

	<IED name="S1IED1" type="" manufacturer="">
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
			<SMVSettings cbName="Diff2_R-SV" datSet="MDS2" appID="0002" dataLabel="measurementsofS1IED1toTIED1" />
		</Services>
		<AccessPoint name="P2">
			<LDevice inst="CTRL">
				<LN0 lnClass="LLN0" inst="" lnType="CTRL.LLN0">
					<DataSet name="CDS2">
						<FCDA ldInst="CTRL" lnInst="1" lnClass="XCBR" doName="Pos" daName="stVal" fc="MX" />
					</DataSet>
					<GSEControl Name="S1IED1_Status-R-GOOSE" desc="Status info of CB S1IED1" type="GOOSE" fixedOffs="false" confRev="0" appID="0006" datSet="CDS2">
						<IEDName>TIED1</IEDName>
					</GSEControl>
				</LN0>
				<LN lnClass="XCBR" inst="1" lnType="CTRL.XCBR">
					<DOI name="Pos">
						<DAI valImport="true" name="stVal">
							<Val>On</Val>
						</DAI>
						<DAI valImport="true" name="ctlModel">
							<Val>direct-with-normal-security</Val>
						</DAI>
						<SDI name="Oper">
							<DAI valImport="false" name="ctlVal">
								<Val>true</Val>
							</DAI>
						</SDI>
					</DOI>
				</LN>
			</LDevice>

			<LDevice inst="MEAS">
				<LN0 lnClass="LLN0" inst="" lnType="MEAS.LLN0">
					<DataSet name="MDS2" desc="measurementsofS1IED1toTIED1">
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsA" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsB" daName="cVal.mag.f" fc="MX" />
						<FCDA ldInst="MEAS" lnInst="1" lnClass="MMXU" doName="A.phsC" daName="cVal.mag.f" fc="MX" />
					</DataSet>
					<SampledValuesControl Name="Diff2_R-SV" desc="R-SV from S1IED1" datSet="MDS2">
						<IEDName>TIED1</IEDName>
					</SampledValuesControl>
				</LN0>
				<LN lnClass="MMXU" inst="1" lnType="MEAS.MMXU" />
			</LDevice>
		</AccessPoint>
	</IED>

	<DataTypeTemplates>
		<LNodeType id="CTRL.LLN0" lnClass="LLN0">
			<DO name="NamPlt" type="LPL" />
			<DO name="Beh" type="ENS" />
			<DO name="Mod" type="ENC" />
		</LNodeType>
		<LNodeType id="MEAS.LLN0" lnClass="LLN0">
			<DO name="NamPlt" type="LPL" />
			<DO name="Beh" type="ENS" />
			<DO name="Mod" type="ENC" />
		</LNodeType>
		<LNodeType id="CTRL.XCBR" lnClass="XCBR">
			<DO name="Beh" type="ENS" />
			<DO name="Health" type="ENS" />
			<DO name="Loc" type="SPS" />
			<DO name="Mod" type="ENC" />
			<DO name="OpCnt" type="INS" />
			<DO name="Pos" type="DPC" />
			<DO name="BlkOpn" type="SPC" />
			<DO name="BlkCls" type="SPC" />
		</LNodeType>
		<LNodeType id="MEAS.MMXU1" lnClass="MMXU">
			<DO name="TotW" type="MV" />
			<DO name="Beh" type="ENS" />
			<DO name="TotVAr" type="MV" />
			<DO name="TotVA" type="MV" />
			<DO name="PPV" type="DEL" />
			<DO name="PhV" type="WYE" />
			<DO name="A" type="WYE" />
		</LNodeType>
		<LNodeType id="MEAS.MMXU2" lnClass="MMXU">
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
