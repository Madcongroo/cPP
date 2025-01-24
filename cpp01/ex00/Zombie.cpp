/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:49 by bproton           #+#    #+#             */
/*   Updated: 2025/01/24 16:01:30 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{

}

Zombie::~Zombie( void )
{
    std::cout << this->name << "is dead!" << std::endl;
    return ;
}

void    Zombie::announce()
{
    
}
