/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:41 by bproton           #+#    #+#             */
/*   Updated: 2025/01/28 13:59:43 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main( void )
{
	   std::string	entry;
	   std::string	name;

		std::cout << "type RANDOM for a small apparition, type NEWZOMB for a stable zombie!" << std::endl << std::flush;

		std::cin >> entry;
		if (entry == "RANDOM")
		{
			std::cout << "what would you name your zombie?" << std::endl;
			std::cin >> name;
			randomChump(name);
			name.clear();
			entry.clear();
		}
		else if (entry == "NEWZOMB")
		{
			std::cout << "what would you name your zombie?" << std::endl;
			std::cin >> name;
			std::cout << "ok it'll be done in a minute" << std::endl;
			Zombie *test = newZombie(name);
			if (!test)
			{
				std::cerr << "something went wrong in the creation of the zombie" << std::endl;
				return (1);
			}
			test->announce();
			delete(test);
		}
	   return (0);
}

