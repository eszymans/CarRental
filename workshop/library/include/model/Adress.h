
#ifndef CARRENTAL_ADRESS_H
#define CARRENTAL_ADRESS_H
#include <iostream>
class Adress {
private:
    std::string city;
    std::string street;
    std::string number;
public:

    /// Constructor for Adress
/// \param city name od city  in adress
/// \param street name of street  in adress
/// \param number number of street in adress
    Adress(std::string, std::string, std::string);

    ///Gives all informaction about class Adress
    /// \return string with all information
    const std::string getInfo();

    /// Gives back name of city in adress
    /// \return string name of city
    std::string getCity();

    /// Gives back name of street in adress
    /// \return string name of street
    std::string getStreet();

    /// Gives back number of street in adress
    /// \return string number of street
    std::string getNumber();

    ///Set city in adress on something new
    /// \param city string with new name
    void SetCity(std::string);

    ///Set street in adress on something new
    /// \param street string with new name
    void SetStreet(std::string);

    ///Set number in adress on something new
    /// \param number string with new name
    void SetNumber(std::string);

};
#endif //CARRENTAL_ADRESS_H
