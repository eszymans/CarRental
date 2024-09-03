#ifndef CARRENTAL_CLIENTREPOSITORY_H
#define CARRENTAL_CLIENTREPOSITORY_H

#include <vector>
#include <memory>
#include "typedefs.h"


class ClientRepository {
private:
    std::vector<std::shared_ptr<Client>> allClients;
public:
/// Find client with this index and return it back
/// \param index number of client in repository (it starts 0)
/// \return std::shared_ptr<Client>
    std::shared_ptr<Client> getClient(int index);

/// Adds another client
/// \param client
    void addClient(std::shared_ptr<Client> client);

    /// Remove particular Client
    /// \param client
    void removeClient(std::shared_ptr<Client> client);

    /// Gives all informations about all Clients
    /// \return string
    std::string reportClient();

    /// Gives information about how many Client are in Repository
    /// \return int
    int sizeClient();

    /// A function that takes an object (pointer) as an argument and returns a boolean value
    /// \param predicate predykant
    /// \return bool
    std::vector<std::shared_ptr<Client>> findBy(ClientPredicate &predicate);

    /// Gives vector with all Clients that function findBy is true
    /// \param predicate
    /// \return vector
    std::vector<std::shared_ptr<Client>> findAll(ClientPredicate &predicate);

};


#endif //CARRENTAL_CLIENTREPOSITORY_H
