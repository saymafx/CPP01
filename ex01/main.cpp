#include "Zombie.hpp"

int main()
{
	Zombie* Horde = zombieHorde(10, "hello");
	delete [] Horde;
	return (0);
}