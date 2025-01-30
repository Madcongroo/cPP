/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:29 by bproton           #+#    #+#             */
/*   Updated: 2025/01/30 10:55:40 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& Weapon )
{
	this->_name = name;
	this->_Weapon = Weapon;
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << " is being killed" << std::endl;
	return ;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with " << this->_Weapon.getType() << std::endl;
	return ;
}
