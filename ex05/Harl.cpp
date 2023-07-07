#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
}

Harl::Harl()
{
	members["debug"] = &Harl::debug;
	members["info"] = &Harl::info;
	members["warning"] = &Harl::warning;
	members["error"] = &Harl::error;
}

void Harl::complain(std::string level)
{

	if (members.find(level) != members.end())
	{
		FunctionPointer func = members[level];
		(this->*func)();
	}
	else
		std::cerr << "Level not found" << std::endl;
}
