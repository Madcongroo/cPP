/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:55:10 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:36:05 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << this->_name << " is being created!" << std::endl;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << this->_name <<  " is being killed" << std::endl;
    return ;
}

