/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:43:20 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/06 17:45:10 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

//#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    // Default constructor being created, referenced, assigned the rule of refenrece, and destroyed.
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator = (const FragTrap &assigned);
        ~FragTrap();
    //Creat another constructor with name;
        FragTrap(std::string name);

        void attack(const std::string& target);
        void highFivesGuys(); 
};

#endif