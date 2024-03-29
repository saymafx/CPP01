/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:37:23 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:37:23 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name), _weap(NULL){
}

HumanB::~HumanB(){}

void	HumanB::setWeap(Weapon &weap)
{
	_weap = &weap;
}

void	HumanB::attack(void)
{
	if (!_weap)
		std::cout<<_name<<" has no weapon!"<<std::endl;
	else
		std::cout<<_name<<" attacks with "<<(*_weap).getType()<<std::endl;
}