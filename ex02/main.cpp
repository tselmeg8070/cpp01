#include <iostream>
#include <string>

int main()
{
	std::string val = "HI THIS IS BRAIN";
	std::string *stringPTR = &val;
	std::string &stringREF = val;

	std::cout << "Mem addrs:" << std::endl;
	std::cout << &val << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "Values:" << std::endl;
	std::cout << val << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
