/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:37:34 by bproton           #+#    #+#             */
/*   Updated: 2025/02/18 14:01:56 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
	public:
		Brain();
		Brain( const Brain& copy );
		Brain &operator=( const Brain& copy );
		~Brain();
		
		std::string	_ideas[100];

};

#endif