#include <boost/test/unit_test.hpp>
#include "../include/model/Client.h"
#include "../src/model/Adress.cpp"
#include "../include/typedefs.h"

    struct TestSuiteClientFixture {
        const std::string testFirstName = "Jon";
        const std::string testLastName = "Arbuckle";
        const std::string testPersonalID = "0123456789";
        Adress *testaddress1;
        Adress *testaddress2;

        TestSuiteClientFixture() {
            testaddress1 = new Adress("London", "Accacia Avenue", "22");
            testaddress2 = new Adress("London", "Rue Morgue", "13");
        }

        ~TestSuiteClientFixture() {
           // delete testaddress1;
         //   delete testaddress2;
        }

    };

    BOOST_FIXTURE_TEST_SUITE(TestSuiteClient, TestSuiteClientFixture)

    ///Test of Constructor
        BOOST_AUTO_TEST_CASE(ParameterConstrutorTest) {

            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            BOOST_TEST(testFirstName == c.getFirstName());
            BOOST_TEST(testLastName == c.getLastName());
            BOOST_TEST(testPersonalID == c.getPersonalId());
            BOOST_TEST(testaddress1 == c.getAdress());
        }

        ///Test of function SetFirstName
        BOOST_AUTO_TEST_CASE(firstNameSetterTest) {
            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            c.SetFirstName("Julie");
            BOOST_TEST("Julie" == c.getFirstName());
        }

        /// Test of function SetLastName
        BOOST_AUTO_TEST_CASE(lastNameSetterTest) {
            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            c.SetLastName("Smith");
            BOOST_TEST("Smith" == c.getLastName());
        }

        ///Test of function SetAdress
        BOOST_AUTO_TEST_CASE(AdressSetterTest) {
            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            c.SetAdress(testaddress2);
            BOOST_TEST(testaddress2 == c.getAdress());
        }

        ///Test of function Client Type Bronze
        BOOST_AUTO_TEST_CASE(ClientTypeBronzeDiscountTest) {
            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            Bronze bronzeObject;
            Bronze *bronze = &bronzeObject;
            c.setClientType(bronze);
            float eps = 1000 - 2;
            BOOST_TEST(c.applyDiscount(1000) == eps);
        }

        ///Test of function Client Type Diamond
        BOOST_AUTO_TEST_CASE(ClientTypeDiamondDiscountTest) {
            Client c(testFirstName, testLastName, testPersonalID, testaddress1);
            Diamond diamondObject;
            Diamond *diamond = &diamondObject;
            c.setClientType(diamond);
            float eps = 1000 * 0.6;
            BOOST_TEST(c.applyDiscount(1000) == eps);
        }


    BOOST_AUTO_TEST_SUITE_END()