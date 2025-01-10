/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:28 by bproton           #+#    #+#             */
/*   Updated: 2025/01/10 15:57:21 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "my_phonebook.hpp"

class	Contacts
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
	public:
		void	set_first_name(std::string& f_name);
        void    set_last_name(std::string& l_name);
        void    set_nickname(std::string& n_name);
        void    set_phone_number(int& p_number);
        void    set_darkest_secret(std::string& d_secret);
};

#endif