#include "car.h"

void Car::createVehicle()
{
	std::cout<< "Car Created " << std::endl; 
}


void Car::start()
{
	std::cout << "Car Started " << std::endl; 
}

void Car::move()
{
	std::cout << "Car starts moving " << std::endl; 
}

void Car::changeDir(const std::string& dir)
{
	std::cout << "Direction has changed to " << dir << std::endl; 
}
