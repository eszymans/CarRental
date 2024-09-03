#include <boost/test/unit_test.hpp>
#include "../include/model/Adress.h"

BOOST_AUTO_TEST_SUITE(TestSuiteAdress)

    ///Test of contructor
    BOOST_AUTO_TEST_CASE(ConstructorTest){
        Adress object ("Lodz", "Piotrkowska", "0" );
        BOOST_TEST(object.getCity() == "Lodz");
        BOOST_TEST(object.getStreet() == "Piotrkowska");
        BOOST_TEST(object.getNumber() == "0");
    }

    /// Test of function SetCity
    BOOST_AUTO_TEST_CASE( SetterCityAdressTest ) {
        Adress object("Lodz", "Piotrkowska", "0" );
        object.SetCity("");
        BOOST_TEST(object.getCity() != "");
        object.SetCity("Warsaw");
        BOOST_TEST(object.getCity() == "Warsaw");
    }

    /// Test of function SetStreet
    BOOST_AUTO_TEST_CASE( SetterStreetAdressTest ) {
        Adress object("Lodz", "Piotrkowska", "0" );
        object.SetStreet("");
        BOOST_TEST(object.getStreet() != "");
        object.SetStreet("Warsaw");
        BOOST_TEST(object.getStreet() == "Warsaw");
    }

    ///Test of function SetNumber
    BOOST_AUTO_TEST_CASE( SetterNumberAdressTest ) {
        Adress object("Lodz", "Piotrkowska", "0" );
        object.SetNumber("");
        BOOST_TEST(object.getNumber() != "");
        object.SetNumber("2");
        BOOST_TEST(object.getNumber() == "2");
    }
BOOST_AUTO_TEST_SUITE_END()