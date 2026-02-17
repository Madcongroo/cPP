/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:05 by proton            #+#    #+#             */
/*   Updated: 2025/02/20 15:54:37 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& copy );
		Fixed& operator=(const Fixed& copy);
		Fixed( int nbr );
		Fixed( const float nbr );
		~Fixed();


		float				toFloat( void ) const;
		int					toInt( void ) const;
		int					getRawBits( void ) const;
		void				setRawBits( int const raw );
		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

		Fixed operator+(const Fixed& copy) const;
		Fixed operator-(const Fixed& copy) const;
		Fixed operator*(const Fixed& copy) const;
		Fixed operator/(const Fixed& copy) const;
		bool operator>(const Fixed& copy) const;
		bool operator<(const Fixed& copy) const;
		bool operator>=(const Fixed& copy) const;
		bool operator<=(const Fixed& copy) const;
		bool operator==(const Fixed& copy) const;
		bool operator!=(const Fixed& copy) const;
		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

	private:
		int					_fixed_point;
		static const int	_binary_point;
};
std::ostream& operator<<(std::ostream& os, const Fixed& name);

#endif