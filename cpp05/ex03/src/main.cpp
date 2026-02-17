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
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"

int	main(void)
{
	try {
			Intern	randomIntern;
			Bureaucrat j("BUREAUCRAT", 1);
			AForm *shrub = randomIntern.makeForm("ShrubberyCreationForm", "Bender");
			j.signForm(*shrub);
			j.executeForm(*shrub);
			delete shrub;
	}

	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const AForm::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const AForm::GradeTooLowException& e )
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const AForm::NotSignedFormException& e )
	{
		std::cout << e.what() << std::endl;
	}

	catch ( const Intern::InternFormCreationException& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	return (0);
}
