#include <iostream>
#include <thread>

#include "ConfigurationManager.h"

void user1ConfigManager()
{
	ConfigurationManager* user1 = ConfigurationManager::getConfigManager();
}

void user2ConfigManager()
{
	ConfigurationManager* user2 = ConfigurationManager::getConfigManager(); 
}
void user3ConfigManager()
{
	ConfigurationManager* user2 = ConfigurationManager::getConfigManager(); 
}
void user4ConfigManager()
{
	ConfigurationManager* user2 = ConfigurationManager::getConfigManager(); 
}

int main(int argc, char** argv)
{
	std::thread th1(user1ConfigManager); 
	std::thread th2(user2ConfigManager); 
	std::thread th3(user3ConfigManager); 
	std::thread th4(user4ConfigManager); 

	th1.join();
	th2.join(); 
	th3.join(); 
	th4.join(); 

	delete ConfigurationManager::getConfigManager(); 
}