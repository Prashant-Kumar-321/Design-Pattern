#pragma once 

#include<string>
#include "car.hpp"
#include "bike.hpp"
#include "bus.hpp"
#include "Vehicle.hpp"

class VehicleFactory
{
public: 
  static Vehicle* getVehicle(std::string vehicelType); 
}; 