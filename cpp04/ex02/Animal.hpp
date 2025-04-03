/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:32 by bproton           #+#    #+#             */
/*   Updated: 2025/04/02 11:34:20 by proton           ###   ########.fr       */
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

		virtual void		makeSound() const = 0;
		virtual void		getIdeas(int i ) const = 0;
		virtual void		setIdea( std::string &idea, int i ) = 0;
		virtual std::string	getType() const = 0;

	protected:
	
		std::string	_type;
};


#endif