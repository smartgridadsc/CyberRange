<?xml version="1.0" encoding="utf-8"?>
<SCL version="2007" revision="B" xmlns:sxy="http://www.iec.ch/61850/2003/SCLcoordinates" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://www.iec.ch/61850/2003/SCL SCL.xsd http://www.iec.ch/61850/2003/SCLcoordinates SCL_Coordinates.xsd" xmlns="http://www.iec.ch/61850/2003/SCL">
  
  
  <Communication>
    <SubNetwork name="SubNet" type="8-MMS" desc="">
      <BitRate unit="b/s" multiplier="M">100</BitRate>

     <ConnectedAP iedName="Feeder1IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.161</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C0_S1</P>
        </PhysConn>
      </ConnectedAP>

<ConnectedAP iedName="T166IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.162</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C1_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="T111IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.163</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C2_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L0IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.178</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C3_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L1IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.176</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C4_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L2IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.164</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C5_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L3IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.165</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C6_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L4IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.166</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C7_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="SS1TIED" apName="W1">
        <Address>
          <P type="IP">192.168.170.167</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C8_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="CB11IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.174</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C9_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="CB12IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.175</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C10_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="Feeder2IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.168</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C11_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="T266IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.169</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C12_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="T211IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.170</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C13_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L5IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.171</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C14_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L6IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.172</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C15_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L7IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.173</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C16_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L8IED" apName="W1">
        <Address>
          <P type="IP">192.168.170.177</P>
          <P type="IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C17_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="L9IED" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">192.168.170.179</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">192.168.170.2</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C18_S1</P>
        </PhysConn>
       </ConnectedAP>

      <ConnectedAP iedName="PLC_S1" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">192.168.170.181</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">192.168.170.2</P>
        </Address>
       <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">CP_S1</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="HMI_S1" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">192.168.170.182</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">192.168.170.2</P>
        </Address>
       <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">CH_S1</P>
        </PhysConn>
      </ConnectedAP>


-----------------------------
      <ConnectedAP iedName="SW1" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C0_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C1_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Cable">C2_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C3_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Cable">C4_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Cable">C5_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Cable">C6_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Cable">C7_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">9</P>
          <P type="Cable">C8_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">10</P>
          <P type="Cable">C9_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">11</P>
          <P type="Cable">C10_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">12</P>
          <P type="Cable">CS12_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">13</P>
          <P type="Cable">CS13_S1</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">14</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">15</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">16</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">17</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">18</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">19</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">20</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">21</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">22</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="SW2" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">C11_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">C12_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
          <P type="Cable">C13_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
          <P type="Type">Connection</P>
          <P type="Cable">C14_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
          <P type="Cable">C15_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
          <P type="Cable">C16_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
          <P type="Cable">C17_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
          <P type="Cable">C18_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">9</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">10</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">11</P>
          <P type="Type">Connection</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">12</P>
          <P type="Cable">CS23_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">13</P>
          <P type="Cable">CS12_S1</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">14</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">15</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">16</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">17</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">18</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">19</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">20</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">21</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">22</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>

      <ConnectedAP iedName="SW3" apName="W1">
        <Address>
          <P type="IP" xsi:type="tP_IP">0.0.0.0</P>
          <P type="IP-SUBNET" xsi:type="tP_IP-SUBNET">255.255.255.0</P>
          <P type="IP-GATEWAY" xsi:type="tP_IP-GATEWAY">0.0.0.0</P>
        </Address>
        <PhysConn type="Connection">
          <P type="Port">1</P>
          <P type="Type">Connection</P>
          <P type="Cable">CP_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">2</P>
          <P type="Type">Connection</P>
          <P type="Cable">CH_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">3</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">4</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">5</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">6</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">7</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">8</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">9</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">10</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">11</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">12</P>
          <P type="Cable">CS13_S1</P>
        </PhysConn>
        <PhysConn type="Connection">
          <P type="Port">13</P>
          <P type="Cable">CS23_S1</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">14</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">15</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">16</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">17</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">18</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">19</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">20</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">21</P>
          <P type="Type">Connection</P>
        </PhysConn>
       <PhysConn type="Connection">
          <P type="Port">22</P>
          <P type="Type">Connection</P>
        </PhysConn>
      </ConnectedAP>
    </SubNetwork>
  </Communication>
  
  <IED name="SW1" owner="8b0f9f85-3f28-45cf-8c60-af547e20488a" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:y="7" sxy:x="24" desc="switch">
    <AccessPoint name="W1" />
  </IED>
  <IED name="SW2" owner="8b0f9f85-3f28-45cf-8c60-af547e20488a" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="59" sxy:y="7" desc="switch">
    <AccessPoint name="W1" />
  </IED>
  <IED name="SW3" owner="8b0f9f85-3f28-45cf-8c60-af547e20488a" type="GENERIC_SWITCH" manufacturer="Grid Software" configVersion="1.0" originalSclVersion="2007" originalSclRevision="B" sxy:x="42" sxy:y="19" desc="switch">
    <AccessPoint name="W1" />
  </IED>
  
</SCL>
