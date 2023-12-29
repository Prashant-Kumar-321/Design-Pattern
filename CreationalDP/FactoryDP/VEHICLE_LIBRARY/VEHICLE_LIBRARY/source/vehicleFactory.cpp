#include <iostream>

#include "vehicleFactory.h"

Vehicle* VehicleFactory::getVehicle(const std::string& vehicleType)
{
    Vehicle* vehicle = nullptr; 

    if (vehicleType == "CAR") {
        vehicle = new Car; 
    }
    else if (vehicleType == "BIKE") {
        vehicle = new Bike; 
    }
    else if (vehicleType == "BUS") {
        vehicle = new Bus; 
    }
    

    return vehicle; 
}
