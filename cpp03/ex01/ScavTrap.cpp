/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 12:41:57 by proton           ###   ########.fr       */
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

ScavTrap ScavTrap::operator=( const ScavTrap& copy ) : ClapTrap ClapTrap::operator=( copy )
{
    std::cout << "ScavTrap " << this->_name << " copy operator constructor being called" << std::endl;

    return ;
}

ScavTrap::~ScavTrap() : ClapTrap::~ClapTrap()
{
    
}

void    ScavTrap::guardGate()
{
    std::cout << "gate is guarded" << std::endl;
    return ;
}