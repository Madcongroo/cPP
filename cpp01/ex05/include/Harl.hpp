/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proton <proton@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:51:33 by proton            #+#    #+#             */
/*   Updated: 2025/02/04 22:25:37 by proton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	public:
	Harl();
	~Harl();
		void complain( std::string level);
		
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif