/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:37 by bproton           #+#    #+#             */
/*   Updated: 2025/02/20 14:32:35 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_Weapon;
	
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	setWeapon( Weapon& WeaponType );
		Weapon*	getType();
		void	attack() const;
};

#endif