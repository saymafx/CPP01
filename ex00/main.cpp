#include "Zombie.hpp"

int main()
{
	Zombie* newZ;
	newZ = newZombie("Allo");
	newZ->announce();
	delete newZ;
	randomChump("default");
	return 0;
}