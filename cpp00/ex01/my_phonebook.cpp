/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:46:35 by proton            #+#    #+#             */
/*   Updated: 2025/01/21 21:17:37 by proton           ###   ########.fr       */
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
	int	choice;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl << std::flush;

	for (int i = 0; i < 8; i++)
		this->contact[i].display_contact(i);
	std::cout << "Choose an index!" << std::endl;
	std::cin >> choice;
	if (!isalnum(choice))
		std::cout << "This aint no index, type again!" << std::endl;
	
}

void	MyPhoneBook::create_phonebook()
{
	int			count = 0;
	int			ret = 0;
	std::string	entries;

	while (count < 8)
	{
		ret = this->contact[count].is_empty(this->contact[count]);
		if (ret == 0)
			break ;
		time++;
		count++;
	}
	if (count == 8) //means the new index should be the oldest created
	{

	}
	this->contact[count].set_contact(this->time);
}
