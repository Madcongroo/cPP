/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:31 by bproton           #+#    #+#             */
/*   Updated: 2025/02/13 15:11:39 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
    std::cout << "FragTrap " << this->_name << " default constructor called" << std::endl;

    return ;
}

FragTrap::FragTrap( std::string name ) : ClapTrap::ClapTrap( name )
{
    std::cout << "FragTrap " << this->_name << " assignator being called" << std::endl;

    return ;
}

FragTrap::FragTrap( const FragTrap& copy ) : ClapTrap::ClapTrap( copy )
{
    std::cout << "FragTrap " << this->_name << " copy constructor being called" << std::endl;

    return ;
}

FragTrap FragTrap::operator=( const FragTrap& copy )
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
    std::cout << "FragTrap request for a positive highfive" << std::endl;

    return ;
}
