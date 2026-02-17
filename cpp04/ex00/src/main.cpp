/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:25 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:38:36 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

	const WrongAnimal* new_meta = new WrongAnimal();
	const WrongAnimal* new_cat = new WrongCat();

	std::cout << new_cat->getType() << " " << std::endl;
	new_cat->makeSound();
	new_meta->makeSound();

	delete new_cat;
	delete new_meta;

	return (0);
}