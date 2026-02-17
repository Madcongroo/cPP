/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:26:15 by bproton           #+#    #+#             */
/*   Updated: 2026/02/17 09:36:05 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/main.hpp"

void	handle_line(std::string line, std::ofstream &out_f, const std::string s1, const std::string s2)
{
	int	i = 0;
	std::size_t	i_start = 0;
	
	while (line[i])
	{
		i_start = line.find(s1, i_start);
		if ((line.find(s1, i_start)) == std::string::npos)
			break ;
		line.erase(i_start, s1.length());
		line.insert(i_start, s2);
		i = i_start;
	}
	out_f << line << std::endl;
}

void	transfer_to_file(std::ofstream &out_f, std::ifstream &f, const std::string s1, const std::string s2)
{
	std::string	line;
	int	i_start = 0;

	while (std::getline(f, line))
	{
		if ((line.find(s1, i_start)) == std::string::npos)
			out_f << line << std::endl;
		else
			handle_line(line, out_f, s1, s2);
		line.clear();
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
	std::string replace(".replace");
	std::ofstream out_f((av[1] + replace).c_str(), std::ios::trunc);
	if (!out_f)
	{
		std::cerr << "Error creating the file" << std::endl;
		return (1);
	}
	
	transfer_to_file(out_f, f, av[2], av[3]);
	f.close();
	out_f.close();
	
	return (0);
	
}
