/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:20:32 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/21 18:29:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
        :ClapTrap()
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    this->_name = "Unnamed";
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
}
ScavTrap::ScavTrap(const ScavTrap &copy) 
        : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = copy;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &assigned)
{
    std::cout << "ScavTrap Copy Assignment Operator Called" << std::endl;
        this->_name = assigned._name;
        this->_hit = assigned._hit;
        this->_energy = assigned._energy;
        this->_damage = assigned._damage;       
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) 
        : ClapTrap(name)
{
    std::cout << "ScavTRap" << this->_name << "constructor called" <<std::endl;  
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;  
}

void ScavTrap::attack(const std::string &target)
{
    if(this->_energy >0 && this->_hit > 0)
    {
        this->_energy--;
       std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< " causing " << this->_damage << " points lost!" << std::endl;
    }
    else 
        std::cout << "ScavTrap " << this->_name <<" is not avialable!" << std::endl;
}

void ScavTrap::guardGate()
{
     std::cout << "ScavTrap " << this->_name <<" is now in Gate Keeper mode!" << std::endl;
}
