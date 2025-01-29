/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bproton <bproton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:46 by bproton           #+#    #+#             */
/*   Updated: 2025/01/29 15:53:33 by bproton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

class   Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon();
        Weapon( std::string type );
        ~Weapon( void );
        const std::string& getType(void) const;
        void        setType( std::string type );
};

#endif