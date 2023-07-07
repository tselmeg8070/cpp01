#include "HumanB.hpp"

HumanB::HumanB(std::string vName)
{
	name = vName;
	weapon = NULL;
}

void	HumanB::attack(void)
{
	if (!weapon)
		std::cout << name << " punching with bare hands"
			<< std::endl;
	else
		std::cout << name << " attacks with their "
			<< weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &vWeapon)
{
	weapon = &vWeapon;
}
