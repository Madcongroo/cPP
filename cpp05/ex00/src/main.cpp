/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:44:21 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:39:20 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main(void)
{
	try {
			Bureaucrat	test("bonjour", 40);
			Bureaucrat 	test2("hello", 0);
			Bureaucrat  test3("salut", 151);
			Bureaucrat h("air", 2);
			std::cout << h << std::endl;
			h.incrementGrade();
			std::cout << h << std::endl;
			h.decrementGrade();
			std::cout << h << std::endl;
	}

	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
