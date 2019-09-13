import json
import os
from bll.module.hardware import demoswitchdevice, rly8switchdevice
from domain import relay


class Configuration:
    def __init__(self):

        scriptsdirectory = os.path.dirname(os.path.realpath(__file__))

        with open(scriptsdirectory+'/config/config.json') as json_data_file:
            self.data = json.load(json_data_file)

    def getmodules(self):

        modules = []

        modulesconfiguration = self.data["SwitchModule"]["Modules"]

        for element in modulesconfiguration:
            moduletype = element["ModuleType"]
            if moduletype == "RLY8":
                modulename = element["Name"]
                moduleaddress = element["Address"]
                moduleport = element["Port"]
                modulerelays = self.__getrelays(element["Relays"])

                rly8module = rly8switchdevice.RLY8SwitchDevice(modulename, moduleaddress, moduleport, modulerelays)
                modules.append(rly8module)
            if moduletype == "Demo":
                modulerelays = self.__getrelays(element["Relays"])

                demomodule = demoswitchdevice.DemoSwitchDevice(modulerelays)
                modules.append(demomodule)

        return modules

    def __getrelays(self, relays):

        createdrelays = []

        for temprelay in relays:
            createdrelay = relay.Relay(temprelay["Number"], temprelay["Location"].lower(), temprelay["Position"].lower())
            createdrelays.append(createdrelay)

        return createdrelays