/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   My_PhoneBook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:20:54 by proton            #+#    #+#             */
/*   Updated: 2025/02/19 14:02:55 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_PHONEBOOK_HPP
#define MY_PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include <cstdlib>
#include "Contact.hpp"

class MyPhoneBook
{
	private:
		Contacts	contact[8];
		double		time;
	public:
		MyPhoneBook( void );
		~MyPhoneBook( void );
		void	create_phonebook();
		void	search_contact();
};

#endif