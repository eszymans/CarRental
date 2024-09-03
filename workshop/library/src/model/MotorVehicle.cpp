#include "../../include/model/MotorVehicle.h"


MotorVehicle::~MotorVehicle() {

}

std::string MotorVehicle::getInfo() const {
    std::string result = Vehicle::getInfo();
    result = result + ' ' + engineType;
    return result;
}

double MotorVehicle::getActualRentalPrice() const {
    double price =  Vehicle::getActualRentalPrice();
    switch (stoi(engineType))
    {
        case 0 ... 1000:
        {
            price = price ;
            break;
        }
        case 1001 ... 2000:{
            int k = (stoi(engineType) - 1000 - 1) / 500;
            price = price * (k + 1);
            break;
        }
        default: {
            price = price * 1.5;
            break;
        }
    }

    return price;
}

void MotorVehicle::setEngineType(const std::string &engineTypee) {
    MotorVehicle::engineType = engineTypee;
}

MotorVehicle::MotorVehicle(const std::string &plateNumber, int basePrice, std::string engine) : Vehicle(plateNumber, basePrice) {
    engineType = engine;
}

const std::string &MotorVehicle::getEngineType() const {
    return engineType;
}
