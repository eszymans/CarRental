#include <boost/test/unit_test.hpp>
#include "../include/typedefs.h"
#include "../include/model/Client.h"

struct TestSuiteRepositoryFixture{
    TestSuiteRepositoryFixture() {

    }

   // StorageContainers repository = StorageContainers(ClientRepository(), RentRepository(), VehicleRepository());
    ClientTypePtr clienttype = new Bronze();
    AdressPtr adress;
    ClientPtr client = new Client("1234" ,"John", "Doe", adress, clienttype);
    //ClientRepository repositoryClient;
    //VehicleRepository * repositoryVehicle = new VehicleRepository();
};

BOOST_FIXTURE_TEST_SUITE(TestSuiteRepository, TestSuiteRepositoryFixture)
/*
    BOOST_AUTO_TEST_CASE(RepositoryAddTest){
        repositoryClient.addClient(*client);
        BOOST_TEST(repositoryClient.getClient(0) == client);
        BOOST_TEST(repositoryClient.getClient(1) == nullptr);
    }

    BOOST_AUTO_TEST_CASE(RepositoryRemoveTest){
        repositoryClient.addClient(*client);
        BOOST_TEST(repositoryClient.getClient(0) == client);
       // repositoryClient
    }
*/
BOOST_AUTO_TEST_SUITE_END()