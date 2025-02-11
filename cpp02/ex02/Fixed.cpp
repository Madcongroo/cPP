/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:02 by proton            #+#    #+#             */
/*   Updated: 2025/02/11 15:59:44 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_binary_point = 8;

std::ostream& operator<<(std::ostream& os, Fixed& name)
{
	os << ((float)name->_fixed_point / 256.0);
	return (os);
}

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
	
	this->_fixed_point = nbr << _binary_point;
}

Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;

	this->_fixed_point = (nbr * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

Fixed	Fixed::operator+(const Fixed& copy) const
{
	Fixed	temp;
	
	temp._fixed_point = this->_fixed_point + copy._fixed_point;
	return (temp);
}

Fixed	Fixed::operator-(const Fixed& copy) const
{
	Fixed	temp;
	
	temp._fixed_point = this->_fixed_point - copy._fixed_point;
	return (temp);
}

Fixed	Fixed::operator*(const Fixed& copy) const
{
	Fixed	temp;
	
	temp._fixed_point = this->_fixed_point * copy._fixed_point;
	return (temp);
}

Fixed	Fixed::operator/(const Fixed& copy) const
{
	Fixed	temp;
	
	temp._fixed_point = this->_fixed_point / copy._fixed_point;
	return (temp);
}

bool Fixed::operator>(const Fixed& copy) const
{
	if (this->_fixed_point > copy._fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed& copy) const
{
	if (this->_fixed_point < copy._fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed& copy) const
{
	if (this->_fixed_point >= copy._fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed& copy) const
{
	if (this->_fixed_point <= copy._fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed& copy) const
{
	if (this->_fixed_point == copy._fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed& copy) const
{
	if (this->_fixed_point != copy._fixed_point)
		return (1);
	else
		return (0);
}

Fixed& Fixed::operator++()
{
	this->_fixed_point++;
	return (*this);
}

Fixed& Fixed::operator--()
{
	this->_fixed_point--;
	return (*this);
}

Fixed& Fixed::operator++(int)
{
	Fixed	temp = *this;

	this->_fixed_point++;
	return (temp);
}

Fixed& Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_fixed_point--;
	return (temp);
}

		

int&	Fixed::min(Fixed& a, Fixed& b)
{
	
}

int&	Fixed::min(const Fixed& a, const Fixed& b)
{
	
}

int&	Fixed::max(Fixed& a, Fixed& b)
{
	
}

int&	Fixed::max(const Fixed& a, const Fixed& b)
{
	
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

	new_nbr = this->_fixed_point >> _binary_point;
	return (new_nbr);
}

int		Fixed::toInt( void ) const
{
	int	new_nbr;

	new_nbr	= this->_fixed_point >> _binary_point;

	return (new_nbr);
}
