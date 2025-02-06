/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:02 by proton            #+#    #+#             */
/*   Updated: 2025/02/05 22:09:01 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits_nbr = 8;

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
    
    return ;
}

Fixed::Fixed( const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;

    *this = copy;
    
    return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    std::cout << "copy assignement operator called" << std::endl;

    if (this != &copy)
        this->_fixed_point = copy.getRawBits();

    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;

    return ;
}




int		Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    
    return (this->_fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    
    this->_fixed_point = raw;
}


