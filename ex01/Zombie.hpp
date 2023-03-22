/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:36:54 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:36:54 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie {
private:
	std::string _name;
public:
	Zombie(std::string name = "default");
	~Zombie();

	void announce();
	void setName(std::string _name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif 