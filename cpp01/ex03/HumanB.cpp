/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:34 by bproton           #+#    #+#             */
/*   Updated: 2025/01/29 16:06:31 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
    this->_name = name;
    return ;
}

void    HumanB::attack( void ) const
{
    if (!this->_Weapon->getType().empty())
        std::cout << this->_name << "attacks with" << this->_Weapon->getType() << std::endl;
    else
        std::cout << this->_name << "attacks with fists due to not having a weapon" << std::endl;
    return ;
}

