/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:34 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:36:05 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	std::cout << "Default constructor in class HUMAN B" << std::endl;
	
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name << " is being killed" << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon& WeaponType )
{
	
	this->_Weapon = &WeaponType;
	return ;
}

Weapon* HumanB::getType()
{
	return (this->_Weapon);
}

void    HumanB::attack( void ) const
{
	if (!this->_Weapon->getType().empty())
		std::cout << this->_name << " attacks with " << this->_Weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with fists due to not having a weapon" << std::endl;
	return ;
}

