/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:25 by bproton           #+#    #+#             */
/*   Updated: 2025/02/25 11:35:35 by proton           ###   ########.fr       */
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

	// Animal *table[9];

	// for (int i = 0; i != 9; i++)
	// {
	// 	char c = i;
	// 	if (i < 4)
	// 		table[i] = new Dog("cat " + c);
	// 	else
	// 		table[i] = new Cat("dog " + c);
	// }

	


	delete j;
	delete i;

	return 0;
}