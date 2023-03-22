/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:37:12 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:37:12 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap) : _name(name), _weap(weap) {}

HumanA::~HumanA(){}

void	HumanA::attack(void)
{
	std::cout<<_name<<" attacks with "<<_weap.getType()<<std::endl;
}