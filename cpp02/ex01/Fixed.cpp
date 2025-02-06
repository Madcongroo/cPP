/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:02 by proton            #+#    #+#             */
/*   Updated: 2025/02/06 11:35:23 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_binary_point = 8;

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
    
    return ;
}

Fixed::Fixed( const Fixed& copy) : _fixed_point(copy._fixed_point)
{
    std::cout << "Copy constructor called" << std::endl;

    return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "copy assignement operator called" << std::endl;

    if (this != &copy)
        this->_fixed_point = copy._fixed_point;

    return (*this);
}

Fixed::Fixed( const int nbr )
{
    std::cout << "Int constructor called" << std::endl;

    int saved_number = 2;
    int i = 1;
    int new_number = nbr;

    while (i < _binary_point)
    {
        saved_number *= i;
        i++;
    }

    return (new_number *= saved_number);

}

Fixed::Fixed( const float nbr )
{
    
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

    return ;
}




int		Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits memeber function called" << std::endl;
    
    return (this->_fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
    this->_fixed_point = raw;
}


