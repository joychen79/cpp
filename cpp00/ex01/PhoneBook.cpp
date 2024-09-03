/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:10:25 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/03 17:24:56 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int	check_PhoneNumber(std::string number)
{
	int	count;

	count = 0;
	while (number[count])
	{
		if (!std::isdigit(number[count]))
			return (0);
		count++;
	}
	return (1);
}

static Contact new_contact()
{
	std::string first_name;
	std::string last_name;
	std::string nick;
	std::string phone_number;
	std::string secret;

	std::cout << "Enter contact's First Name: ";
	std::cin >> first_name;
	std::cout << "Enter contact's Last Name: ";
	std::cin >> last_name;
	std::cout << "Enter contact's Nick: ";
	std::cin >> nick;
	std::cout << "Enter contact's Phone Number: ";
	std::cin >> phone_number;
	while(!check_PhoneNumber(phone_number))
	{
		std::cout << "Wrong Number!" << std::endl;
		std::cout << "Enter contact's Phone Number: ";
			std::cin >> phone_number;
	}
	std::cout << "Enter contact's Darkest Secret: ";
	std::cin.ignore(); // add this line to clear the input buffer
	std::getline(std::cin, secret);
	return Contact(first_name, last_name, nick, phone_number, secret);
}

void PhoneBook::add()
{
	if(added_contacts > 7)
		std::cout << "Warning, overwriting the oldest info" << std::endl;
	this->contacts[added_contacts % 8] = new_contact();
	added_contacts++;
}

static void print_info(std::string value)
{
	int len = value.length();
	if (len > 10)
		std::cout << value.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << value;
}

static void print_contacts(Contact contacts[8], int table_size)
{
	for (int i = 0; i < table_size; i++)
	{
		Contact contact = contacts[i];
		std::cout << "│";
		std::cout << i+1 ;;
		std::cout << "│";
		print_info(contact.get_first_name());
		std::cout << "│";
		print_info(contact.get_last_name());
		std::cout << "│";
		print_info(contact.get_nick());
		std::cout << "" << std::endl;
	}
}

void PhoneBook::search()
{
	int table_size = this->added_contacts;
	if (this->added_contacts > 8)
		table_size = 8;
	if (table_size == 0)
	{
		std::cout << std::endl
				  << "No contacts " << std::endl;
		return;
	}
	print_contacts(this->contacts, table_size);
	std::string index;
	std::cout << std::endl
			  << "Enter index of contact to see more details: ";
	std::cout << std::endl;
	std::cin >> index;
	if (index.length() == 1 && std::isdigit(index[0]) && std::atoi(index.c_str()) <= table_size && std::atoi(index.c_str()) != 0)
	{
		std::cout << std::endl
				  << "Showing inf of contact #" << index << std::endl;
		std::cout << std::endl
				  << "First Name:\t\t" << contacts[std::atoi(index.c_str()) - 1].get_first_name() << std::endl;
		std::cout << std::endl
				  << "Last Name:\t\t" << contacts[std::atoi(index.c_str()) - 1].get_last_name() << std::endl;
		std::cout << std::endl
				  << "Nick:\t\t\t" << contacts[std::atoi(index.c_str()) - 1].get_nick() << std::endl;
		std::cout << std::endl
				  << "Phone Number:\t\t" << contacts[std::atoi(index.c_str()) - 1].get_phone_number() << std::endl;
		std::cout << std::endl
				  << "Darkest Secret:\t\t" << contacts[std::atoi(index.c_str()) - 1].get_secret() << std::endl;
	}
	else
		std::cout << std::endl << "Not a valid index" << std::endl;
}
