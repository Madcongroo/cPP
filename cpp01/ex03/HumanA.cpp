/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:29 by bproton           #+#    #+#             */
/*   Updated: 2025/02/20 11:29:01 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& Weapon ) : _Weapon(Weapon), _name(name)
{
	std::cout << "Default constructor of HUMAN A" << std::endl;
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
