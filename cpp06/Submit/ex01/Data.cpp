/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:09:56 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:11:27 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : members(0) {}

Data::~Data() {}

Data::Data(const Data &other)
{
	*this = other;
}

Data &Data::operator=(const Data &other)
{
	if (this != &other)
		this->members = other.members;
	return *this;
}

Data::Data(int _members) : members(_members) {}

int Data::getMembers() const
{
    return members;
}