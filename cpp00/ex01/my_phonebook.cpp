/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:46:35 by proton            #+#    #+#             */
/*   Updated: 2025/01/15 13:24:41 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

void	MyPhoneBook::search_contact(MyPhoneBook& phonebook)
{
	int	count = 0;

	while (count < 8)
	{
		phonebook.contact->display_contact(phonebook.contact[count], count);
		count++;
	}
}

void	MyPhoneBook::create_phonebook(MyPhoneBook& phonebook)
{
	int			count = 0;
	int			ret = 0;
	std::string	entries;

	while (count < 8)
	{
		ret = phonebook.contact[count].is_empty(phonebook.contact[count]);
		if (ret == 0)
			break ;
		count++;
	}
	if (count == 8) //means the new index should be the oldest created
	{

	}
	phonebook.contact[count].set_contact(phonebook.contact[count]);
}
