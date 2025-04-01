/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:54 by bproton           #+#    #+#             */
/*   Updated: 2025/04/01 14:03:17 by proton           ###   ########.fr       */
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

	for (size_t i = 0; i < copy._thoughts->_ideas->size(); i++)
			this->_thoughts->_ideas[i] = copy._thoughts->_ideas[i].substr();

	return ;
}

Cat& Cat::operator=( const Cat& copy )
{
	std::cout << "Operator constructor called in class Cat" << std::endl;

	if (this != &copy)
	{
		delete _thoughts;
		
		this->_type = copy._type;
		this->_thoughts = copy._thoughts;
	}

	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor called in class Cat" << std::endl;
	
	// delete _thoughts->_ideas;
	delete _thoughts;

	return ;
}

void	Cat::makeSound() const
{
	std::cout << this->getType() << " makes miaou" << std::endl;

	return ;
}

void	Cat::getIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << getType() << " has this precise thought" << this->_thoughts->_ideas[i] << std::endl;
	}
}

std::string	Cat::getType() const
{
	return (this->_type);
}
