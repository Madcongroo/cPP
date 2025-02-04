/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:51:02 by proton            #+#    #+#             */
/*   Updated: 2025/01/29 10:40:37 by proton           ###   ########.fr       */
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