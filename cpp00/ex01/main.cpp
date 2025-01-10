/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:14:33 by bproton           #+#    #+#             */
/*   Updated: 2025/01/10 16:17:31 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

int main(void)
{
	std::string entry;

	while (std::cin >> entry)
	{
		if (entry == "ADD")
            set_phonebook();
		else if (entry == "SEARCH")
			search_contact();
		else if (entry == "EXIT")
			return (0);
		else
			continue;
	}
}