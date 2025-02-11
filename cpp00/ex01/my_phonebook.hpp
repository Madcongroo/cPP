/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:20:54 by proton            #+#    #+#             */
/*   Updated: 2025/02/11 14:00:50 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_PHONEBOOK_HPP
#define MY_PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctime>
#include "contact.hpp"

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