/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:35:40 by jingchen          #+#    #+#             */
/*   Updated: 2024/11/01 13:32:50 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	this->_name = "*Unnamed character*";
	for (int i = 0; i < 4; i++)
		this->_equip[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->_unequip[i] = NULL;
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &assigned)
{
	if (this != &assigned)
	{
		this->_name = assigned._name;
		for (int i = 0; i < 4; i++)
		{
			if (assigned._equip[i])
				this->_equip[i] = assigned._equip[i]->clone();
			else
				this->_equip[i] = NULL;
		}
		for (int i = 0; i < 1024; i++)
		{
			if (assigned._unequip[i])
				this->_unequip[i] = assigned._unequip[i]->clone();
			else
				this->_unequip[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4 && this->_equip[i]; i++)
		delete this->_equip[i];
	for (int i = 0; i < 1024 && this->_unequip[i]; i++)
		delete this->_unequip[i];
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_equip[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->_unequip[i] = NULL;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_equip[i] == NULL && m)
		{
			this->_equip[i] = m->clone();
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_equip[idx] == NULL)
		return;
	for (int i = 0; i < 1024; i++)
	{
		if (this->_unequip[i] == NULL)
		{
			this->_unequip[i] = this->_equip[idx];
			this->_equip[idx] = NULL;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_equip[idx])
		this->_equip[idx]->use(target);
	else
		std::cout << "Inventory slot empty..." << std::endl;
}