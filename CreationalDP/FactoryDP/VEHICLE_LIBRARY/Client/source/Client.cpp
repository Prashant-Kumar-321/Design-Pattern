#include <iostream>
#include <string>

#include "vehicleFactory.h"

int main()
{
	Vehicle* vehicle = nullptr;
	std::string vehicleType = ""; 
	std::cout << "Enter Vehicle type " << std::endl; 
	std::cin >> vehicleType;
	std::cin.get(); // discard '\n' from input buffer 

	vehicle = VehicleFactory::getVehicle(vehicleType);

	if (vehicle) {
		vehicle->createVehicle();
		vehicle->start(); 
		vehicle->move();
		vehicle->changeDir("south"); 
		vehicle->move(); 
	}
	else {
		std::cout << "Failed to create intended vehicle " << std::endl; 
	}
	
	// Delete all vehicles created so far
	VehicleFactory::deleteVehicles(); 
	std::cin.get(); 

	return 0; 
}