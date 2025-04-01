/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:00 by bproton           #+#    #+#             */
/*   Updated: 2025/04/01 14:02:01 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog"), _thoughts(new Brain())
{
	std::cout << "Dog default constructor is called" << std::endl;

	return ;
}

Dog::Dog( std::string type ) : Animal::Animal( type )
{
	std::cout << "Assignation constructor called in class Dog" << std::endl;
    
	return ;
}

Dog::Dog( const Dog& copy ) : Animal::Animal( copy )
{
	std::cout << "Copy constructor being called in class Dog" << std::endl;
	for (size_t i = 0; i < copy._thoughts->_ideas->size(); i++)
			this->_thoughts->_ideas[i] = copy._thoughts->_ideas[i].substr();

	return ;
}

Dog& Dog::operator=( const Dog& copy )
{
	std::cout << "Operator constructor called in class Dog" << std::endl;

	if (this != &copy)
	{
		delete _thoughts;
		
		this->_type = copy._type;
	}
	
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor called in class Dog" << std::endl;

	delete _thoughts;

	return ;
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " makes ouaf ouaf" << std::endl;

	return ;
}

void	Dog::getIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << getType() << " has this precise thought" << this->_thoughts->_ideas[i] << std::endl;
	}
}

std::string	Dog::getType() const
{
	return (this->_type);
}
