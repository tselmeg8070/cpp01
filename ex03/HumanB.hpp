#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string vName);
	void	attack(void);
	void	setWeapon(Weapon &vWeapon);
};

#endif
