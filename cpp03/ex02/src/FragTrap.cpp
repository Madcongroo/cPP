/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:31 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:38:00 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
    std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	
    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap::ClapTrap( name )
{
    std::cout << "FragTrap " << this->_name << " assignator being called" << std::endl;
	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	
    return ;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap::ClapTrap( copy )
{
    std::cout << "FragTrap " << this->_name << " copy constructor being called" << std::endl;

    return ;
}

FragTrap& FragTrap::operator=( const FragTrap& copy )
{
    std::cout << "FragTrap " << this->_name << " copy operator being called" << std::endl;
    
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_Energy_points = copy._Energy_points;
        this->_Attack_damage = copy._Attack_damage;
        this->_Hit_points = copy._Hit_points;
    }
    
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructor being called" << std::endl;

    return ;
}
		
void	FragTrap::highFivesGuys( void )
{
    std::cout << "FragTrap " << this->_name << " request for a positive highfive" << std::endl;

    return ;
}

void	FragTrap::attack( const std::string& target )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "FragTrap " << this->_name << " cant do nothing" << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing "
		<< this->_Attack_damage  << " points of damage!" << std::endl;
	std::cout << "FragTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "FragTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;
	
	return ;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	if (this->_Hit_points <= 0)
	{
		std::cout << "FragTrap " << this->_name << " cant be hurt anymore" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " takes " << amount << " of damage" << std::endl;

	this->_Hit_points -= amount;

	std::cout << "FragTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	return ;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	if (this->_Energy_points <= 0 || this->_Hit_points <= 0)
	{
		std::cout << "FragTrap " << this->_name << " cant heal him/herself" << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->_name << " heals him/herself for " << amount << " of hp" << std::endl;
	
	this->_Hit_points += amount;

	std::cout << "FragTrap " << this->_name << " has now " << this->_Hit_points << " hp" << std::endl;

	std::cout << "FragTrap " << this->_name << " looses " << 1 << " energy points" << std::endl;
	this->_Energy_points -= 1;
	std::cout << "FragTrap " << this->_name << " has now " << this->_Energy_points << " energy points" << std::endl;

	return ;
}
