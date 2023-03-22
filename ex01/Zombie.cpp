/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:36:51 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:36:51 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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