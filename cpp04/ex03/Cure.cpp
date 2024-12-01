/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:04:44 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/27 13:04:45 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure &copy)
	: AMateria(copy)
{
	(void)copy;
	this->_type = "cure";
}

Cure &Cure::operator=(const Cure &assigned)
{
	(void)assigned;
	this->_type = "cure";
	return *this;
}

Cure::~Cure()
{
}

Cure *Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}