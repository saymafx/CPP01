/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:36:37 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:36:37 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

private : 
	std::string _name;
public :
	Zombie(std::string = "default");
	~Zombie();

	void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif