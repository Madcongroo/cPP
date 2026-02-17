/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:02 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:36:43 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::_binary_point = 8;

std::ostream& operator<<(std::ostream& os, const Fixed& name)
{
	os << ((float)name.toFloat());
	return (os);
}

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

Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	
	this->_fixed_point = nbr << _binary_point;
}

Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;

	this->_fixed_point = roundf(nbr * (1 << _binary_point));
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

float	Fixed::toFloat( void ) const
{
	float new_nbr;

	new_nbr = (float)this->_fixed_point / (float)(1 << _binary_point);
	return (new_nbr);
}

int		Fixed::toInt( void ) const
{
	int	new_nbr;
	
	new_nbr	= this->_fixed_point >> _binary_point;

	return (new_nbr);
}
