/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:37:34 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:37:34 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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