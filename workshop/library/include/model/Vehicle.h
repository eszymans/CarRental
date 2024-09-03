
#ifndef CARRENTAL_VEHICLE_H
#define CARRENTAL_VEHICLE_H


#include <string>

class Vehicle {
private:
    std::string plateNumber;
    bool rented = false;
public:
/// Constructor od class Client
/// \param plateNumber
/// \param basePrice
    Vehicle(const std::string &plateNumber, int basePrice);

    virtual ~Vehicle();

/// Getter of planeNumber
/// \return string plateNumber
    const std::string getPlateNumber() const;

/// Getter of basePrice
/// \return int basePrice
    int getBasePrice() const;

/// Tells if Vehicle is Rented
/// \return bool rented
    bool isRented() const;

/// Setter plateNumber on sth new
/// \param plateNumber
    void setPlateNumber(const std::string &plateNumber);

/// Setter basePrice on sth new
/// \param basePrice
    void setBasePrice(int basePrice);

    /// Setter rented on sth new
    /// \param rented
    void setRented(bool rented);

/// Gives all information abou Vehicle
/// \return
    virtual std::string getInfo() const;

    /// Function calculate accurate Price
    /// \return double price
    virtual double getActualRentalPrice() const;

    double basePrice;

};


#endif //CARRENTAL_VEHICLE_H
