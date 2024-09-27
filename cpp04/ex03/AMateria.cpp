/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:33:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:49:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &copy)
{
	if (this != &copy)
		this->_type = copy._type;
}

AMateria &AMateria::operator=(const AMateria &assigned)
{
	if (this != &assigned)
		this->_type = assigned._type;
	return *this;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->_type = type;
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Something happened to " << target.getName() << std::endl;
}