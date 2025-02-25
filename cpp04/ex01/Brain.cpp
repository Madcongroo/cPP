/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:47:55 by bproton           #+#    #+#             */
/*   Updated: 2025/02/25 11:36:32 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor of brain class called" << std::endl;

    return ;
}

Brain::Brain( const Brain& copy)
{
    std::cout << "copy constructor of brain class called" << std::endl;
    *this = copy;
    
    return ;
}

Brain &Brain::operator=( const Brain& copy )
{
    std::cout << "copy operator in brain class called" << std::endl;

    if (this != &copy)
    {
        for (size_t i = 0; i < copy._ideas->size(); i++)
		this->_ideas[i] = copy._ideas[i].substr();
    }
    
    return (*this);
}

Brain::~Brain()
{
    std::cout << "destructor of class brain being called" << std::endl;

    // delete[] _ideas;

    return ;
}
