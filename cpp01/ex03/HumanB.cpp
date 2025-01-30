/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:34 by bproton           #+#    #+#             */
/*   Updated: 2025/01/30 10:47:15 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name << " is being killed" << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon WeaponType )
{
	Weapon* NewWeapon = new Weapon(WeaponType.getType());
	if (!NewWeapon)
		return ;
	this->_Weapon = NewWeapon;
	return ;
}

void    HumanB::attack( void ) const
{
	if (!this->_Weapon->getType().empty())
		std::cout << this->_name << "attacks with" << this->_Weapon->getType() << std::endl;
	else
		std::cout << this->_name << "attacks with fists due to not having a weapon" << std::endl;
	return ;
}

