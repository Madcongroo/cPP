/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:54 by bproton           #+#    #+#             */
/*   Updated: 2025/02/25 11:36:37 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat"), _thoughts(new Brain())
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
		
	for (size_t i = 0; i < copy._thoughts->_ideas->size(); i++)
		this->_thoughts->_ideas[i] = copy._thoughts->_ideas[i].substr();
	
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called in class Cat" << std::endl;

	delete _thoughts;

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
