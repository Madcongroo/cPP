/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:57 by bproton           #+#    #+#             */
/*   Updated: 2025/02/18 13:47:47 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public:

		Cat();
		Cat( std::string type );
		Cat( const Cat& copy );
		Cat operator=( const Cat& copy );
		~Cat();

		void		makeSound() const;
		std::string	getType() const;

	private:

		Brain*	table;
};

#endif