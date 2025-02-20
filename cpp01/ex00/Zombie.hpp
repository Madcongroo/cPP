/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:52 by bproton           #+#    #+#             */
/*   Updated: 2025/02/20 10:52:39 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

class Zombie
{
	private:
	
		std::string _name;
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		void    announce( void );

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif