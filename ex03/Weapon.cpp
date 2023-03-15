#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
	std::cout<<"End\n";
}

std::string	const& Weapon::getType(void) const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}