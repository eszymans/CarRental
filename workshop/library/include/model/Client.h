#ifndef CARRENTAL_CLIENT_H
#define CARRENTAL_CLIENT_H
#include <string>
#include <iostream>
#include <vector>
#include "Adress.h"
#include "Rent.h"
#include "ClientType.h"
using namespace std;
class Rent;
class Client {
private:
    string personalID; //niezmienialne
    string firstName;
    string lastName;
    Adress* adress;
    std::vector<Rent> currentRents;
public:

/// Constructor for Client
/// \param firstname firstName of Client
/// \param lastname lastName of Client
/// \param personalid personalID of Client
    Client(string, string, string, Adress*);


    Client(const string &personalId, const string &firstName, const string &lastName, Adress *adress,
           ClientType *clientType);

///Destructor class Client
    ~Client();

/// Gives information about Client (all without pointer)
/// \return firstName, lastName, personalID in one string
    const string getInfo();

/// Gives all information about Client
/// \return string
    const string getFullInfo();

///Gives firstName of Client
/// \return firstName of Client
    const string getFirstName();

///Gives PersonalID of Client
/// \return PersonalID of Client
    const string getPersonalId();

///Gives firstName of Client
/// \return firstName of Client
    const string getLastName();

/// Gives information about Adress od Client
/// \return string information about Adress
    const Adress* getAdress();

/// Gives all information abou currentRents
/// \return vector
    const vector<Rent> &getCurrentRents() const;

///Set firstName of Client on something new
/// \param firstName new firstName of Client
    void SetFirstName(const string &firstName);

///Set firstName of Client on something new
/// \param lastName new lastName of Client
    void SetLastName(const string &lastName);

///Set Adress of Client on something new
/// \param *Adress new pointer for adress of Client
    void SetAdress(Adress *adress);

    /// Set currentRents on new Rent in class client
    /// \param currentRents all rents in class client
    void setCurrentRents(const vector<Rent> &currentRents);

/// Function delete chosen one currentRents
/// \param currentRents
    void deleteCurrentRents(const vector<Rent> &currentRents);

/// Function set new ClientType
/// \param clientType
    void setClientType(ClientType *clientType);

    /// Function gives max Vehicles for clientType
    /// \return
    int getMaxVehicles();

    /// Function gives discount depended on clientType
    /// \param price
    /// \return price with discout
    double applyDiscount(double price);

    ClientType* clientType;
};


#endif //CARRENTAL_CLIENT_H
