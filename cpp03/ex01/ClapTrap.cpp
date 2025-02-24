/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:00 by proton            #+#    #+#             */
/*   Updated: 2025/02/24 11:24:53 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _Hit_points(100), _Energy_points(50), _Attack_damage(20)
{
	std::cout << "ClapTrap " << this->_name << " Default constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _Hit_points(100), _Energy_points(50), _Attack_damage(20)
{
	std::cout << "ClapTrap " << this->_name << " name assignation constructor being called" << std::endl;

	return ;
}

ClapTrap::ClapTrap( const ClapTrap& copy)
{
	std::cout << "Copy class called" << std::endl;

	*this = copy;

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
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;

	return ;
}


std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints( void ) const
{
	return (this->_Hit_points);
}

int			ClapTrap::getEnergyPoints( void ) const 
{
	return (this->_Energy_points);
}

int			ClapTrap::getAttackDamage( void ) const
{
	return (this->_Attack_damage);	
}


void	ClapTrap::attack( const std::string& target )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cant do nothing" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
		<< this->_Attack_damage  << " points of damage!" << std::endl;
	std::cout << "ClapTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "ClapTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;
	
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cant be hurt anymore" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " of damage" << std::endl;

	this->_Hit_points -= amount;

	std::cout << "ClapTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cant heal him/herself" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " heals him/herself for " << amount << " of hp" << std::endl;
	
	this->_Hit_points += amount;

	std::cout << "ClapTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	std::cout << "ClapTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "ClapTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;

	return ;
}

