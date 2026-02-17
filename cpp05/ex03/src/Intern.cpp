/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:07:07 by proton            #+#    #+#             */
/*   Updated: 2026/02/17 09:39:20 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
	std::cout << "in Intern base constructor" << std::endl;
}

Intern::Intern( const Intern& copy )
{
	std::cout << "in Intern copy constructor" << std::endl;
	*this = copy;
}

Intern& Intern::operator=( const Intern& copy )
{
	(void)copy;
	std::cout << "in Intern assignation operator constructor" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "in Intern destructor" << std::endl;
}

AForm*	Intern::makeForm( std::string formName, std::string target )
{	
	std::string		formArray[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm*			newForm = NULL;
	int				i = 0;

	while (i < 4 && formArray[i] != formName)
		i++;

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << formName << std::endl;
			newForm = new ShrubberyCreationForm(target);
			break ;

		case 1:
			std::cout << "Intern creates " << formName << std::endl;
			newForm = new RobotomyRequestForm(target);
			break ;

		case 2:
			std::cout << "Intern creates " << formName << std::endl;
			newForm = new PresidentialPardonForm(target);
			break ;

		default:
			throw (Intern::InternFormCreationException());
			break ;
	}
	return (newForm);
}

const char* Intern::InternFormCreationException::what() const throw()
{
	return ("Name of the Form provided not valid");
}

