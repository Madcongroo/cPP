/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:00 by proton            #+#    #+#             */
/*   Updated: 2025/02/12 15:46:32 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

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
	if (this->_Energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cant heal himself" << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->_name << " heals himself for " << amount << " of hp" << std::endl;
	
	this->_Hit_points += amount;

	std::cout << "ClapTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	std::cout << "ClapTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;

	this->_Energy_points -= 1;

	return ;
}

