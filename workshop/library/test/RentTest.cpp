#include <boost/test/unit_test.hpp>
#include "../src/model/Rent.cpp"
#include "../src/model/Client.cpp"
#include "../src/model/Vehicle.cpp"
#include <boost/date_time.hpp>

struct TestSuiteRentFixture {
    Adress *testaddress;
    Client *person1;
    Client *person2;
    Vehicle *vehicle1;
    Vehicle *vehicle2;
    int id = 20;
    boost::posix_time::ptime beginTime;

    TestSuiteRentFixture() {
        testaddress = new Adress("London", "Rue Morgue", "13");
        person1 = new Client("Jan", "Kowalski", "23", testaddress);
        person2 = new Client("John", "Smith", "23", testaddress);
        vehicle1 = new Vehicle("1234", 1234);
        vehicle2 = new Vehicle("5678", 5678);
        beginTime = boost::posix_time::second_clock::universal_time();
    }
    ~TestSuiteRentFixture() {
     //delete person1;
     //delete person2;
     //delete vehicle1;
     //delete vehicle2;
    }
};

BOOST_FIXTURE_TEST_SUITE(TestSuiteRent, TestSuiteRentFixture)

    ///Test of Constructor
    BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {
        Rent rent(id, person1, vehicle1, beginTime);
        BOOST_TEST(id == rent.getId());
        BOOST_TEST(person1 == rent.getClient());
        BOOST_TEST(vehicle1 == rent.getVehicle());
        BOOST_TEST(beginTime != boost::posix_time::not_a_date_time);
    }

    /// Test of function setId
    BOOST_AUTO_TEST_CASE(IdSetterTest) {
        Rent rent(id, person1, vehicle1, beginTime);
        rent.setId(23);
        BOOST_TEST(23 == rent.getId());
    }

    ///Test of function setClient
    BOOST_AUTO_TEST_CASE(rClientSetterTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.setClient(person2);
        BOOST_TEST(person2 == rent.getClient());
    }

    /// Test of function setVehicle
    BOOST_AUTO_TEST_CASE(rVehicleSetterTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.setVehicle(vehicle2);
        BOOST_TEST(vehicle2 == rent.getVehicle());
    }

    BOOST_AUTO_TEST_CASE(endRentTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.endRent(boost::posix_time::not_a_date_time);
        BOOST_TEST(rent.getEndTime() != boost::posix_time::not_a_date_time);
    }

    BOOST_AUTO_TEST_CASE(anotherendRentTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.endRent(boost::posix_time::not_a_date_time);
        boost::posix_time::ptime testtime;
        testtime = rent.getEndTime();
        rent.endRent(boost::posix_time::second_clock::universal_time());
        BOOST_TEST(rent.getEndTime() == testtime);
    }

    BOOST_AUTO_TEST_CASE(another2endRentTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.endRent(beginTime);
        BOOST_TEST(rent.getEndTime() == rent.getBeginTime());
    }

    BOOST_AUTO_TEST_CASE(another3endRentTest) {
        Rent rent(id, person1,vehicle1, beginTime);
        rent.endRent(boost::posix_time::not_a_date_time);
        int price = rent.getRentCost();
        rent.setRentCost(200);
        BOOST_TEST(rent.getRentCost() != price);
    }
BOOST_AUTO_TEST_SUITE_END()