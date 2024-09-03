#ifndef CARRENTAL_TYPEDEFS_H
#define CARRENTAL_TYPEDEFS_H
#include "model/Client.h"
#include "model/Vehicle.h"
#include "model/Adress.h"
#include "model/Rent.h"
#include "model/ClientType.h"

typedef Client *ClientPtr;
typedef Adress *AdressPtr;
typedef Rent *RentPtr;
typedef Vehicle *VehiclePtr;
typedef ClientType *ClientTypePtr;

typedef bool (*ClientPredicate)(std::shared_ptr<Client>);
typedef bool (*RentPredicate)(std::shared_ptr<Rent>);
typedef bool (*VehiclePredicate)(std::shared_ptr<Vehicle>);

#endif //CARRENTAL_TYPEDEFS_H
