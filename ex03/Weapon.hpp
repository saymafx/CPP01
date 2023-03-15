#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type = "some other type of club");
	~Weapon();
	
	std::string const &	getType(void) const;
	void			setType(std::string type);

};

#endif