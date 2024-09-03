cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
        src/model/Client.cpp
        include/model/Client.h
        test/master.cpp
        src/model/Adress.cpp
        include/model/Adress.h
        src/model/Vehicle.cpp
        include/model/Vehicle.h
        src/model/Rent.cpp
        include/model/Rent.h
        include/typedefs.h
        include/model/Bicycle.h
        include/model/MotorVehicle.h
        include/model/Moped.h
        include/model/Car.h
        src/model/Bicycle.cpp
        src/model/Moped.cpp
        src/model/Car.cpp
        src/model/MotorVehicle.cpp
        src/model/Bicycle.cpp
        include/model/ClientType.h
        include/model/ClientType.h
        src/model/ClientType.cpp
        src/model/ClientType.cpp
        src/repositories/ClientRepository.cpp
        include/repositories/ClientRepository.h
        src/repositories/VehicleRepository.cpp
        include/repositories/VehicleRepository.h
        src/repositories/RentRepository.cpp
        include/repositories/RentRepository.h
        src/StorageContainer.cpp
        include/StorageContainer.h
)
# Utwórz bibliotekę typu STATIC, SHARED albo MODULE ze wskazanych źródeł
add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)

#dodanie testów i biblioteki boost
enable_testing()
find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES
        test/master.cpp
        test/ClientTest.cpp
        test/AdressTest.cpp
        test/VehicleTest.cpp
        test/RentTest.cpp
        test/RepositoryTest.cpp
)

# tu w przyszłości będą dodawane pliki źródłowe testów

add_executable (LibraryTester ${SOURCE_TEST_FILES})

#dołącz bibliotekę z testowanymi klasami oraz bibliotekę boost.test do programu testów
target_link_libraries (LibraryTester
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
)
add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

#dodaj test LibraryTest. Instrukcji cmake add_test może być wiele.
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(LibraryTest LibraryTester
        --report_level=detailed
        --log_level=all
        --color_output=yes
)