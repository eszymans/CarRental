#include "../../include/model/Moped.h"



Moped::~Moped() {

}

std::string Moped::getInfo() const {
    return MotorVehicle::getInfo();
}

double Moped::getActualRentalPrice() const {
    return MotorVehicle::getActualRentalPrice();
}

Moped::Moped(const std::string &plateNumber, int basePrice, const std::string &engine) : MotorVehicle(plateNumber,
                                                                                                      basePrice,
                                                                                                      engine) {}





