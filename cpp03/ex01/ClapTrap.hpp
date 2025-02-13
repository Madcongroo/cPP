/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:03 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 12:35:41 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
	protected:

		std::string	_name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;

	public:

		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap& operator=( const ClapTrap& copy );
		~ClapTrap();

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );
		
		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;

};

#endif
