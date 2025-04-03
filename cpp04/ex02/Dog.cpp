/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:00 by bproton           #+#    #+#             */
/*   Updated: 2025/04/02 11:04:23 by proton           ###   ########.fr       */
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

	this->_thoughts = new Brain(*copy._thoughts);

	return ;
}

Dog& Dog::operator=( const Dog& copy )
{
	std::cout << "Operator constructor called in class Dog" << std::endl;

	if (this == &copy)
		return (*this);

	delete _thoughts;
	this->_type = copy._type;
	this->_thoughts = new Brain(*copy._thoughts);

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

void	Dog::getIdeas( int i ) const
{
	std::cout << this->_thoughts->_ideas[i] << std::endl;
}

void	Dog::setIdea( std::string &idea, int i )
{
	this->_thoughts->_ideas[i].clear();
	this->_thoughts->_ideas[i] = idea;
}

std::string	Dog::getType() const
{
	return (this->_type);
}
