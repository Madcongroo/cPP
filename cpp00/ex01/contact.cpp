/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/21 14:04:21 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int	Contacts::is_empty(Contacts& contact)
{
	if (!contact.phone_number[0])
		return (0);
	else
		return (-1);
}

void	Contacts::set_contact(Contacts& contact)
{
	std::string entry;
	int			turns;

	turns = 1;
	std::cout << "Enter the first name" << std::endl << std::flush;
	std::cin >> entry;
	contact.first_name = entry;
	std::cout << "Enter the last name" << std::endl << std::flush;
	std::cin >> entry;
	contact.last_name = entry;
	std::cout << "Enter the nickname" << std::endl << std::flush;
	std::cin >> entry;
	contact.nickname = entry;
	while (turns)
	{
		std::cout << "Enter the phone number" << std::endl << std::flush;
		std::cin >> entry;
		for (int i = 0; i < entry.length(); i++)
		{
			turns = std::isalnum(entry[i]);
			if (turns == 0)
				break ;
		}
	}
	contact.phone_number = entry;
	std::cout << "Enter the darkest secret" << std::endl << std::flush;
	std::cin >> entry;
	contact.darkest_secret = entry;
}

void	Contacts::display_contact(Contacts contact[8])
{
	int	i = 0;

	while (i < 8)
	{
		std::cout << ""
	}

}
