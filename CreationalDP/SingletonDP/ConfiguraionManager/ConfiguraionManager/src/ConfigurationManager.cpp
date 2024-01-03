#include <iostream>

#include "ConfigurationManager.h"

ConfigurationManager* ConfigurationManager::configManagerInstance = nullptr;
std::mutex ConfigurationManager::mtx;

ConfigurationManager* ConfigurationManager::getConfigManager()
{
	if (!configManagerInstance)
	{
		mtx.lock();
		if (configManagerInstance == nullptr)
		{
			configManagerInstance = new ConfigurationManager;
		}
		mtx.unlock();
	}

	return configManagerInstance; 
}

ConfigurationManager::ConfigurationManager()
{
	std::cout << "A New Instance of Configuration-Manager Class Created " << std::endl; 
}
