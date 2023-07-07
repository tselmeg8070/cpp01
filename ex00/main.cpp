#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie tank;
	tank.setName("Tank");
	tank.announce();
	Zombie *boomer = newZombie("Boomer");
	delete boomer;
	randomChump("Hunter");
}
