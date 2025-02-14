/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:26:16 by proton            #+#    #+#             */
/*   Updated: 2025/02/14 14:58:55 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat( std::string type );
		WrongCat( const WrongCat& copy );
		WrongCat operator=( const WrongCat& copy );
		~WrongCat();
};

#endif