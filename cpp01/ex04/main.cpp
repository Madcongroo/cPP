/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:26:15 by bproton           #+#    #+#             */
/*   Updated: 2025/02/04 12:24:30 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	handle_line(std::string line, std::ofstream &out_f, const std::string s1, const std::string s2)
{
	while (1)
	{
		
	}
}

int	transfer_to_file(std::ofstream &out_f, std::ifstream &f, const std::string s1, const std::string s2)
{
	std::string	line;
	int	i_start;
	int	i_end = 0;
	int	len_s1 = s1.length();
	int	len_s2 = s2.length();
	
	out_f.open("result.txt");
	while (std::getline(f, line))
	{
		i_start = line.find(s1);
		if (line[i_start] == '\0')
			out_f << line << std::endl;
		else
			handle_line(line, out_f, s1, s2);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error, not the right number of arguments" << std::endl;
		return (1);
	}
	
	std::ifstream f(av[1]);
	if (!f.is_open())
	{
		std::cerr << "Error with opening the file" << std::endl;
		return (1);
	}
	
	std::ofstream out_f("result.txt");
	if (out_f.fail())
	{
		std::cerr << "Error creating the file" << std::endl;
		return (1);
	}
	
	if (transfer_to_file(out_f, f, av[2], av[3]) == -1)
		return (1);
	
}
