/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:00 by bproton           #+#    #+#             */
/*   Updated: 2025/02/14 16:02:56 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
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
