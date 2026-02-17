/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:44 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:36:05 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie( std::string name )
{
    Zombie  *new_zombie;

    new_zombie = new Zombie(name);
    if (!new_zombie)
        return (NULL);
    return (new_zombie);
}
