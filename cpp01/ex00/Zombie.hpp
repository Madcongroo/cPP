/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:52 by bproton           #+#    #+#             */
/*   Updated: 2025/01/24 16:00:45 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
	private:
	
		std::string name;
	
	public:
		Zombie( void );
		~Zombie( void );
		void    announce( void );

};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif