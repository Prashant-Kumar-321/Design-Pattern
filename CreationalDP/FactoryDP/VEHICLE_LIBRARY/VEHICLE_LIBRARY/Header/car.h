#pragma once
#include "vehicle.h"

class Car : public Vehicle
{
public: 
	~Car() { std::cout << "Car has destroyed " << std::endl; }

	// Inherited via Vehicle
	void createVehicle() override;

	void start() override;

	void move() override;

	void changeDir(const std::string& dir) override;

};
