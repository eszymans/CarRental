
#include <boost/test/unit_test.hpp>
#include "../include/model/Vehicle.h"
#include "../include/model/Car.h"
#include "../include/model/Bicycle.h"
#include "../include/model/Moped.h"
#include "../include/model/MotorVehicle.h"
#include "../include/typedefs.h"
#include "../src/model/Moped.cpp"

struct TestSuiteVehicleFixture {
    const std::string testplateNumber = "1234";
    const int testbasePrice = 1200;
};

class Moped;
BOOST_FIXTURE_TEST_SUITE(TestSuiteVehicle, TestSuiteVehicleFixture)
/// Test Constructor of class Vehicle
    BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {
        Vehicle car (testplateNumber, testbasePrice);
        BOOST_TEST(testplateNumber == car.getPlateNumber());
        BOOST_TEST(testbasePrice == car.getBasePrice());
        BOOST_TEST(false == car.isRented());
    }

    /// Test of function setBasePrice
    BOOST_AUTO_TEST_CASE(SetterBasePriceTest)
    {
        Vehicle car (testplateNumber, testbasePrice);
        car.setBasePrice(6789);
        BOOST_TEST(6789 == car.getBasePrice());
    }

    /// Test of function setBasePrice
    BOOST_AUTO_TEST_CASE(SetterPlateNumberTest)
    {
        Vehicle car (testplateNumber, testbasePrice);
        car.setPlateNumber("5678");
        BOOST_TEST("5678" == car.getPlateNumber());
    }

    /// Test of function getActualRentalPrice for Bicycle
    BOOST_AUTO_TEST_CASE(GetActualPriceBicycleTest)
    {
        VehiclePtr car = new Bicycle (testplateNumber, testbasePrice);
        BOOST_TEST(car->getActualRentalPrice() == testbasePrice);
    }

    /// Test of function getActualRentalPrice for Moped
    BOOST_AUTO_TEST_CASE(GetActualPriceMopedTest)
    {
        VehiclePtr car;
        car = new Moped(testplateNumber, testbasePrice, "11234");
        double price;
        price = testbasePrice * 1.5;
        BOOST_TEST(car->getActualRentalPrice() == price);
    }

    /// Test of function getActualRentalPrice for Car
    BOOST_AUTO_TEST_CASE(GetActualPriceCarTest)
    {
        VehiclePtr car = new Car(testplateNumber, testbasePrice, "234", A);
        double price = testbasePrice;
        price = price * 1.0;
        BOOST_TEST(car->getActualRentalPrice() == price);
    }
BOOST_AUTO_TEST_SUITE_END()