#ifndef CARRENTAL_MOPED_H
#define CARRENTAL_MOPED_H

#include "MotorVehicle.h"

class Moped : public MotorVehicle {

public:

    /* Constructor for class Motor Vehicle
     * param &plateNumber   string plate number of Motor Vehicle
     * param basePrice      int base price for Motor Vehicle
     * param engine         string engine capacity
     */
    Moped(const std::string &plateNumber, int basePrice, const std::string &engine);

    /* Destructor for class Moped
     *
     */
    ~Moped() override;

    /*  Function gives all information about Moped
    * return string with all information
    */
    std::string getInfo() const override;

    /* Function calculate accurate Price for Moped
    * return double price
    */
    double getActualRentalPrice() const override;

};
#endif //CARRENTAL_MOPED_H
