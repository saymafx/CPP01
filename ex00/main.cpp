/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:35:58 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:35:58 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* newZ;
	newZ = newZombie("Allo");
	newZ->announce();
	delete newZ;
	randomChump("default");
	return 0;
}