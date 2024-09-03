#include "../../include/model/Bicycle.h"

Bicycle::Bicycle(const std::string &plateNumber, int basePrice) : Vehicle(plateNumber, basePrice) {}

Bicycle::~Bicycle() {

}

std::string Bicycle::getInfo() const {
    return Vehicle::getInfo();
}

double Bicycle::getActualRentalPrice() const {
    return Vehicle::getActualRentalPrice();
}
