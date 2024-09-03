#ifndef CARRENTAL_CAR_H
#define CARRENTAL_CAR_H

#include "MotorVehicle.h"

enum Segment {
    A,
    B,
    C,
    D,
    E,
};

class Car : public MotorVehicle {
private:


    Segment segmentType;
public:

    /* Destructor for class Car
     *
     */
     ~Car() override;

    /* Constructor for class Car
     * param &plateNumber   string plate number of Car
     * param basePrice      int base price for Car
     * param engine         string engine capacity
     * param segmentType    Segment
     */
    Car(const std::string &plateNumber, int basePrice, const std::string &engine, Segment segmentType);

    /*  Function gives all information about Car
    * return string with all information
    */
    std::string getInfo() const override;

    /* Function calculate accurate Price for Car
    * return double price
    */
    double getActualRentalPrice() const override;

    /* Function gives information about segmentType
     * return segmentType segment
     */
    Segment getSegmentType();

    /* Function set new segmentType
     * param segmentType segment
     */
    void setSegmentType(Segment segmentType);
};

#endif //CARRENTAL_CAR_H
