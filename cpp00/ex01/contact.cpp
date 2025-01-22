/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/22 10:40:11 by bproton          ###   ########.fr       */
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

void	Contacts::display_one_contact(void)
{
	std::cout << "first name :" + this->first_name << std::endl;
	std::cout << "last name :" + this->last_name << std::endl;
	std::cout << "nickname :" + this->nickname << std::endl;
	std::cout << "phone number :" + this->phone_number << std::endl;
	std::cout << "darkest secret :" + this->darkest_secret << std::endl;  
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

	turns = 0;
	std::cout << "Enter the first name" << std::endl << std::flush;
	std::cin >> entry;
	this->first_name = entry;
	std::cout << "Enter the last name" << std::endl << std::flush;
	std::cin >> entry;
	this->last_name = entry;
	std::cout << "Enter the nickname" << std::endl << std::flush;
	std::cin >> entry;
	this->nickname = entry;
	while (!turns)
	{
		std::cout << "Enter the phone number" << std::endl << std::flush;
		std::cin >> entry;
		for (std::string::size_type i = 0; i < entry.size(); i++)
		{
			turns = std::isdigit(entry[i]);
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
	std::cout << "|" << std::setw(10) << index << "|"
	<< std::setw(10) << this->first_name << "|"
	<< std::setw(10) << this->last_name << "|"
	<< std::setw(10) << this->nickname << "|"
	<< std::endl << std::flush;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}
