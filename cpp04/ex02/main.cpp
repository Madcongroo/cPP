/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:20:25 by bproton           #+#    #+#             */
/*   Updated: 2025/04/02 13:52:58 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void )
{
    const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;

	Animal *table[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			table[i] = new Dog();
		else
			table[i] = new Cat();
	}
	std::cout << "==== Création d'un premier chien ====" << std::endl;
    Dog dog1;
    std::string idea1 = "Je veux jouer !";
    std::string idea2 = "Je veux manger !";

    dog1.setIdea(idea1, 0);
    dog1.setIdea(idea2, 1);
    dog1.getIdeas(0);
    dog1.getIdeas(1);

    std::cout << "\n==== Test du constructeur de copie ====" << std::endl;
    Dog dog2 = dog1;  // Test du constructeur de copie
    dog2.getIdeas(0);
    dog2.getIdeas(1);

    std::cout << "\n==== Modification du second chien ====" << std::endl;
    std::string newIdea = "Je veux dormir...";
    dog2.setIdea(newIdea, 0);
    dog2.getIdeas(0);  // Doit afficher "Je veux dormir..."
    dog1.getIdeas(0);  // Doit toujours afficher "Je veux jouer !"

    std::cout << "\n==== Test de l'opérateur d'affectation ====" << std::endl;
    Dog dog3;
    dog3 = dog1;  // Test de l'opérateur d'affectation
    dog3.getIdeas(0);
    dog3.getIdeas(1);
	
	for (int i = 0; i < 4; i++)
		delete table[i];
	
	delete j;
	delete i;

	return 0;
}