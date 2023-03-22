/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:37:38 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:37:38 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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