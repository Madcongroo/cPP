/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:26:14 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:38:36 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor is called" << std::endl;

	return ;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal::WrongAnimal( type )
{
	std::cout << "Assignation constructor called in class WrongCat" << std::endl;
    
	return ;
}

WrongCat::WrongCat( const WrongCat& copy ) : WrongAnimal::WrongAnimal( copy )
{
	std::cout << "Copy constructor being called in class WrongCat" << std::endl;

	return ;
}

WrongCat& WrongCat::operator=( const WrongCat& copy )
{
	std::cout << "Operator constructor called in class WrongCat" << std::endl;

	if (this != &copy)
		this->_type = copy._type;
	
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called in class WrongCat" << std::endl;

	return ;
}

void    WrongCat::makeSound() const
{
    std::cout << this->_type << " makes weird cat noises" << std::endl;

    return ;
}

std::string	WrongCat::getType() const
{
    return (this->_type);
}
