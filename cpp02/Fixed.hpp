/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:05 by proton            #+#    #+#             */
/*   Updated: 2025/02/05 16:02:55 by bproton          ###   ########.fr       */
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
		Fixed(  );
		~Fixed();

		int		getRawBits( void ) const; //renvoie la valeur du nombre a virgule fixe sans la convertir
		void	setRawBits( int const raw ); //initialise la valeur du nombre avec celle passee en parametre

	private:
		int					_fixed_point;
		static const int	_bits_nbr;
};

#endif