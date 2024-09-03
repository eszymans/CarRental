//Introduction projekt

#include <iostream>

#include "../../library/include/model/Client.h"
#include "StorageContainer.h"
#include "../../library/include/repositories/ClientRepository.h"
#include "../../library/include/repositories/RentRepository.h"
#include "../../library/include/repositories/VehicleRepository.h"
#include "model/Car.h"

int main()
{

    std::shared_ptr<StorageContainer> repositories = std::make_shared<StorageContainer>();// = make_shared<StorageContainer>

    cout << "client \n " << repositories->getClientRepository()->reportClient();
    cout << "\nrent \n " << repositories->getRentRepository()->reportRent();
    cout << "\nvehicle \n " <<repositories->getVehicleRepository()->reportVehicle();


    Adress* address = new Adress("City", "Street", "123");
    ClientType* clientType = new Bronze();
    std::shared_ptr<Client> client1 = std::make_shared<Client>("123", "John", "Smith", address, clientType);
    std::shared_ptr<Client> client2 = std::make_shared<Client>("567", "Jane", "Doe", address, clientType);
    std::shared_ptr<Vehicle> car = std::make_shared<Car>("123", 12, "1234", A);
    std::shared_ptr<Rent> rent = std::make_shared<Rent>("1", client1, car);

cout << endl << endl<< "------------------------------------------------------------" << endl ;

    repositories->getClientRepository()->addClient(client1);
    repositories->getClientRepository()->addClient(client2);
    repositories->getVehicleRepository()->addVehicle(car);
    repositories->getRentRepository()->addRent(rent);

    cout << "client \n " << repositories->getClientRepository()->reportClient();
    cout << "\nrent \n " << repositories->getRentRepository()->reportRent();
    cout << "\nvehicle \n " << repositories->getVehicleRepository()->reportVehicle();

   return 0;
}
