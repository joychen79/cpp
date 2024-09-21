/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:43:17 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/21 19:12:17 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
        :ClapTrap()
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    this->_name = "Unnamed";
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
}
FragTrap::FragTrap(const FragTrap &copy) 
        : ClapTrap(copy)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = copy;
}
FragTrap &FragTrap::operator=(const FragTrap &assigned)
{
    std::cout << "FragTrap Copy Assignment Operator Called" << std::endl;
        this->_name = assigned._name;
        this->_hit = assigned._hit;
        this->_energy = assigned._energy;
        this->_damage = assigned._damage;       
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) 
        : ClapTrap(name)
{
    std::cout << "FragTRap" << this->_name << "constructor called" <<std::endl;  
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;  
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " high fives everyone!" << std::endl;
}