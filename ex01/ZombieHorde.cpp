#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	Zomb = new Zombie[N];
	while (N > 0)
    {
		Zomb[N] = Zombie(name);
		N--;
	}
	return Zomb;
}