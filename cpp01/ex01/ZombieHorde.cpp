/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:49:56 by proton            #+#    #+#             */
/*   Updated: 2025/01/29 10:50:45 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie* ZHorde = new Zombie[N];
	if (!ZHorde)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		char c = i + '0';
		ZHorde[i] = Zombie(name + c);
	}
	return (ZHorde);
}