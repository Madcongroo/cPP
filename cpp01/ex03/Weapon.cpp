/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:43 by bproton           #+#    #+#             */
/*   Updated: 2025/01/30 10:35:44 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "default weapon construction" << std::endl;
	return ;
}

Weapon::Weapon( std::string type )
{
	this->_type = type;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << this->_type << " class is being destroyed" << std::endl;
	return ;
}

const std::string& Weapon::getType( void ) const
{
	return (this->_type);
}

void	Weapon::setType( std::string new_type)
{
	std::cout << this->_type << " : just before cleaning" << std::endl;
	this->_type.clear();
	this->_type = new_type;
	std::cout << this->_type << std::endl;
	return ;
}
