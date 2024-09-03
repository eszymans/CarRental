
#include "model/Rent.h"
#include <memory>
#include <boost/date_time.hpp>

Rent::Rent(int id, Client *client, Vehicle *vehicle, boost::posix_time::ptime beginTime): id(id), client(client), vehicle(vehicle) {
    if (beginTime == boost::posix_time::not_a_date_time) {
        beginTime = boost::posix_time::second_clock::local_time();
    }
    endTime = boost::posix_time::not_a_date_time;
    vehicle->setRented(true);
}

int Rent::getId() const {
    return id;
}

Client *Rent::getClient() const {
    return client;
}

Vehicle *Rent::getVehicle() const {
    return vehicle;
}

std::string Rent::getInfo() {
    std::string result;
    result.clear();
    result = std::to_string(id) + ", " ;//+ client->getInfo() + ", " + vehicle->getInfo();
   // result = result + " " + std::to_string(rentCost);
    return result;
}

void Rent::setId(int id) {
    Rent::id = id;
}

void Rent::setClient(Client *client) {
    Rent::client = client;
}

void Rent::setVehicle(Vehicle *vehicle) {
    Rent::vehicle = vehicle;
}

int Rent::getRentCost() const {
    return rentCost;
}

int Rent::getRentDays() {
    boost::posix_time::time_period period(beginTime, endTime);
    if(vehicle->isRented() == 1) return 0;
    if(period.length().hours() == 0 && period.length().minutes() == 0) return 0;
    int days;
    days = period.length().hours()/24 + 1;
    return days;
}

const boost::posix_time::ptime &Rent::getBeginTime() const {
    return beginTime;
}

const boost::posix_time::ptime &Rent::getEndTime() const {
    return endTime;
}

void Rent::endRent(boost::posix_time::ptime endTimee) {
    if (endTimee == boost::posix_time::not_a_date_time) {
        boost::posix_time::time_period period(beginTime, endTime);
        if (period.length().hours() <= 0 && period.length().minutes() <= 0)
            endTime = beginTime;
        endTime = boost::posix_time::second_clock::local_time();
    }
    vehicle->setRented(false);
    rentCost = getRentDays() * vehicle->getBasePrice();
}



void Rent::setRentCost(int rentCost) {
    Rent::rentCost = rentCost;
}

Rent::Rent(const char *string, std::shared_ptr<Client> sharedPtr, std::shared_ptr<Vehicle> sharedPtr1) {

}




