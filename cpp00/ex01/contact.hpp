/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:28 by bproton           #+#    #+#             */
/*   Updated: 2025/01/21 12:06:21 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

class	Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		ctime		time;
	public:
		Contacts(void);
		~Contacts(void);
		void	set_contact(double base_time);
		int		is_empty(Contacts& contact);
		void	display_contact(int index);
};

#endif