#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *_weap;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeap(Weapon &weap);
	void	attack();
};

#endif