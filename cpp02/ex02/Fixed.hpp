/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:05 by proton            #+#    #+#             */
/*   Updated: 2025/02/11 11:38:49 by proton           ###   ########.fr       */
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


		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		friend	std::ostream& operator<<(std::ostream& os, Fixed& name);
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
		Fixed operator++() const;
		Fixed operator--() const;

		static float&	min(float& nbr1, float& nbr2);
		static float&	min(const float& nbr1, const float& nbr2);
		static float&	max(float& nbr1, float& nbr2);
		static float&	max(const float& nbr1, const float& nbr2);
		

	private:
		int					_fixed_point;
		static const int	_binary_point;
};



#endif