/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:43 by bproton           #+#    #+#             */
/*   Updated: 2025/02/20 14:09:09 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "default weapon construction" << std::endl;
	return ;
}

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "assignator constructor in weapon class" << std::endl;
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
	this->_type.clear();
	this->_type = new_type;
	return ;
}
