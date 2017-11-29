//
// Created by maghe on 21/11/17.
//

#include <iostream>
#include "DDSListenerHandler.h"
#include "../defines.h"
#include "../sensiboManager/SensiboManager.h"


void DDSListenerHandler::Run() {
    ddsSubscriber.init();

    while (true) {
        std::cout << "ddsListenerHandler on " << SENSIBO_HOUSE_PARTITION << " is waiting..." << std::endl;
        std::vector<Mind::Actuation_Command> received_data;
        ddsSubscriber.wait(received_data);
        if (received_data.size() > 0) {
            std::cout << "Found new ActuationCommands: " << received_data.size() << std::endl;
            for (const auto &d: received_data) {
                ProcessActuationCommand(d);
            }
        }
    }
}

void DDSListenerHandler::ProcessActuationCommand(Mind::Actuation_Command actuationCommand) {

    std::cout << "ActuationCommand UUID: " << actuationCommand.UUID() << std::endl;

    for (auto const &itemCommand: actuationCommand.commands()) {
        if ((itemCommand.itemCategory() == Mind::Category::CATEGORY_HEATING_COOLING_SENSIBO) &&
            (deviceExist(SENSIBO_HOUSE_PARTITION, itemCommand.UUID()))) {

            SensiboManager sensiboManager(SENSIBO_HOST, SENSIBO_PORT); //TODO: singleton?

            auto result = sensiboManager.ActuateCommand(itemCommand.command(), itemCommand.UUID());
            if (result) {
                SensiboDevice sensiboDevice = sensiboManager.GetDeviceInfo(itemCommand.UUID());
                publishSensiboDeviceOnDDS(sensiboDevice);
            }
        }
    }
}


bool DDSListenerHandler::deviceExist(std::string partitionName, std::string canditateDeviceUUID) {
    DDSReader<Mind::SensiboSky> reader(partitionName);
    reader.initReader(60);
    std::vector<Mind::SensiboSky> devices;
    reader.readAll(devices);

    for (auto const &device: devices) {

        if (device.UUID() == canditateDeviceUUID) {
            return true;
        }
    }
    return false;
}


void DDSListenerHandler::publishSensiboDeviceOnDDS(SensiboDevice device) {
    DDSPublisher<Mind::SensiboSky> ddsPublisher(SENSIBO_DEVICE_PARTITION);
    Mind::SensiboSky sensiboSky;
    sensiboSky.UUID(device.getPod());

    std::string mac = device.getMacAddress();
    sensiboSky.MACAddress(mac);

    sensiboSky.on(device.getSensiboCurrentAcState().isOn());
    sensiboSky.mode(device.getSensiboCurrentAcState().getMode());
    //sensiboSky.on(false);
    //sensiboSky.mode(Mind::SensiboMode::modeAuto);
    sensiboSky.targetTemperature(25);
    sensiboSky.temperatureScale(Mind::SensiboTemperatureScale::C);
    sensiboSky.fanlevel(Mind::SensiboFanLevel::fanAuto);
    sensiboSky.swing(Mind::SensiboSwing::swingStopped);
    sensiboSky.UUIDAmbience("Ambience");
    sensiboSky.UUIDRoom("Room");
    sensiboSky.UUIDFloor("Floor");
    sensiboSky.UUIDHouse("House");

    ddsPublisher.write(sensiboSky);
}

