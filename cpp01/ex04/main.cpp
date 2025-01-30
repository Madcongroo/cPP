/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:26:15 by bproton           #+#    #+#             */
/*   Updated: 2025/01/30 16:52:19 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

std::ofstream	transfer_to_file(std::ofstream &out_f, std::ifstream &f, const std::string& s1, const std::string& s2)
{
	std::string	line;
	
	while (std::getline(f, line))
	{
		
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
	
	transfer_to_file(out_f, f, av[2], av[3]);
}
