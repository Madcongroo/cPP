/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:03:47 by proton            #+#    #+#             */
/*   Updated: 2025/01/09 14:10:53 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string temp;
	for (int i = 1; i < argc; i++)
	{
		temp = argv[i];
		for (std::string::size_type j = 0; j < temp.size(); j++)
		{
			argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i][j] << std::flush;
		}
	}
	std::cout << std::endl;
	return (0);
}