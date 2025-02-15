/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:59:08 by proton            #+#    #+#             */
/*   Updated: 2025/02/12 17:00:11 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap clap1("bernard");
	ClapTrap clap2("hyvette");
	
	clap1.attack(clap2.getName());

    if (clap1.getEnergyPoints() > 0)
    {
        clap2.takeDamage(clap1.getAttackDamage());
    }

	clap2.beRepaired(1);
    
	return (0);
}
