/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:37:05 by tidigov           #+#    #+#             */
/*   Updated: 2023/03/15 14:37:05 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string ="HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	std::cout<<"mem address of string: "<<&string<<std::endl;
	std::cout<<"mem address held by stringPTR: "<<stringPTR<<std::endl;
	std::cout<<"mem address held by stringREF: "<<&stringREF<<std::endl;
	std::cout<<"string = "<<string<<std::endl;
	std::cout<<"stringPTR = "<<*(stringPTR)<<std::endl;
	std::cout<<"stringREF = "<<stringREF<<std::endl;
}