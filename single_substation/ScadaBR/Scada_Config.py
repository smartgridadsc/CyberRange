#
#  Scada_Config.py
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

from lxml import etree
from io import StringIO

import xml.etree.ElementTree as ET
import lxml
import xmltodict, json
import tempfile as tfile
import sys
import os
import json
import subprocess
import webbrowser
import time


if __name__ == "__main__":

    filename_xml = sys.argv[1]
    filename_xsd = sys.argv[2]

    if len(sys.argv) != 3:
        print("Usage: %s document.xml schema.xsd" % (sys.argv[0]))
        exit(0)

    with open(filename_xsd,'r') as SchemaXsd_file:
        SchemaXsd_check = SchemaXsd_file.read()

    with open(filename_xml,'r') as Xml_file:
        Xml_check = Xml_file.read()


    SchemaXsd_doc = etree.parse(StringIO(SchemaXsd_check))
    SchemaXsd = etree.XMLSchema(SchemaXsd_doc)

    try:
        doc = etree.parse(StringIO(Xml_check))
        print('XML syntax ok.')

    except IOError:
        print('Invalid File')

    except etree.XMLSyntaxError as err:
        print('XML Syntax Error, see error_syntax.log')
        with open('error_syntax.log', 'w') as error_log_file:
            error_log_file.write(str(err.error_log))
        quit()

    except:
        print('Unknown error, exiting.')
        quit()

    try:
        SchemaXsd.assertValid(doc)
        print('XML valid, schema validation ok.')

        tree = ET.parse(filename_xml)
        root = tree.getroot()

        def GenerateXML(fileName):

            rootXML = ET.Element("root")
            for i in root.findall('dataSources'):
                dataSources = ET.Element('dataSources')
                rootXML.append(dataSources)

                xid = ET.SubElement(dataSources, 'xid')
                xid.text = i.find('xid').text

                type = ET.SubElement(dataSources, 'type')
                type.text = i.find('type').text

                transportType = ET.SubElement(dataSources, 'transportType')
                transportType.text = i.find('transportType').text

                updatePeriodType = ET.SubElement(dataSources, 'updatePeriodType')
                updatePeriodType.text = i.find('updatePeriodType').text

                host = ET.SubElement(dataSources, 'host')
                host.text = i.find('host').text

                name = ET.SubElement(dataSources, 'name')
                name.text = i.find('name').text

                port = ET.SubElement(dataSources, 'port')
                port.text = i.find('port').text

                updatePeriods =  ET.SubElement(dataSources, 'updatePeriods')
                updatePeriods.text = i.find('updatePeriods').text



            for y in root.findall('dataPoints'):
                dataPoints = ET.Element('dataPoints')
                rootXML.append(dataPoints)

                xid = ET.SubElement(dataPoints, 'xid')
                xid.text = y.find('xid').text

                for pointL in y.iter('pointLocator'):
                    pointLocator = ET.SubElement(dataPoints, 'pointLocator')

                    PLRange = ET.SubElement(pointLocator, 'range')
                    PLRange.text = pointL.find('range').text

                    modbusDataType = ET.SubElement(pointLocator,'modbusDataType')
                    modbusDataType.text = pointL.find('modbusDataType').text

                    offset = ET.SubElement(pointLocator,'offset')
                    offset.text = pointL.find('offset').text

                engineeringUnits = ET.SubElement(dataPoints, 'engineeringUnits')
                engineeringUnits.text = y.find('engineeringUnits').text

                dataSourceXid = ET.SubElement(dataPoints, 'dataSourceXid')
                dataSourceXid.text = y.find('dataSourceXid').text

                deviceName = ET.SubElement(dataPoints, 'deviceName')
                deviceName.text = y.find('deviceName').text

                name = ET.SubElement(dataPoints, 'name')
                name.text = y.find('name').text

            tree = ET.ElementTree(rootXML)

            with open(fileName, "wb") as files:
                tree.write(files)

        if __name__ == "__main__":
            GenerateXML("test1.xml")

        temp_tree = ET.parse('test1.xml')
        temp_root = temp_tree.getroot()
        xmlstr = ET.tostring(temp_root, method='xml')

        def _decode(o):
            if isinstance(o, str) and o.isdigit(): 
                return int(o)
            elif isinstance(o, dict):
                return {k: _decode(v) for k, v in o.items()}
            elif isinstance(o, list):
                return [_decode(v) for v in o]
            else:
                return o

        with open("test1.xml", 'r') as xml_file:
            xml_string = xml_file.read()
            obj = xmltodict.parse(xml_string)
            xml_file.close()

        json_string = json.dumps(xmltodict.parse(xml_string, force_list={'dataSources','dataPoints'}), indent=4)
        json_data = json.loads(json_string, object_hook=_decode)["root"]

        with open("data.json", "w") as json_file:
            save_data = json.dump(json_data, json_file, indent=4)
            json_file.close()
            print("JSON file generated")
        os.remove("test1.xml")

    except etree.DocumentInvalid as err:
        print('Schema validation error, see error_schema.log')
        with open('error_schema.log', 'w') as error_log_file:
            error_log_file.write(str(err.error_log))
        quit()

    except:
        print('Unknown error, exiting.')
        quit()


#bat_path = "/opt/tomcat6/apache-tomcat-6.0.53"
#sh_file = bat_path + r"/bin/startup.sh"
#subprocess.call(sh_file)

#time.sleep(5)

#webbrowser.open('http://localhost:9090/ScadaBR/')

