#include<iostream>
#include <thread>

#include "Logger.hpp"

void user1log() 
{
	Logger* user1 = Logger::getLogger();
	user1->log("This message is from user 1");
}

void user2log() 
{
	Logger* user2 = Logger::getLogger();
	user2->log("This message is from user 2");
}


int main()
{
	std::thread t1(user1log); 
	std::thread t2(user2log); 

	t1.join(); 
	t2.join();

	delete Logger::getLogger(); 
	return 0; 
}