/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:46:35 by proton            #+#    #+#             */
/*   Updated: 2025/02/11 14:00:22 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

MyPhoneBook::MyPhoneBook()
{
	this->time = clock();
}

MyPhoneBook::~MyPhoneBook()
{
	return;
}

void	MyPhoneBook::search_contact()
{
	std::string	entry;
	int			num = 0;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::flush;

	for (int i = 0; i < 8; i++)
		this->contact[i].display_contact(i);
	while (!num)
	{
		std::cout << "Choose an index!" << std::endl;
		std::cin >> entry;
		if (entry.size() > 1)
		{
			std::cout << "Index too big" << std::endl;
			continue ;
		}
		num = std::isdigit(entry[0]);
		if (num == 0)
		{
			std::cout << "This aint no index!" << std::endl;
			continue ;
		}
		if (std::cin.eof())
		{
			std::cerr << "an error has occured" << std::endl;
			exit (1);
		}
	}
	num = (entry[0] - 48); // to tranform the string into a number
	this->contact[num].display_one_contact();
}

void	MyPhoneBook::create_phonebook()
{
	int			count = 0;
	int			ret = 0;
	int			index = 0;
	double		old = 0;
	double		new_old = 0;
	std::string	entries;

	while (count < 8)
	{
		ret = this->contact[count].is_empty();
		if (ret == 0)
			break ;
		count++;
	}
	if (count == 8) //means the new index should be the oldest created
	{
		old = this->contact[0].which_oldest();
		for (int i = 1; i < 8; i++)
		{
			new_old = this->contact[i].which_oldest();
			if (new_old < old)
			{
				old = new_old;
				index = i;
			}
		}
		this->contact[index].set_oldest_contact(this->time);
		return ;
	}
	this->contact[count].set_contact(this->time);
}
