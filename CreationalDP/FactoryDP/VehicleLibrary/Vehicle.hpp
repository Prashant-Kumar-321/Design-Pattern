#pragma once // Header guard (Non-Standard way)

/**
 * Standard way 
 * for Header guard 
 * #ifndef __VEHICLE__
 * #define __VEHICLE__
 * 
 * 
 * #endif 
*/

class Vehicle 
{
public: 
  virtual void createVehicle() = 0;
}; 
