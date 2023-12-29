#pragma once
#include "vehicle.h"
#include "car.h"
#include "bike.h"
#include "bus.h"

class VehicleFactory
{
public: 
	static Vehicle* getVehicle(const std::string& vehicleType); 
};