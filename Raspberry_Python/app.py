from flask import Flask, jsonify
from bll.module.software import softwareswitchdevice

app = Flask(__name__)
softwareSwitchDevice = softwareswitchdevice.SoftwareSwitchDevice();


@app.route("/api/switch/on/<location>/<position>", methods=['GET'])
def on(location, position):
    softwareSwitchDevice.on(location, position)
    return jsonify({'result': 'ok'})


@app.route("/api/switch/off/<location>/<position>", methods=['GET'])
def off(location, position):
    softwareSwitchDevice.off(location, position)
    return jsonify({'result': 'ok'})


@app.route("/api/switch/off", methods=['GET'])
def alloff():
    softwareSwitchDevice.alloff()
    return jsonify({'result': 'ok'})


@app.route("/api/switch/status/<location>/<position>", methods=['GET'])
def getstatus(location, position):
    statuses = softwareSwitchDevice.getstatus(location, position)
    return jsonify({'statuses': 'Ok'})


@app.route("/api/switch/statuses/", methods=['GET'])
def getstatuses():
    return jsonify({'statuses': softwareSwitchDevice.getstatuses()})


@app.route("/api/switch/switch/<location>/<position>", methods=['GET'])
def switch(location, position):
    softwareSwitchDevice.switch(location, position)
    return jsonify({'result': 'ok'})


if __name__ == '__main__':
    app.run(host="10.10.1.70", port=7100, debug=True)
