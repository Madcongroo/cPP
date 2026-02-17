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
			Form	f;
			Bureaucrat j("nom", 20);
			j.signForm(f);
			j.execForm(f);
			std::cout << f.getSignd() << std::endl;
			std::cout << f << std::endl;
	}

	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const Form::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const Form::GradeTooLowException& e )
	{
		std::cout << e.what() << std::endl;
	}
	

	return (0);
}
