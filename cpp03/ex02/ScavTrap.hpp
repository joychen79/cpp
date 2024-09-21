/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:20:29 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/21 18:54:46 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

//#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    // Default constructor being created, referenced, assigned the rule of refenrece, and destroyed.
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap &operator = (const ScavTrap &assigned);
        ~ScavTrap();
    //Creat another constructor with name;
        ScavTrap(std::string name);
        
    // Functions  
        void attack(const std::string &target);
        void guardGate(); 
};

#endif
