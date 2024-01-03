#pragma once
#include "vehicle.h"
class Bus : public Vehicle
{
public: 
	~Bus() { std::cout << "Bus has Destroyed " << std::endl; }

	// Inherited via Vehicle
	void createVehicle() override;

	void start() override;

	void move() override;

	void changeDir(const std::string& dir) override;

};