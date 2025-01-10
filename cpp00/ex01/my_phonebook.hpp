/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:20:54 by proton            #+#    #+#             */
/*   Updated: 2025/01/10 16:37:19 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_PHONEBOOK_HPP
#define MY_PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class MyPhonebook
{
	private:
		class::Contacts contact[8];
	public:
		void	fill_contacts();
		void	set_contacts(Contacts contact[]);
};

#endif