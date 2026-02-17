/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:57 by bproton           #+#    #+#             */
/*   Updated: 2025/04/02 13:52:08 by proton           ###   ########.fr       */
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
		Cat& operator=( const Cat& copy );
		~Cat();

		void		makeSound() const;
		void		getIdeas( int i ) const;
		void		setIdea( std::string &idea, int i );
		std::string	getType() const;

	private:

		Brain*	_thoughts;
};

#endif