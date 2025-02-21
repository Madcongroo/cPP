/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:51:02 by proton            #+#    #+#             */
/*   Updated: 2025/02/21 13:10:02 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>

class Zombie
{
	private:

		std::string _name;

	public:
        Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void    announce( void );

};

Zombie*	zombieHorde( int N, std::string name );

#endif