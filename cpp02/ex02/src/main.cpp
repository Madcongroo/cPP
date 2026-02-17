/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:33:08 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:36:43 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int	main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << " <<<<<<<<<<<<<<<< PERSONNAL TESTS >>>>>>>>>>>>>>>" << std::endl;

	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equals to b" << std::endl;
	if (a >= b)
		std::cout << "a is bigger or equals to b" << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	if (a != b)
		std::cout << "a is different than b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;

	return 0;
}
