/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/23 10:40:22 by proton           ###   ########.fr       */
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
	std::cout << "first name : " + this->first_name << std::endl;
	std::cout << "last name : " + this->last_name << std::endl;
	std::cout << "nickname : " + this->nickname << std::endl;
	std::cout << "phone number : " + this->phone_number << std::endl;
	std::cout << "darkest secret : " + this->darkest_secret << std::endl;  
}

int	Contacts::is_empty()
{
	if (!this->phone_number[0])
		return (0);
	else
		return (-1);
}

double	Contacts::which_oldest()
{
	return (this->time);
}

void	Contacts::set_oldest_contact(double base_time)
{
	std::string entry;
	int			turns;

	turns = 0;
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_number.clear();
	this->darkest_secret.clear();
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

void	new_strings(std::string& new_str, std::string& old_str)
{
	if (old_str.size() < 11)
	{
		new_str.resize(old_str.size());
		for (std::string::size_type i = 0; i < old_str.size(); i++)
			new_str[i] = old_str[i];
	}
	else
	{
		new_str.resize(10);
		for (std::string::size_type i = 0; i < 10; i++)
		{
			new_str[i] = old_str[i];
		}
		new_str[9] = '.';
	}
}

void	Contacts::display_contact(int index)
{
	std::string new_first_name;
	std::string new_last_name;
	std::string new_nickname;

	new_strings(new_first_name, this->first_name);
	new_strings(new_last_name, this->last_name);
	new_strings(new_nickname, this->nickname);
	std::cout << "|" << std::setw(10) << index << "|"
	<< std::setw(10) << new_first_name << "|"
	<< std::setw(10) << new_last_name << "|"
	<< std::setw(10) << new_nickname << "|"
	<< std::endl << std::flush;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}
