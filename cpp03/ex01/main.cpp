/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/24 13:47:38 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap clap1("base1");
	ClapTrap clap2("base2");
	ScavTrap scav1("derived1");
	ScavTrap scav2(scav1);
	ScavTrap scav3("scavence");
	
	clap1.attack(clap2.getName());
    if (clap1.getEnergyPoints() > 0)
    {
        clap2.takeDamage(clap1.getAttackDamage());
    }

	scav1.attack(scav2.getName());
    if (scav1.getEnergyPoints() > 0)
    {
        scav2.takeDamage(scav1.getAttackDamage());
    }
	scav3.attack(clap1.getName());
    if (clap1.getEnergyPoints() > 0)
    {
        clap1.takeDamage(scav3.getAttackDamage());
    }
	
	scav2.guardGate();
	scav1.guardGate();
	scav3.guardGate();
	scav3.beRepaired(10);
	
	clap2.beRepaired(1);
	clap1.beRepaired(10);
    
	return (0);
}
