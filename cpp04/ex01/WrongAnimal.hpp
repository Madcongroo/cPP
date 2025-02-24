/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:26:10 by proton            #+#    #+#             */
/*   Updated: 2025/02/23 11:06:06 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal
{
	public:
	
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& copy );
		WrongAnimal& operator=( const WrongAnimal& copy );
		virtual ~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;

	protected:
	
		std::string	_type;
};


#endif