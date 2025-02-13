/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:25:28 by bproton           #+#    #+#             */
/*   Updated: 2025/02/13 15:10:28 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class   FragTrap : public ClapTrap
{
	public:
		
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap& copy );
		FragTrap operator=( const FragTrap& copy );
		~FragTrap();
		
		void	highFivesGuys( void );
};

#endif