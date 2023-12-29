#include<iostream>
#include<string>

#include "vehicleFactory.hpp"

int main (int argc, char**argv)
{
  std::string vehicleType; 
  std::cin>>vehicleType; 
  Vehicle* vehicle = VehicleFactory::getVehicle(vehicleType);
  if (vehicle) {
    vehicle->createVehicle(); 
  } else{
    std::cout<< "Failed to create vehicle"<< std::endl; 
  }

  return 0; 
}