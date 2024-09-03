#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H

#include "Vehicle.h"

class MotorVehicle : public Vehicle {
protected:
    std::string engineType;

public:

    virtual ~MotorVehicle();

    /// Gives information
    /// \return string with all information
    std::string getInfo() const override;

    /// Constructor for class MotorVehicle
    /// \param plateNumber
    /// \param basePrice
    /// \param engine
    MotorVehicle(const std::string &plateNumber, int basePrice, std::string engine);

    /// Getter of engineType
    /// \return string with engineType
    const std::string &getEngineType() const;

    /// Function calculate accurate Price
    /// \return double price
    double getActualRentalPrice() const override;

    /// Setter for engineType on sth new
    /// \param engineType
    void setEngineType(const std::string &engineType);
};

#endif // MOTORVEHICLE_H
