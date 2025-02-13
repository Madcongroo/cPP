/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/13 15:15:39 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main( void )
{
	// ClapTrap clap1("base1");
	// ClapTrap clap2("base2");
	// ScavTrap scav1("derived1");
	// ScavTrap scav2(scav1);
	// clap1.attack(clap2.getName());
    // if (clap1.getEnergyPoints() > 0)
    // {
    //     clap2.takeDamage(clap1.getAttackDamage());
    // }
	// scav2.guardGate();
	// clap2.beRepaired(1);

	FragTrap frag1("john");
	FragTrap frag2("jane");

	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getAttackDamage());
	frag1.highFivesGuys();
	
	return (0);
}
