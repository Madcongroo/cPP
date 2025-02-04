/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:44 by bproton           #+#    #+#             */
/*   Updated: 2025/01/28 12:37:00 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
    Zombie  *new_zombie;

    new_zombie = new Zombie(name);
    if (!new_zombie)
        return (NULL);
    return (new_zombie);
}
