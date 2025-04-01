/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:57 by bproton           #+#    #+#             */
/*   Updated: 2025/03/28 17:04:07 by proton           ###   ########.fr       */
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
		void		getIdeas() const;
		std::string	getType() const;

	private:

		Brain*	_thoughts;
};

#endif