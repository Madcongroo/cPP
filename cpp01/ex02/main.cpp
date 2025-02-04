/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 11:15:31 by proton            #+#    #+#             */
/*   Updated: 2025/01/29 16:54:15 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string	brain("HI THIS IS BRAIN");
	std::string* brain_ptr = &brain;
	std::string& brain_ref = brain;

	std::cout << brain << std::endl;
	std::cout << brain_ptr << std::endl;
	std::cout << brain_ref << std::endl;
	
	return (0);
}