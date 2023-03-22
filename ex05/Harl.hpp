/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:36:46 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/21 19:19:10 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    Harl();
    ~Harl();

    void complain( std::string level );
};

#endif