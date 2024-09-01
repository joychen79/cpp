/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:03:42 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/01 17:04:43 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::Contact(std::string first_name, std::string last_name,
		std::string nick, std::string phone_number, std::string secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick = nick;
	this->phone_number = phone_number;
	this->secret = secret;
}

std::string Contact::get_first_name()
{
	return this->first_name;
}

std::string Contact::get_last_name()
{
	return this->last_name;
}

std::string Contact::get_nick()
{
	return this->nick;
}

std::string Contact::get_phone_number()
{
	return this->phone_number;
}

std::string Contact::get_secret()
{
	return this->secret;
}