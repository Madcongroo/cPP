/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/24 13:36:36 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
    std::cout << "ScavTrap " << this->_name << " default constructor being called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap::ClapTrap( name )
{
    std::cout << "ScavTrap " << this->_name << " assignation constructor being called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;
	
    return ;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap::ClapTrap( copy )
{
    std::cout << "ScavTrap " << this->_name << " copy constructor being called" << std::endl;

    return ;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& copy )
{
    std::cout << "ScavTrap " << this->_name << " copy operator constructor being called" << std::endl;

    if (this != &copy)
    {
        this->_name = copy._name;
        this->_Energy_points = copy._Energy_points;
        this->_Attack_damage = copy._Attack_damage;
        this->_Hit_points = copy._Hit_points;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " is being destroyed" << std::endl;

    return ;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in gate keeper mode" << std::endl;

    return ;
}

void	ScavTrap::attack( const std::string& target )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cant do nothing" << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing "
		<< this->_Attack_damage  << " points of damage!" << std::endl;
	std::cout << "ScavTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "ScavTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;
	
	return ;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cant be hurt anymore" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " of damage" << std::endl;

	this->_Hit_points -= amount;

	std::cout << "ScavTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	return ;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cant heal him/herself" << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->_name << " heals him/herself for " << amount << " of hp" << std::endl;
	
	this->_Hit_points += amount;

	std::cout << "ScavTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	std::cout << "ScavTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "ScavTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;

	return ;
}