/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:24:40 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/01 16:25:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void	HumanB::setWeapon(Weapon &weaponB)
{
	this->_weaponB = &weaponB;
}
HumanB::~HumanB(){}

void  HumanB::attack()
{
   std::cout << this->_name << " is attacking with his "<< this->_weaponB->getweapontype()<< std::endl;
}