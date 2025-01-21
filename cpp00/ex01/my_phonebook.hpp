/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:20:54 by proton            #+#    #+#             */
/*   Updated: 2025/01/21 12:06:15 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_PHONEBOOK_HPP
#define MY_PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include "contact.hpp"

class MyPhoneBook
{
	private:
		Contacts	contact[8];
	public:
		MyPhoneBook(){};
		~MyPhoneBook(){};
		void	create_phonebook(MyPhoneBook& phonebook);
		void	search_contact(MyPhoneBook& phonebook);
};

#endif