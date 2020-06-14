from domain.devicetype import DeviceType
from domain import relaystatus
import socket
import time
import json


class RLY8SwitchDevice:

    def __init__(self, name, address, port, relays):
        self.deviceType = DeviceType.Demo
        self.name = name
        self.address = address
        self.port = port
        self.relays = relays

    def on(self, location, position):

        numbers = self.__getrelaynumbers(location, position);

        for number in numbers:
            self.__sendtosocket("{\"relay" + str(number) + "\":\"on\"}")

    def off(self, location, position):
        numbers = self.__getrelaynumbers(location, position);

        for number in numbers:
            self.__sendtosocket("{\"relay" + str(number) + "\":\"off\"}")

    def alloff(self):
        for relay in self.relays:
            self.off(relay.location, relay.position)

    def getstatus(self, location, position):
        result = []

        statuses = self.__sendtosocket("{ \"get\":\"relayStatus\"}")

        numbers = self.__getrelaynumbers(location, position);

        items = json.loads(statuses)

        for number in numbers:
            value = items["relay" + str(number)]
            relay = relaystatus.RelayStatus(location, position, value)
            result.append(relay)
        return result

    def getstatuses(self):
        statuses = self.__sendtosocket("{ \"get\":\"relayStatus\"}")

    def __sendtosocket(self, message):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect((self.address, self.port))
        s.send(message)

        data = s.recv(255)

        s.close()
        time.sleep(0.2)
        return data

    def __getrelaynumbers(self, location, position):
        numbers = []

        for relay in self.relays:
            if relay.location == location.lower() and relay.position == position.lower():
                numbers.append(relay.number)

        return numbers
