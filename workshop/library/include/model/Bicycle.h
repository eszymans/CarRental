#ifndef CARRENTAL_BICYCLE_H
#define CARRENTAL_BICYCLE_H
#include "Vehicle.h"

class Bicycle : public Vehicle {
public:
    /* Constructor for class Bicycle
     * param &plateNumber   string plate number of Bicycle
     * param basePrice      int base price for Bicycle
     */
    Bicycle(const std::string &plateNumber, int basePrice);

    /* Destructor for class Bicycle
     *
     */
    ~Bicycle() override;

    /*  Function gives all information about Bicycle
     * return string with all information
     */
    std::string getInfo() const override;

    /* Function calculate accurate Price for Bicycle
     * return double price
     */
    double getActualRentalPrice() const override;
};
#endif //CARRENTAL_BICYCLE_H
