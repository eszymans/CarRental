#include "repositories/ClientRepository.h"
#include "model/ClientType.h"
#include "model/Client.h"
#include <vector>

std::shared_ptr<Client> ClientRepository::getClient(int index) {
    return allClients[index];
}

void ClientRepository::addClient(std::shared_ptr<Client>client) {
    if (&client != nullptr) {
        allClients.push_back(client);
    }
}

void ClientRepository::removeClient(std::shared_ptr<Client>client) {

  for(int i = 0; i < allClients.size(); i++){
        if(allClients[i] == client){
            allClients.erase(allClients.begin()+i);
        };
    }

}

std::string ClientRepository::reportClient() {
    string chain;
    chain.clear();
    if (allClients.empty()) return chain;
    for (unsigned int i = 0; i < allClients.size(); i++)
    {
        chain = i + ". " + allClients[i]->getInfo();
        if (allClients[i]->clientType != nullptr)
        {
            chain = chain + " [" + allClients[i]->clientType->getInfo() + "]" + "\n";
        }
        else
        {
            chain = chain + "\n";
        }
        i ++;
    }
    return chain;
}

int ClientRepository::sizeClient() {
    return allClients.size()+1;
}

std::vector<std::shared_ptr<Client>> ClientRepository::findAll(ClientPredicate &predicate) {
    auto alwaysTrue =  predicate;
    return findBy(alwaysTrue);
}


std::vector<std::shared_ptr<Client>> ClientRepository::findBy(ClientPredicate &predicate) {
    vector<std::shared_ptr<Client>> found;
    for (unsigned int i = 0; i < allClients.size(); i++) {
        shared_ptr<Client> client = getClient(i);
        if (client != nullptr && predicate(client)) {
            found.push_back(client);
        }
    }
    return found;
}
