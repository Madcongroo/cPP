/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:00 by bproton           #+#    #+#             */
/*   Updated: 2025/02/14 17:42:53 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
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

	return ;
}

Dog Dog::operator=( const Dog& copy )
{
	std::cout << "Operator constructor called in class Dog" << std::endl;

	if (this != &copy)
		this->_type = copy._type;
	
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor called in class Dog" << std::endl;

	return ;
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " makes ouaf ouaf" << std::endl;

	return ;
}

std::string	Dog::getType() const
{
	return (this->_type);
}
