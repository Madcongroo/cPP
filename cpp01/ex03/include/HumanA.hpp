/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:32 by bproton           #+#    #+#             */
/*   Updated: 2025/01/30 10:55:22 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& _Weapon;
		std::string _name;
	
	public:
		HumanA( std::string name, Weapon& Weapon );
		~HumanA( void );
		void	attack( void ) const;
};

#endif