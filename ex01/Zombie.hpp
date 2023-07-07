#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>

class Zombie {
private:
	std::string name;
public:
	void		announce(void);
	void		setName(std::string valName);
	std::string getName(void);
	~Zombie();
};

#endif
