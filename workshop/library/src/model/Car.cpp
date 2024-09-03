#include "../../include/model/Car.h"

void Car::setSegmentType(Segment segmentType) {
    Car::segmentType = segmentType;
}

Segment Car::getSegmentType()  {
    return segmentType;
}

std::string Car::getInfo() const {
    std::string result = Vehicle::getInfo();
    result = result + ' ';
    result = result + (char)segmentType;
    return result;
}

Car::~Car() {

}

double Car::getActualRentalPrice() const {
    double price = MotorVehicle::getActualRentalPrice();
        switch(segmentType) {
            case A:
                price = price * 1.0;
                break;
            case B:
                price = price * 1.1;
                break;
            case C:
                price = price * 1.2;
                break;
            case D:
                price = price * 1.3;
                break;
            case E:
                price = price * 1.5;
                break;
        }
        return price;
    }

Car::Car(const std::string &plateNumber, int basePrice, const std::string &engine, Segment segmentType) : MotorVehicle(
        plateNumber, basePrice, engine), segmentType(segmentType) {}

