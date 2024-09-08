/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:01:30 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/08 11:32:36 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapontype)
{
    this->_Weapontype = weapontype;
    
}

Weapon::~Weapon(){}

void Weapon::setType(std::string weapontype)
{
    this->_Weapontype = weapontype; 
}
 const std::string &Weapon::getweapontype()
 {
    return(this->_Weapontype);
 }
 

