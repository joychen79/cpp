/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:35:40 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:50:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	this->_name = "*Unnamed character*";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->_ground[i] = NULL;
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
			if (assigned._inventory[i])
				this->_inventory[i] = assigned._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		for (int i = 0; i < 1024; i++)
		{
			if (assigned._ground[i])
				this->_ground[i] = assigned._ground[i]->clone();
			else
				this->_ground[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4 && this->_inventory[i]; i++)
		delete this->_inventory[i];
	for (int i = 0; i < 1024 && this->_ground[i]; i++)
		delete this->_ground[i];
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 1024; i++)
		this->_ground[i] = NULL;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL && m)
		{
			this->_inventory[i] = m->clone();
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_inventory[idx] == NULL)
		return;
	for (int i = 0; i < 1024; i++)
	{
		if (this->_ground[i] == NULL)
		{
			this->_ground[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
			break;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Inventory slot empty..." << std::endl;
}