/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:49 by bproton           #+#    #+#             */
/*   Updated: 2025/02/20 10:54:15 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie( std::string name )
{
    this->_name = name;
    std::cout << name << " is being created!" << std::endl;
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << this->_name << " is dead!" << std::endl;
    return ;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}
