//
// Created by gosc on 23.05.2024.
//

#ifndef CARRENTAL_STORAGECONTAINER_H
#define CARRENTAL_STORAGECONTAINER_H


#include <memory>

class ClientRepository;
class RentRepository;
class VehicleRepository;

class StorageContainer {

private:
    std::shared_ptr<ClientRepository> clientRepository;
    std::shared_ptr<RentRepository> rentRepository;
    std::shared_ptr<VehicleRepository> vehicleRepository;

public:
    ///Constructor for class StorageContainer
    StorageContainer();

    ///Destructor class StorageContainer
    virtual ~StorageContainer();

    /// Gives back pointer to the clientRepository;
    /// \return std::shared_ptr<ClientRepository>
    const std::shared_ptr<ClientRepository> &getClientRepository() const;

    /// Gives back pointer to the rentRepository
    /// \return std::shared_ptr<RentRepository>
    const std::shared_ptr<RentRepository> &getRentRepository() const;

    /// Gives back pointer to the vehicleRepository
    /// \return std::shared_ptr<VehicleRepository>
    const std::shared_ptr<VehicleRepository> &getVehicleRepository() const;
};


#endif //CARRENTAL_STORAGECONTAINER_H
