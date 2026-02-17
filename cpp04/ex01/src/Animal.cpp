/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:35 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:38:36 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "The default constructor of class animal" << std::endl;

    return ;
}

Animal::Animal( std::string type ) : _type(type)
{
    std::cout << "Assignation in class animal is called" << std::endl;

    return ;
}

Animal::Animal( const Animal& copy )
{
    std::cout << "Copy constructor being called in class animal" << std::endl;

    *this = copy;

    return ;
}

Animal& Animal::operator=( const Animal& copy )
{
    std::cout << "Copy operator being called in class animal" << std::endl;

    if (this != &copy)
        this->_type = copy._type;
    
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor of class animal is called" << std::endl;

    return ;
}

std::string Animal::getType() const
{
    return (this->_type);
}

void    Animal::makeSound() const
{
    std::cout << this->_type << " makes random angry noise"  << std::endl;
    
    return ;
}
