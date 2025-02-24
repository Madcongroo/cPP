/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/24 11:28:45 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap clap1("base1");
	ClapTrap clap2("base2");
	ScavTrap scav1("derived1");
	ScavTrap scav2(scav1);
	
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
	
	scav2.guardGate();
	scav1.guardGate();
	clap2.beRepaired(1);
    
	return (0);
}
