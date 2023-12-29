#include "bike.h"

void Bike::createVehicle()
{
	std::cout << "Bike Created " << std::endl; 
}

void Bike::start()
{
	std::cout << "Bike Started \n"; 
}

void Bike::move()
{
	std::cout << "Bike starts moving " << std::endl;
}

void Bike::changeDir(const std::string& dir)
{
	std::cout << "Direction has changed to " << dir << std::endl; 
}
