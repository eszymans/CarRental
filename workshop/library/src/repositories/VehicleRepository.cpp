#include "repositories/VehicleRepository.h"
#include "model/Vehicle.h"
#include <vector>
#include <sstream>

std::shared_ptr<Vehicle> VehicleRepository::getVehicle(int index) {
    return allVehicles[index];
}

void VehicleRepository::addVehicle(std::shared_ptr<Vehicle> vehicle) {
        allVehicles.push_back(vehicle);
}

void VehicleRepository::removeVehicle(std::shared_ptr<Vehicle>vehicle) {

  for(int i = 0; i < allVehicles.size(); i++){
        if(allVehicles[i] == vehicle){
            allVehicles.erase(allVehicles.begin()+i);
        };
    }

}

std::string VehicleRepository::reportVehicle() {
    std::string chain;
    unsigned int i = 1;
    for (std::shared_ptr<Vehicle> vehicle : allVehicles)
    {
        chain = i + ". " + vehicle->getInfo();
        chain = chain + "\n";
        i ++;
    }
    return chain;
}

int VehicleRepository::sizeVehicle() {
    return allVehicles.size();
}

std::vector <std::shared_ptr<Vehicle>> VehicleRepository::findAll(VehiclePredicate &predicate) {
    auto alwaysTrue =  predicate;
    return findBy(alwaysTrue);
}

std::vector <std::shared_ptr<Vehicle>> VehicleRepository::findBy(VehiclePredicate &predicate) {
    vector<std::shared_ptr<Vehicle>> found;
    for (unsigned int i = 0; i < allVehicles.size(); i++) {
        shared_ptr<Vehicle> vehicle = getVehicle(i);
        if (vehicle != nullptr && predicate(vehicle)) {
            found.push_back(vehicle);
        }
    }
    return found;
}
