#pragma once

#include <iostream>
#include <string>

/*
*  Interface class for All vehicle 
*  Every Vehicle will be Derived from this class 
*  And all pure virtual fuction has to be implemented into Drived classes
*/

class Vehicle
{
public:
	virtual void createVehicle() = 0; 
	virtual void start() = 0; 
	virtual void move() = 0;
	virtual void changeDir(const std::string& dir) = 0; 
};

/*
* Vehicle class is only concerned about vehicle 
* 
* SRP
* 
*/