/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:03 by bproton           #+#    #+#             */
/*   Updated: 2025/02/14 11:59:40 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:

		Dog();
		Dog( std::string type );
		Dog( const Dog& copy );
		Dog operator=( const Dog& copy );
		~Dog();
};

#endif