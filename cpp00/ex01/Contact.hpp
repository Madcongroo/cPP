/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:28 by bproton           #+#    #+#             */
/*   Updated: 2025/02/19 14:03:34 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <limits>
#include <iomanip>

class	Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		double		time;
	public:
		Contacts(void);
		~Contacts(void);
		void	set_contact(double base_time);
		int		is_empty();
		void	display_contact(int index);
		void	display_one_contact();
		void	set_oldest_contact(double base_time);
		double	which_oldest();
};

#endif