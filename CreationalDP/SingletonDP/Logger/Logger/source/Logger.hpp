#pragma once

#include <iostream>
#include <string>
#include <mutex>

class Logger
{
public: 
	static Logger* getLogger(); 
	void log(const std::string& msg); 

	// delete all functions that are ways to invoke constructor
	// copy constructor
	Logger(const Logger& logger) = delete;
	Logger& operator= (const Logger& logger) = delete; 
private: 
	Logger(); 
	static int counter; // Counting no of instances created of class
	static Logger* loggerInstance;
	static std::mutex mtx; 
};
