/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:25 by bproton           #+#    #+#             */
/*   Updated: 2025/04/01 14:00:26 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;

	Animal *table[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			table[i] = new Dog();
		else
			table[i] = new Cat();
	}

	table[0]->makeSound();
	table[1]->makeSound();
	table[2]->makeSound();
	table[3]->makeSound();

	// std::cout << "after changes" << std::endl;

	table[0] = table[2];

	// table[0]->getIdeas();
	
	if (table[0])
		delete table[0];
	if (table[1])
		delete table[1];
	if (table[2])
		delete table[2];
	if (table[3])
		delete table[3];

	delete j;
	delete i;

	return 0;
}