#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon {
private:
	std::string	type;
public:
	void		setType(std::string vType);
	std::string	getType(void);
	Weapon(std::string vType);
};

#endif
