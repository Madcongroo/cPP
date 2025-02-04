/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:51:36 by proton            #+#    #+#             */
/*   Updated: 2025/02/04 22:36:18 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl		harley;
	std::string	entry;


	std::cout << "please type DEBUG, INFO, WARNING or ERROR" << std::endl;

	std::cin >> entry;
	
	harley.complain(entry);
	return (0);
}
