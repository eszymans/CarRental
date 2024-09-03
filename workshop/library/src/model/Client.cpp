#include "../../include/model/Client.h"

Client::Client(string firstname, string lastname, string personalid, Adress* adress): firstName(firstname), lastName(lastname), personalID(personalid), adress(adress){
}

Client::~Client() {
    delete adress;
}

const string Client::getInfo()
{
    string result;
    result.clear();
    result = firstName + " " + lastName + " " + personalID;
    result = result + " " + adress->getInfo();
    return result;
}

const string Client::getFirstName() {
    return firstName;
}

const string Client::getPersonalId(){
    return personalID;
}

const string Client::getLastName(){
    return lastName;
}

const Adress* Client::getAdress() {
    return adress;
}

void Client::SetAdress(Adress *adress) {
    if(adress != nullptr) Client::adress = adress;
}

void Client::SetFirstName(const string &firstName) {
    if(firstName.empty() != 1) Client::firstName = firstName;
}

void Client::SetLastName(const string &lastName) {
    if(lastName.empty() != 1) Client::lastName = lastName;
}

const vector<Rent> &Client::getCurrentRents() const {
    return currentRents;
}

const string Client::getFullInfo() {
    string result;
    result.clear();
    result = getInfo() + " " ;
    for(auto k : currentRents)
    {
        result+=k.getId()+" ";
    }
    return result;
}

void Client::setCurrentRents(const vector<Rent> &currentRents) {
    Client::currentRents = currentRents;
}


void Client::setClientType(ClientType *clientType) {
    Client::clientType = clientType;
}

int Client::getMaxVehicles() {
    return clientType->getMaxVehicles();
}

double Client::applyDiscount(double price) {
    return clientType->applyDiscount(price);
}

Client::Client(const string &personalId, const string &firstName, const string &lastName, Adress *adress,
               ClientType *clientType) : personalID(personalId), firstName(firstName), lastName(lastName),
                                         adress(adress), clientType(clientType) {}

void deleteCurrentRents(const vector<Rent> &currentRents) {
//
}
