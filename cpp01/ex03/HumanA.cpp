/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:19:19 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/08 11:34:30 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA):_name(name),_weaponA(weaponA)
{
   // this->_name = name;
   // this->_weaponA = weaponA;
}
HumanA:: ~HumanA(){}
void HumanA::attack()
{
    std::cout << this->_name << "is attacking with his "<< this->_weaponA.getweapontype()<< std::endl;
}