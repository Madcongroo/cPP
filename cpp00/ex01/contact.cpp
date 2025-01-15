/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/15 13:25:08 by proton           ###   ########.fr       */
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

	std::cout << "Enter the first name" << std::endl << std::flush;
	std::cin >> entry;
	contact.first_name = entry;
	std::cout << "Enter the last name" << std::endl << std::flush;
	std::cin >> entry;
	contact.last_name = entry;
	std::cout << "Enter the nickname" << std::endl << std::flush;
	std::cin >> entry;
	contact.nickname = entry;
	std::cout << "Enter the phone number" << std::endl << std::flush;
	std::cin >> entry;
	contact.phone_number = entry;
	std::cout << "Enter the darkest secret" << std::endl << std::flush;
	std::cin >> entry;
	contact.darkest_secret = entry;
	entry.clear();
}

void	Contacts::display_contact(Contacts& contact, int index)
{
	std::cout << "|     index|first name| last name|  nickname|" << std::endl << std::flush;
	std::cout << "|"

}
