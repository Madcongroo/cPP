/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:20:54 by proton            #+#    #+#             */
/*   Updated: 2025/01/10 12:03:02 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_PHONEBOOK_H
#define MY_PHONEBOOK_H

#include <iostream>
#include <string>

class phonebook
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		int			phone_number;
		std::string	darkest_secret;
	public:
		void set_phonebook(std::string& f_name, std::string& l_name, std::string& n_name,
			int phone_n, std::string& dark_se)
		{
			first_name = f_name;
			last_name = l_name;
			nickname = n_name;
			phone_number = phone_n;
			darkest_secret = dark_se;
		}
};

#endif