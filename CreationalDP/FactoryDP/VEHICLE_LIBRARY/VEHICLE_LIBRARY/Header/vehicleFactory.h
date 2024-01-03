#pragma once
#include <list>
#include <algorithm>

#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include "bus.h"

class VehicleFactory
{
public: 
	static Vehicle* getVehicle(const std::string& vehicleType);

	static void deleteVehicle(Vehicle*& vehicle); 

	static void deleteVehicles(); 
private: 
	static std::list<Vehicle*> vehicles; 
};

