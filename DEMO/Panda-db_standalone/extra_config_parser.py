import xml.etree.ElementTree as ET


class ConfigParser:
    def __init__(self, extra_config_path):
        self.extra_config_dict = {'IFL': {}, 'MOT': {}, 'GEN': {}, 'DER': {}, 'CON': {}, 'CBR': {}, 'TRANS': {}, 'CABLE': {}}
        self.extra_config_path = extra_config_path
        self.root = ET.parse(extra_config_path)

    def gen_json(self):
        for load in self.root.findall('load/conduct'):
            # motor has reactive power q, while other loads never has this attribute
            if load.get('type') == 'motor':
                temp = []
                temp.append(self.time_series_data(load.find('p')))
                temp.append(self.time_series_data(load.find('q')))
                temp.append(float(load.find('cablelength').text))
                temp.append(load.find('cabletype').text)
                self.extra_config_dict["MOT"][load.find("location").text] = temp
            else:
                temp = []
                temp.append(self.time_series_data(load.find('p')))
                temp.append(float(load.find('cablelength').text))
                temp.append(load.find('cabletype').text)
                self.extra_config_dict["IFL"][load.find("location").text] = temp

        for gen in self.root.findall('generator/conduct'):
            temp = []
            temp.append(self.time_series_data(gen.find('p')))
            # temp.append(self.time_series_data(gen.find('q')))
            temp.append(float(gen.find('cablelength').text))
            temp.append(gen.find('cabletype').text)
            temp.append(gen.find('voltage').text)
            temp.append(self.time_series_data(gen.find('inoperation')))
            self.extra_config_dict["GEN"][gen.find("location").text] = temp

        for der in self.root.findall('der/conduct'):
            temp = []
            temp.append(self.time_series_data(der.find('p')))
            temp.append(self.time_series_data(der.find('q')))
            temp.append(float(der.find('cablelength').text))
            temp.append(der.find('cabletype').text)
            temp.append(der.find('voltage').text)
            temp.append(self.time_series_data(der.find('inoperation')))
            self.extra_config_dict["DER"][der.find("location").text] = temp

        for con in self.root.findall('converter/conduct'):
            temp = []
            temp.append(self.time_series_data(con.find('p')))
            temp.append(self.time_series_data(con.find('q')))
            temp.append(float(con.find('cablelength').text))
            temp.append(con.find('cabletype').text)
            # temp.append(con.find('voltage').text)
            temp.append(self.time_series_data(con.find('inoperation')))
            self.extra_config_dict["CON"][con.find("location").text] = temp

        for cbr in self.root.findall('circuitbreaker/conduct'):
            self.extra_config_dict["CBR"][cbr.find('location').text] = [self.time_series_data(cbr.find('inoperation'))]

        for trans in self.root.findall('transformer/conduct'):
            temp = []
            temp.append(float(trans.find('s').text))
            temp.append(float(trans.find('hv').text))
            temp.append(float(trans.find('lv').text))
            temp.append(float(trans.find('cablelength').text))
            temp.append(trans.find('cabletype').text)
            temp.append(self.time_series_data(trans.find('inoperation')))
            self.extra_config_dict["TRANS"][trans.find("location").text] = temp

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
    extra_config = ConfigParser("extra_config_v1.xml")
    print(extra_config.gen_json())