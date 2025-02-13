/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 14:23:35 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
    std::cout << "ScavTrap " << this->_name << " default constructor being called" << std::endl;

    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap::ClapTrap( name )
{
    std::cout << "ScavTrap " << this->_name << " assignation constructor being called" << std::endl;

    return ;
}

ScavTrap::ScavTrap( const ScavTrap& copy ) : ClapTrap::ClapTrap( copy )
{
    std::cout << "ScavTrap " << this->_name << " copy constructor being called" << std::endl;

    return ;
}

ScavTrap ScavTrap::operator=( const ScavTrap& copy )
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