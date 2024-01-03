#include "Logger.hpp"

int Logger::counter = 0; 
Logger* Logger::loggerInstance = nullptr;
std::mutex Logger::mtx; 

Logger::Logger()
{
	++counter; 
	std::cout << "New instance created: Instance No. "<< counter << std::endl; 
}

void Logger::log(const std::string& msg)
{
	std::cout << msg << std::endl; 
}

Logger* Logger::getLogger() 
{
	// double checking locking 
	// lock are really expensive 
	// We only required lock first time when creating instance of Logger
	if (!loggerInstance)
	{
		mtx.lock();
		// Critical section 
		if (loggerInstance == nullptr) // haven't created logger instance so far 
		{
			loggerInstance = new Logger();
		}
		mtx.unlock();
	}
	return loggerInstance; 
}
