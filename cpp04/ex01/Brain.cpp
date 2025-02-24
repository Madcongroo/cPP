/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:47:55 by bproton           #+#    #+#             */
/*   Updated: 2025/02/23 10:48:33 by proton           ###   ########.fr       */
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
        *this->_ideas = *copy._ideas;
    
    return ;
}

Brain::~Brain()
{
    std::cout << "destructor of class brain being called" << std::endl;

    return ;
}
