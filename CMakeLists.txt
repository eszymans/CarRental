cmake_minimum_required(VERSION 3.25)
project(repository)

set(CMAKE_CXX_STANDARD 14)

include_directories(workshop/library/include)
include_directories(workshop/library/include/model)
include_directories(workshop/library/include/repositories)

add_executable(repository
        workshop/library/include/model/Adress.h
        workshop/library/include/model/Bicycle.h
        workshop/library/include/model/Car.h
        workshop/library/include/model/Client.h
        workshop/library/include/model/ClientType.h
        workshop/library/include/model/Moped.h
        workshop/library/include/model/MotorVehicle.h
        workshop/library/include/model/Rent.h
        workshop/library/include/model/Vehicle.h
        workshop/library/include/repositories/ClientRepository.h
        workshop/library/include/repositories/RentRepository.h
        workshop/library/include/repositories/VehicleRepository.h
        workshop/library/include/StorageContainer.h
        workshop/library/include/typedefs.h
        workshop/library/src/model/Adress.cpp
        workshop/library/src/model/Bicycle.cpp
        workshop/library/src/model/Car.cpp
        workshop/library/src/model/Client.cpp
        workshop/library/src/model/ClientType.cpp
        workshop/library/src/model/Moped.cpp
        workshop/library/src/model/MotorVehicle.cpp
        workshop/library/src/model/Rent.cpp
        workshop/library/src/model/Vehicle.cpp
        workshop/library/src/repositories/ClientRepository.cpp
        workshop/library/src/repositories/RentRepository.cpp
        workshop/library/src/repositories/VehicleRepository.cpp
        workshop/library/src/StorageContainer.cpp
        workshop/library/test/AdressTest.cpp
        workshop/library/test/ClientTest.cpp
        workshop/library/test/master.cpp
        workshop/library/test/RentTest.cpp
        workshop/library/test/RepositoryTest.cpp
        workshop/library/test/VehicleTest.cpp
        workshop/program/src/main.cpp)
