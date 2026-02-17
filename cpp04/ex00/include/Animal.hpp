/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:32 by bproton           #+#    #+#             */
/*   Updated: 2025/02/24 16:44:28 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
	public:
	
		Animal();
		Animal( std::string type );
		Animal( const Animal& copy );
		Animal& operator=( const Animal& copy );
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
	
		std::string	_type;
};


#endif