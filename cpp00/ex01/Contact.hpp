/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 16:55:47 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/01 17:04:13 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick;
	std::string phone_number;
	std::string secret;

public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nick,
			std::string phone_number, std::string secret);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nick();
	std::string get_phone_number();
	std::string get_secret();
};

#endif