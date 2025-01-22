/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:14:33 by bproton           #+#    #+#             */
/*   Updated: 2025/01/21 21:10:47 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

/* numeric_limits<streamsize>::max , \n : looks to remove the \n in the stream buffer
	limits<streamsize> is to say in the max buffer length */

int main(void)
{
	std::string entry;
	MyPhoneBook phonebook;

	while (1)
	{
		std::cout << "enter ADD to add a contact, SEARCH to search for a contact, EXIT to quit the progamm" << std::endl << std::flush;
		std::getline(std::cin, entry);
		if (entry == "ADD")
	        phonebook.create_phonebook();
		else if (entry == "SEARCH")
			phonebook.search_contact();
		else if (entry == "EXIT")
			return (0);
		else if (entry.empty())
			return (1);
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}