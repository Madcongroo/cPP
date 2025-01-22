/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/21 21:20:12 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contacts::Contacts()
{
	return ;
}

Contacts::~Contacts()
{
	return ;
}

int	Contacts::is_empty(Contacts& contact)
{
	if (!contact.phone_number[0])
		return (0);
	else
		return (-1);
}

void	Contacts::set_contact(double base_time)
{
	std::string entry;
	int			turns;

	turns = 1;
	std::cout << "Enter the first name" << std::endl << std::flush;
	std::cin >> entry;
	this->first_name = entry;
	std::cout << "Enter the last name" << std::endl << std::flush;
	std::cin >> entry;
	this->last_name = entry;
	std::cout << "Enter the nickname" << std::endl << std::flush;
	std::cin >> entry;
	this->nickname = entry;
	while (turns != 0)
	{
		std::cout << "Enter the phone number" << std::endl << std::flush;
		std::cin >> entry;
		for (std::string::size_type i = 0; i < entry.size(); i++)
		{
			turns = std::isalnum(entry[i]);
			if (turns == 0)
				break ;
		}
	}
	this->phone_number = entry;
	std::cout << "Enter the darkest secret" << std::endl << std::flush;
	std::cin >> entry;
	this->darkest_secret = entry;
	this->time = clock() - base_time;
}

void	Contacts::display_contact(int index)
{
	if (this->first_name.length() > 10)
	std::cout << "|" << std::setw(10) << index << "|"
	<< std::setw(10) << this->first_name << "|"
	<< std::setw(10) << this->last_name << "|"
	<< std::setw(10) << this->nickname << "|"
	<< std::endl << std::flush;
	std::cout << "|__________|__________|__________|___________|" << std::endl;
}
