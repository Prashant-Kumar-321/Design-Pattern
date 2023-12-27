#include "vehicleFactory.hpp"
#include "car.hpp"
#include "bike.hpp"

Vehicle* VehicleFactory::getVehicle(std::string vehicleType)
{
  Vehicle* vehicle = nullptr; 

  if (vehicleType == "car"){
    vehicle = new Car(); 
  }
  else if (vehicleType == "bike"){
    vehicle = new Bike(); 
  }
  
  return vehicle; 
}