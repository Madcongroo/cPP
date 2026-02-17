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
	
	this->_thoughts = new Brain(*copy._thoughts);

	return ;
}

Cat& Cat::operator=( const Cat& copy )
{
	std::cout << "Operator constructor called in class Cat" << std::endl;

	if (this == &copy)
		return (*this);

	delete _thoughts;
	this->_type = copy._type;
	this->_thoughts = new Brain(*copy._thoughts);

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

void	Cat::getIdeas( int i ) const
{
	std::cout << this->_thoughts->_ideas[i] << std::endl;
}

void	Cat::setIdea( std::string &idea, int i )
{
	this->_thoughts->_ideas[i].clear();
	this->_thoughts->_ideas[i] = idea;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
