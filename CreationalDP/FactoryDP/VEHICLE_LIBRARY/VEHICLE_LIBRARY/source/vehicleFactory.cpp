#include <iostream>

#include "vehicleFactory.h"

std::list<Vehicle*> VehicleFactory::vehicles;

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
    
    // Keep track of all vehicles that has been created 
    if (vehicle) {
        vehicles.push_back(vehicle); 
    }

    return vehicle; 
}

// Delete given Vehicle 
void VehicleFactory::deleteVehicle(Vehicle*& vehicle)
{
    // search given vehicle in the list of vehicles 
    std::list<Vehicle*>::iterator veh = std::find(vehicles.begin(), vehicles.end(), vehicle);

    if (veh != vehicles.end()) {
        vehicles.erase(veh); // delete from list 
        delete vehicle;      // delete from memory 
        vehicle = nullptr;   // Assign nullptr so that it no longer pointer to invalid memory
    }
    else {
        std::cout << "Given Vehicle not found" << std::endl; 
    }
}

// delete all vehicles that has been created so far by using VehicleFactory function 
void VehicleFactory::deleteVehicles()
{
    while (!vehicles.empty()){
        delete vehicles.front(); 
        vehicles.pop_front(); 
    }
}
