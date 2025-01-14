/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:14:33 by bproton           #+#    #+#             */
/*   Updated: 2025/01/14 11:21:15 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

int main(void)
{
	std::string entry;
	MyPhonebook phonebook;

	while (1)
	{
		std::cout << "enter ADD to add a contact, SEARCH to search for a contact, EXIT to quit the progamm" << std::endl;

		std::cin >> entry;
		if (entry == "ADD")
            add_to_contacts(phonebook);
		else if (entry == "SEARCH")
			search_contact();
		else if (entry == "EXIT")
			return (0);
	}
}