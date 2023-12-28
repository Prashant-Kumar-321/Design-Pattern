#include "vehicleFactory.hpp"

Vehicle* VehicleFactory::getVehicle(std::string vehicleType)
{
  /**
   * I can perform some string manupulation 
   * like remove preceeding and trailing spaces, convert them into upper case 
  */

  Vehicle* vehicle = nullptr; 

  if (vehicleType == "car"){
    vehicle = new Car(); 
  }
  else if (vehicleType == "bike"){
    vehicle = new Bike(); 
  }
  else if (vehicleType == "bus"){
    vehicle = new Bus(); 
  }
  
  return vehicle; 
}