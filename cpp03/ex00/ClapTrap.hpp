/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:03 by proton            #+#    #+#             */
/*   Updated: 2025/02/12 11:24:59 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap
{
	private:

		std::string	_name;
		int			_Hit_points;
		int			_Energy_points;
		int			_Attack_damage;

	public:

		ClapTrap( std::string name );
		ClapTrap( const ClapTrap& copy );
		ClapTrap& operator=( const ClapTrap& copy );
		~ClapTrap();

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

};

#endif
