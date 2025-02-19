/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:47:55 by bproton           #+#    #+#             */
/*   Updated: 2025/02/18 14:02:03 by bproton          ###   ########.fr       */
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
    *this->_ideas = *copy._ideas;
    
    return ;
}

Brain &Brain::operator=( const Brain& copy )
{
    std::cout << "copy operator in brain class called" << std::endl;
    
}
