/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:14:33 by bproton           #+#    #+#             */
/*   Updated: 2025/02/12 14:26:37 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "My_PhoneBook.hpp"

/* numeric_limits<streamsize>::max , \n : looks to remove the \n in the stream buffer
	limits<streamsize> is to say in the max buffer length */

int main(void)
{
	std::string entry;
	MyPhoneBook phonebook;

	while (1)
	{
		std::cout << "enter ADD to add a contact, SEARCH to search for a contact, EXIT to quit the progamm" << std::endl << std::flush;
		if (!std::getline(std::cin, entry))
		{
			std::cerr << "An error has occured" << std::endl;
			return (1);
		}
		if (entry == "ADD")
		{
			phonebook.create_phonebook();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (entry == "SEARCH")
		{
			phonebook.search_contact();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (entry == "EXIT")
			return (0);
	}
}
