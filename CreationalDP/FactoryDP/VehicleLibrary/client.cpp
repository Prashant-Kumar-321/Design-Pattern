#include<iostream>
#include<string>


#include"bike.hpp" // declaration of Bike class 
#include"car.hpp"  // Declaration of Car class 

int main(int argc, char** argv)
{
  std::string vehicleType(""); 
  std::cin>>vehicleType; 

  Vehicle* vehicle = nullptr; 

  if (vehicleType == "car"){
    vehicle = new Car(); 
  }
  else if (vehicleType == "bike"){
    vehicle = new Bike(); 
  }


  if (vehicle){
    vehicle->createVehicle(); 
  }
  else {
    std::cout<< "Not Valid input"<< std::endl; 
  }





  return 0; 
}

