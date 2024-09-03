#include "../../include/model/Client.h"
#include <string>

int ClientType::getMaxVehicles() const {
    return maxVehicles;
}

std::string ClientType::getInfo() const {
    string result;
    result.clear();
    result = std::to_string(maxVehicles);
    return result;
}

double ClientType::applyDiscount(double price) {
    double endPrice;
    endPrice = price - discount;
    return endPrice;
}

ClientType::~ClientType() {

}

Default::Default() {
    ClientType::maxVehicles = 1;
    discount = 1;
}

double Default::applyDiscount(double price) {
    return ClientType::applyDiscount(price);
}

Default::~Default() {

}

Bronze::Bronze() {
    maxVehicles=2;
    discount = 2;
}

Bronze::~Bronze() {

}

double Bronze::applyDiscount(double price) {
    double endPrice;
    endPrice = price - 2;
    return endPrice;
}

std::string Bronze::getInfo() const {
    return ClientType::getInfo();
}

int Bronze::getMaxVehicles() const {
    return ClientType::getMaxVehicles();
}

Diamond::Diamond() {
    maxVehicles = 10;
}

Diamond::~Diamond() {

}

int Diamond::getMaxVehicles() const {
    return ClientType::getMaxVehicles();
}

std::string Diamond::getInfo() const {
    return ClientType::getInfo();
}

double Diamond::applyDiscount(double price) {
    double endPrice;
    switch (static_cast<int>(price))
    {
        case 0 ... 125:
            discount = 0.1;
            break;
        case 126 ... 250:
            discount = 0.2;
            break;
        case 251 ... 500:
            discount = 0.3;
            break;
        default:
            discount = 0.4;
            break;
    }
    endPrice = price * discount;
    return endPrice;
}

Gold::Gold() {
    maxVehicles = 4;
    discount = 0.05;
}

Gold::~Gold() {

}

int Gold::getMaxVehicles() const {
    return ClientType::getMaxVehicles();
}

std::string Gold::getInfo() const {
    return ClientType::getInfo();
}

double Gold::applyDiscount(double price) {
    double endPrice;
    endPrice = price * discount;
    return endPrice;
}


Platinum::Platinum() {
    maxVehicles = 5;
    discount = 0.1;
}

Platinum::~Platinum() {

}

int Platinum::getMaxVehicles() const {
    return ClientType::getMaxVehicles();
}

std::string Platinum::getInfo() const {
    return ClientType::getInfo();
}

double Platinum::applyDiscount(double price) {
    double endPrice;
    endPrice = price * discount;
    return endPrice;
}

Silver::Silver() {
    maxVehicles = 3;
}

Silver::~Silver() {

}

int Silver::getMaxVehicles() const {
    return ClientType::getMaxVehicles();
}

std::string Silver::getInfo() const {
    return ClientType::getInfo();
}

double Silver::applyDiscount(double price) {
    return ClientType::applyDiscount(price);
}