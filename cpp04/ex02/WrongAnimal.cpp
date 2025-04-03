/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:26:07 by proton            #+#    #+#             */
/*   Updated: 2025/02/24 16:44:35 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("DEFAULT")
{
    std::cout << "The default constructor of class animal" << std::endl;

    return ;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
    std::cout << "Assignation in class animal is called" << std::endl;

    return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
    std::cout << "Copy constructor being called in class animal" << std::endl;

    *this = copy;

    return ;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& copy )
{
    std::cout << "Copy operator being called in class animal" << std::endl;

    if (this != &copy)
        this->_type = copy._type;
    
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of class animal is called" << std::endl;

    return ;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << this->_type << " makes Wrong animal (Human noises) noises" << std::endl;
    
    return ;
}