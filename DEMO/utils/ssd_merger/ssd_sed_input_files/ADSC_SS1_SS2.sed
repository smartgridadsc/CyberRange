<?xml version="1.0" encoding="utf-8"?>
<SCL version="2007" revision="B" xmlns:sxy="http://www.iec.ch/61850/2003/SCLcoordinates" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.iec.ch/61850/2003/SCL SCL.xsd http://www.iec.ch/61850/2003/SCLcoordinates SCL_Coordinates.xsd" xmlns="http://www.iec.ch/61850/2003/SCL">
  <Header revision="A" version="1" id="25ee4188-5b2a-4489-b2ea-17f4d631bdf3" toolID="Grid Software SCL Matrix" nameStructure="IEDName">
    <Text>ADSC_SS1_SS2</Text>
    <History>
      <Hitem revision="A" version="1" when="2022-03-14T12:49:46Z" who="Grid Software SCL Matrix" what="SSD Export" />
    </History>
  </Header>

	<Substation name = "ADSC_SS1" desc="substation"/>
	<Substation name = "ADSC_SS2" desc="substation"/>

	<Substation name = "ADSC_SS1">
		<VoltageLevel name="66_1" sxy:x="15" sxy:y="1" numPhases="3" nomFreq="50">
			<Voltage unit="V" multiplier="k">66</Voltage>
			      <Bay name="L1" sxy:x="11" sxy:y="20">
					<ConductingEquipment name="CBR" type="CBR" sxy:x="3" sxy:y="4">
						<Terminal connectivityNode="ADSC_SS2/66_1/Bus1/CN" substationName="ADSC_SS2" voltageLevelName="66_1" bayName="Bus1" cNodeName="CN" />
						<Terminal connectivityNode="ADSC_SS1/66_1/Bus1/CN" substationName="ADSC_SS1" voltageLevelName="66_1" bayName="Bus1" cNodeName="CN" />
					</ConductingEquipment>
				</Bay>
		</VoltageLevel>
		<VoltageLevel name="66_2" sxy:x="56" sxy:y="1" numPhases="3" nomFreq="50">
			<Voltage unit="V" multiplier="k">66</Voltage>
				<Bay name="L8" sxy:x="15" sxy:y="20">
					<ConductingEquipment name="CBR" type="CBR" sxy:x="3" sxy:y="4">
						<Terminal connectivityNode="ADSC_SS2/66_2/Bus2/CN" substationName="ADSC_SS2" voltageLevelName="66_2" bayName="Bus2" cNodeName="CN" />
						<Terminal connectivityNode="ADSC_SS1/66_2/Bus2/CN" substationName="ADSC_SS1" voltageLevelName="66_2" bayName="Bus2" cNodeName="CN" />
					</ConductingEquipment>
				</Bay>
		</VoltageLevel>
	</Substation>
</SCL>