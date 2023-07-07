#include "HumanA.hpp"

HumanA::HumanA(std::string vName, Weapon &vWeapon)
{
	name = vName;
	weapon = &vWeapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their "
		<< weapon->getType() << std::endl;
}
