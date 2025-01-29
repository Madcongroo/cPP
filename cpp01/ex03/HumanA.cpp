/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:29 by bproton           #+#    #+#             */
/*   Updated: 2025/01/29 15:58:32 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& WeaponType )
{
	this->_name = name;
	this->_Weapon = WeaponType;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << "is being killed" << std::endl;
	return ;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << "attacks with" << this->_Weapon.getType() << std::endl;
	return ;
}
