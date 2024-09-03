#include "../../include/model/Adress.h"

Adress::Adress(std::string city, std::string street, std::string number): city(city), street(street), number(number)
{
}

const std::string Adress::getInfo() {
   std::string result;
   result = city + " " + street + " " + number;
   return result;
}

std::string Adress::getCity() {
    return city;
}

std::string Adress::getStreet() {
    return street;
}

std::string Adress::getNumber() {
    return number;
}

void Adress::SetCity(std::string city) {
    if (city.empty() != 1) { Adress::city = city; }
}

void Adress::SetStreet(std::string street ) {
    if (street.empty() != 1) { Adress::street = street; }
}

void Adress::SetNumber(std::string number) {
    if (number.empty() != 1) { Adress::number = number; }
}

