#include "model/Vehicle.h"
#include <string>

Vehicle::Vehicle(const std::string &plateNumber, int basePrice) : plateNumber(plateNumber),
                                                                               basePrice(basePrice){}

const std::string Vehicle::getPlateNumber() const {
    return plateNumber;
}

int Vehicle::getBasePrice() const {
    return basePrice;
}

bool Vehicle::isRented() const {
    return rented;

}

void Vehicle::setPlateNumber(const std::string &plateNumber) {
    if(plateNumber.empty() != 1 ) Vehicle::plateNumber = plateNumber;
}

void Vehicle::setBasePrice(int basePrice) {
    Vehicle::basePrice = basePrice;
}

std::string Vehicle::getInfo() const{
    std::string result;
    result = plateNumber + " " + std::to_string(basePrice);
 //   if (rented == true) result = result + " " + "0";
 //   else result = result + " " + "1";
    return result;
}

void Vehicle::setRented(bool rented) {
    Vehicle::rented = rented;
}

double Vehicle::getActualRentalPrice() const{
    return basePrice;
}

Vehicle::~Vehicle() {

}
