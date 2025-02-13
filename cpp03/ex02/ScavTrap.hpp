/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:04:12 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 14:09:30 by bproton          ###   ########.fr       */
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