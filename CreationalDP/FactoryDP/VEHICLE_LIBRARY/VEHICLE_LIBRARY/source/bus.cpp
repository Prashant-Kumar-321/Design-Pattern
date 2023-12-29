#include "bus.h"

void Bus::createVehicle()
{
	std::cout << "Bus Created " << std::endl; 
}

void Bus::start()
{
	std::cout << "Bus Started" << std::endl; 
}

void Bus::move()
{
	std::cout << "Bus Starts moving" << std::endl;
}

void Bus::changeDir(const std::string& dir)
{
	std::cout << "Direction of Bus has changed to " << dir << std::endl; 
}
