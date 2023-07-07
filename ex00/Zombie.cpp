#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << "Died due to atomic explosion: "
		<< name << std::endl;
}

void	Zombie::setName(std::string valName)
{
	name = valName;
}

std::string Zombie::getName(void)
{
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
