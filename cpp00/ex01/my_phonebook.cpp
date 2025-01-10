/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:46:35 by proton            #+#    #+#             */
/*   Updated: 2025/01/10 12:30:28 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_phonebook.hpp"

int	main(void)
{
	std::string		entry;

	while (std::cin >> entry)
	{
		if (entry == "ADD")
			add_to_phonebook();
		else if (entry == "SEARCH")
			search_contact();
		else if (entry == "EXIT")
			return (0);
		else
			continue;
	}
}