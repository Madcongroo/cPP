/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:24:03 by bproton           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:19 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:

		Dog();
		Dog( std::string type );
		Dog( const Dog& copy );
		Dog operator=( const Dog& copy );
		~Dog();

		void	makeSound() const;
		std::string	getType() const;

	private:
		Brain	*table;
};

#endif