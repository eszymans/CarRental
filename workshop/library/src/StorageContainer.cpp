//
// Created by gosc on 23.05.2024.
//

#include "StorageContainer.h"
#include "repositories/ClientRepository.h"
#include "repositories/VehicleRepository.h"
#include "repositories/RentRepository.h"
#include <memory>

StorageContainer::StorageContainer() {
    clientRepository = std::make_shared<ClientRepository>();
    rentRepository = std::make_shared<RentRepository>();
    vehicleRepository = std::make_shared<VehicleRepository>();
}

StorageContainer::~StorageContainer() {

}

const std::shared_ptr<ClientRepository> &StorageContainer::getClientRepository() const {
    return clientRepository;
}

const std::shared_ptr<RentRepository> &StorageContainer::getRentRepository() const {
    return rentRepository;
}

const std::shared_ptr<VehicleRepository> &StorageContainer::getVehicleRepository() const {
    return vehicleRepository;
}
