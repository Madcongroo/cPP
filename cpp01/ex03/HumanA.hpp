/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:32 by bproton           #+#    #+#             */
/*   Updated: 2025/01/29 15:58:23 by bproton          ###   ########.fr       */
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
		HumanA( std::string name, Weapon& WeaponType );
		~HumanA( void );
		void	attack( void ) const;
};

#endif