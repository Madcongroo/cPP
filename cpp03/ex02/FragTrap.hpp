/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:28 by bproton           #+#    #+#             */
/*   Updated: 2025/02/24 11:36:20 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class   FragTrap : public ClapTrap
{
	public:
		
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& copy );
		FragTrap& operator=( const FragTrap& copy );
		~FragTrap();

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
		void	highFivesGuys( void );
};

#endif