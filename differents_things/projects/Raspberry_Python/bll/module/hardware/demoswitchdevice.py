from domain.devicetype import DeviceType


class DemoSwitchDevice:

    def __init__(self, relays):
        self.deviceType = DeviceType.Demo
        self.relays = relays

    def on(self, location, position):
        print("Turn on light on location {0} and {1}".format(location, position))

    def off(self, location, position):
        print("Turn off light on location {0} and {1}".format(location, position))

    def alloff(self):
        print("Turn off all lights")

    def getstatus(self, location, position):
        print("Get some location status {0} and {1}".format(location, position))
        return []

    def getstatuses(self):
        print("Get all statuses")
        return dict()
