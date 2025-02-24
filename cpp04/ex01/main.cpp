/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:25 by bproton           #+#    #+#             */
/*   Updated: 2025/02/23 12:15:01 by proton           ###   ########.fr       */
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

	Animal *table[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 4)
			table[i] = new Dog();
		else
			table[i] = new Cat();
	}

	delete[] *table;

	delete j; //should not create a leak
	delete i;

return 0;
}