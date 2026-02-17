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

int	main(void)
{
	try {
			Bureaucrat j("BUREAUCRAT", 1);
			AForm *shrub = new ShrubberyCreationForm("HUMANOID");
			AForm *robot = new RobotomyRequestForm("HUMAN");
			AForm *presi = new PresidentialPardonForm("GOD");
			j.signForm(*shrub);
			j.executeForm(*shrub);
			j.signForm(*robot);
			j.executeForm(*robot);
			j.signForm(*presi);
			j.executeForm(*presi);
			delete shrub;
			delete robot;
			delete presi;
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
	

	return (0);
}
