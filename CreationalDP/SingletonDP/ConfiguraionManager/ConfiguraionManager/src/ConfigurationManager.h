#pragma once
#include<mutex>

class ConfigurationManager
{
public:
	static ConfigurationManager* getConfigManager(); 
private: 
	ConfigurationManager(); 
	ConfigurationManager(const ConfigurationManager& other) = delete;             // copy constructor
	ConfigurationManager& operator= (const ConfigurationManager& other) = delete; // copy Assignment operator

	static std::mutex mtx; 
	static ConfigurationManager* configManagerInstance; 
};

