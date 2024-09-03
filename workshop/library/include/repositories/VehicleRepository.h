#ifndef CARRENTAL_VEHICLEREPOSITORY_H
#define CARRENTAL_VEHICLEREPOSITORY_H

#include <vector>
#include <memory>
#include "typedefs.h"


class VehicleRepository {
private:
    std::vector<std::shared_ptr<Vehicle>> allVehicles;
public:

/// Find Vehicle with this index and return it back
/// \param indeks number of Vehicle in repository (it starts 0)
/// \return std::shared_ptr<Vehicle>
    std::shared_ptr<Vehicle> getVehicle(int indeks);

    /// Adds another vehicle
    /// \param vehicle
    void addVehicle(std::shared_ptr<Vehicle> vehicle);

    /// Remove particular Vehicle
    /// \param vehicle
    void removeVehicle(std::shared_ptr<Vehicle> vehicle);

    /// Gives all informations about all Vehicles
    /// \return
    std::string reportVehicle();

    /// Gives information about how many Vehicles are in Repository
    /// \return
    int sizeVehicle();

    /// A function that takes an object (pointer) as an argument and returns a boolean value
    /// \param predicate predykant
    /// \return bool
    std::vector<std::shared_ptr<Vehicle>> findBy(VehiclePredicate &predicate);

    /// Gives vector with all Vehicles that function findBy is true
    /// \param predicate
    /// \return vector
    std::vector<std::shared_ptr<Vehicle>> findAll(VehiclePredicate &predicate);

};


#endif //CARRENTAL_VEHICLEREPOSITORY_H
