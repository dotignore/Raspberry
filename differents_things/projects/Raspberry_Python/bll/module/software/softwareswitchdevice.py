import configuration
from domain.status import Status


class SoftwareSwitchDevice:

    def __init__(self):
        self.modules = configuration.Configuration().getmodules()

    def on(self, location, position):
        for module in self.modules:
            module.on(location, position)

    def off(self, location, position):
        for module in self.modules:
            module.off(location, position)

    def alloff(self):
        for module in self.modules:
            module.alloff()

    def getstatus(self, location, position):
        statuses = []

        for module in self.modules:
            statuses.extend(module.getstatus(location, position))

        return statuses

    def getstatuses(self):
        statuses = []

        for module in self.modules:
            statuses.extend(module.getstatuses())

        return statuses

    def switch(self, location, position):
        statuses = self.getstatus(location, position);

        for status in statuses:
            if status.status == Status.On:
                self.off(location, position)
            if status.status == status.Off:
                self.on(location, position)
