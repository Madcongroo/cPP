/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:47:00 by proton            #+#    #+#             */
/*   Updated: 2025/02/20 11:05:44 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string	entry;
	int			num;
	Zombie		*zombieH;

	std::cout << "first enter a number" << std::endl;
	if (!(std::cin >> num))
	{
		std::cerr << "that aint no number!" << std::endl;
		return (1);
	}
	std::cout << "nice, now enter a name that you like" << std::endl;
	std::cin >> entry;
	zombieH = zombieHorde(num, entry);
	if (!zombieH)
	{
		std::cerr << "something went wrong in the horde creation" << std::endl;
		return (1);
	}
	for (int i = 0; i < num; i++)
	{
		zombieH[i].announce();
	}
	delete[](zombieH);
	
}
