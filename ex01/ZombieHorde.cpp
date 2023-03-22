/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:36:58 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:36:58 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	Zomb = new Zombie[N];
	while (N > 0)
    {
		Zomb[N] = Zombie(name);
		N--;
	}
	return Zomb;
}