/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:43:17 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:43:46 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
	: AMateria(copy)
{
	*this = copy;
}

Ice &Ice::operator=(const Ice &assigned)
{
	(void)assigned;
	this->_type = "ice";
	return *this;
}

Ice::~Ice()
{
}

Ice *Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}