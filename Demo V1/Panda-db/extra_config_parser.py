import xml.etree.ElementTree as ET  # ElementTree - functions to read and manipulate XMLs.

class ConfigParser:
    def __init__(self, extra_config_path):
        self.extra_config_dict = {'IFL': {}, 'CBR': {}, 'TRANS': {}, 'CABLE': {}, 'GEN':{}}
        self.extra_config_path = extra_config_path
        self.root = ET.parse(extra_config_path)

    def gen_json(self):
        for load in self.root.findall('load/conduct'):
                temp = []
                temp.append(self.time_series_data(load.find('p')))
                temp.append(float(load.find('cablelength').text))
                temp.append(load.find('cabletype').text)
                self.extra_config_dict["IFL"][load.find("location").text] = temp

        for cbr in self.root.findall('circuitbreaker/conduct'):
            self.extra_config_dict["CBR"][cbr.find('location').text] = [self.time_series_data(cbr.find('inoperation'))]

        for trans in self.root.findall('transformer/conduct'):
                 temp = []
                 temp.append(self.time_series_data(trans.find('p')))
                 temp.append(float(trans.find('cablelength').text))
                 temp.append(trans.find('cabletype').text)
                 temp.append(self.time_series_data(trans.find('inoperation')))
                 self.extra_config_dict["TRANS"][trans.find("location").text] = temp

        for gen in self.root.findall('generator/conduct'):
                 temp = []
                 temp.append(self.time_series_data(gen.find('p')))
                 temp.append(float(gen.find('cablelength').text))
                 temp.append(gen.find('cabletype').text)
                 temp.append(gen.find('voltage').text)
                 temp.append(self.time_series_data(gen.find('inoperation')))
                 self.extra_config_dict["GEN"][gen.find("location").text] = temp

        for cable in self.root.findall('cable/conduct'):
                 temp = []
                 temp.append(float(cable.find("resistance").text))
                 temp.append(float(cable.find("reactance").text))
                 temp.append(float(cable.find("capacitance").text))
                 temp.append(float(cable.find("maxcurrent").text))
                 self.extra_config_dict["CABLE"][cable.find("name").text] = temp

        return self.extra_config_dict

    def time_series_data(self, p_or_q):
        # some data change with time
        # we need to extract these data and put them in order
        temp = {}
        if p_or_q.get('valuefixed') == 'true':
            temp["fixed"] = True
        else:
            temp["fixed"] = False
        for data in p_or_q.findall('data'):
            # if the data.get("value") is true or false,
            # meaning that the device is a transformer or circuit breaker
            # because they can open and close, two states
            if data.get("value") == 'true':
                temp[int(data.get('sequence'))] = 1
            elif data.get("value") == 'false':
                temp[int(data.get('sequence'))] = 0
            else:
                temp[int(data.get('sequence'))] = float(data.get("value"))
        return temp


# error checking

if __name__ == '__main__':
    extra_config = ConfigParser("extra_config.xml")
    json = (extra_config.gen_json())
    print(extra_config.gen_json(), file=open("parseroutput.txt","w+"))
