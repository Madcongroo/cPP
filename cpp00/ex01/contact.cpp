/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:07:35 by bproton           #+#    #+#             */
/*   Updated: 2025/01/14 11:13:01 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int     Contacts::get_phone_number(Contacts& contact)
{
	if (contact->phone_number)
		return (0);
	else
		return (-1);
}

void    Contacts::set_first_name(std::string f_name)
{
	
}
