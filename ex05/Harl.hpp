#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>
# include <map>
#include <functional>

class Harl {
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	typedef void (Harl::*FunctionPointer)();
	std::map<std::string, FunctionPointer> members;
public:
	Harl();
	void	complain(std::string level);
};

#endif
