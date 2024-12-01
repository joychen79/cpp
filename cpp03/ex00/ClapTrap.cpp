/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:13:59 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/06 17:37:23 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
    this->_name = "Default";
    this->_hit = 10;
    this->_energy = 10;
    this->_damage = 0;  
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hit = 10;
    this->_energy = 10;
    this->_damage = 0;
    std::cout << "ClapTrap "<< this->_name << " Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy Constructor Called" << std::endl;
      *this = copy;  
}

ClapTrap &ClapTrap::operator=(const ClapTrap &assigned)
{
     std::cout << "ClapTrap Copy Assignment Operator Called" << std::endl;
        this->_name = assigned._name;
        this->_hit = assigned._hit;
        this->_energy = assigned._energy;
        this->_damage = assigned._damage;
        
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(this->_energy > 0 && this->_hit >0)
    {
        std::cout << "ClapTrap "<< this->_name << " attacks " << target << ", causing " << this->_damage << " point lost!" << std::endl ;
        this->_energy--;
    }
    else
		std::cout << "ClapTrap " << this->_name << " is not available." << std::endl;
}

 void ClapTrap::takeDamage(unsigned int amount)
 {
    if(amount > 0 && this->_hit > 0)
    {
        if(this->_hit > amount)
        {
            std::cout <<"ClapTrap "<< this->_name << " was hit and has lost " << amount << " hit points!" << std::endl ;
            this->_hit -= amount;
        }
        else
            this->_hit = 0;
    }   
    if(this->_hit <= 0)
        std::cout << "ClapTrap " << this->_name << " is not available." << std::endl;
 }
 
 void ClapTrap::beRepaired(unsigned int amount)
 {
    if(this->_energy <= 0)
    {
        std::cout << "ClapTrap "<< this->_name << " doesn´t have enery points!" << std::endl;
    }
    if((this->_energy-amount) >= 0)
    {
        std::cout << "ClapTrap "<< this->_name << " repairs itself receiving " << amount << " hit points back!" << std::endl;
        this->_energy -= amount;
        this->_hit += amount;
    }
    else
        std::cout << "ClapTrap "<< this->_name << " doesn´t have enough energy point" << std::endl;
 }
