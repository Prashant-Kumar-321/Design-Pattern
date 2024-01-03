#pragma once

#include "vehicle.h"

class Bike : public Vehicle
{
public: 
	~Bike() { std::cout << "Bike has Distroyed " << std::endl; }

	// Inherited via Vehicle
	void createVehicle() override;

	void start() override;

	void move() override;

	void changeDir(const std::string& dir) override;

};