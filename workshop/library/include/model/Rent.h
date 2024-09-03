#ifndef CARRENTAL_RENT_H
#define CARRENTAL_RENT_H
#include "Client.h"
#include "Vehicle.h"
#include <boost/date_time.hpp>
#include <memory>
class Client;
class Rent {
private:
    int id;
    boost::posix_time::ptime beginTime;
    boost::posix_time::ptime endTime;
    int rentCost =0;
    Client *client;
    Vehicle *vehicle;
public:
    /// Constructor class Rent
    /// \param id
    /// \param client
    /// \param vehicle
    Rent(int id, Client *client, Vehicle *vehicle, boost::posix_time::ptime beginTime);

    /// Gives id of Rent
    /// \return id (int)
    int getId() const;

    /// Getter of client
    /// \return *client
    Client *getClient() const;

    /// Getter of vehicle
    /// \return *vehicle
    Vehicle *getVehicle() const;

    /// Getter of rentCost
    /// \return int rentCost
    int getRentCost() const;

    /// Getter of BeginTime
    /// \return const boost::posix_time::ptime
    const boost::posix_time::ptime &getBeginTime() const;

    /// Getter of EndTime
    /// \return const boost::posix_time::ptime
    const boost::posix_time::ptime &getEndTime() const;

    /// Gives how many days it was rented
    /// \return boost::posix_time::ptime
    int getRentDays();

    /// Gives all information about Rent
    /// \return string
    std::string getInfo();

    /// Setter id on sth new
    /// \param id
    void setId(int id);

    void setRentCost(int rentCost);

    /// Setter *client on sth new
    /// \param client
    void setClient(Client *client);

    /// Setter *vehicle on sth new
    /// \param vehicle
    void setVehicle(Vehicle *vehicle);

    void endRent(boost::posix_time::ptime endTime);

    Rent(const char string[2], std::shared_ptr<Client> sharedPtr, std::shared_ptr<Vehicle> sharedPtr1);
};


#endif //CARRENTAL_RENT_H
