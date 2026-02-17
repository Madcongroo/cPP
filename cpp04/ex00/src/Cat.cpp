/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:54 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:38:36 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	std::cout << "Cat default constructor is called" << std::endl;

	return ;
}

Cat::Cat( std::string type ) : Animal::Animal( type )
{
	std::cout << "Assignation constructor called in class Cat" << std::endl;

	return ;
}

Cat::Cat( const Cat& copy ) : Animal::Animal( copy )
{
	std::cout << "Copy constructor being called in class Cat" << std::endl;

	return ;
}

Cat& Cat::operator=( const Cat& copy )
{
	std::cout << "Operator constructor called in class Cat" << std::endl;

	if (this != &copy)
		this->_type = copy._type;
	
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called in class Cat" << std::endl;


	return ;
}

void	Cat::makeSound() const
{
	std::cout << this->getType() << " makes miaou" << std::endl;

	return ;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
