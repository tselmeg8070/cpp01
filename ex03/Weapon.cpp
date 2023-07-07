#include "Weapon.hpp"

Weapon::Weapon(std::string vType)
{
	type = vType;
}

std::string Weapon::getType(void)
{
	return (type);
}

void		Weapon::setType(std::string vType)
{
	type = vType;
}
