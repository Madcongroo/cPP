/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:12 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 12:32:30 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
    public:

        ScavTrap();
        ScavTrap( std::string name );
        ScavTrap( const ScavTrap& copy );
        ScavTrap operator=( const ScavTrap& copy );
        ~ScavTrap();
        
        void    guardGate();
};

#endif