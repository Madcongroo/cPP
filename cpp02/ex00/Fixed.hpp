/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:05 by proton            #+#    #+#             */
/*   Updated: 2025/02/12 14:17:44 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& copy );
		Fixed& operator=(const Fixed& copy);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int					_fixed_point;
		static const int	_bits_nbr;
};

#endif