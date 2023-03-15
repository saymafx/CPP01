#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout<<"Parametrical Constructor called\n";
}

Zombie::~Zombie(void){
	std::cout<<_name<<" : is destroyed\n";
}

void	Zombie::announce(void){
	std::cout<<_name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}