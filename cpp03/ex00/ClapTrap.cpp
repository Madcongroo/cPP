/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:00 by proton            #+#    #+#             */
/*   Updated: 2025/02/12 11:36:58 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Base constructor has being called" << std::endl;

	return ;
}

ClapTrap::ClapTrap( const ClapTrap& copy)
{
	std::cout << "Copy class called" << std::endl;

	this->_name = copy._name;
	this->_Attack_damage = copy._Attack_damage;
	this->_Energy_points = copy._Energy_points;
	this->_Hit_points = copy._Hit_points;

	return ;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& copy )
{
	std::cout << "Copy operator called" << std::endl;

	if (this != &copy)
	{
		this->_name = copy._name;
		this->_Attack_damage = copy._Attack_damage;
		this->_Energy_points = copy._Energy_points;
		this->_Hit_points = copy._Hit_points;
	}

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;

	return ;
}

void	attack( const std::string& target )
{

}

void	takeDamage( unsigned int amount )
{

}

void	beRepaired( unsigned int amount )
{

}

