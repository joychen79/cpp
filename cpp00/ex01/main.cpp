/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:06:00 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/03 17:32:31 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook pb = PhoneBook();
	std::string input;

	std::cout << std::endl
			  << "Welcome to your PhoneBook!" << std::endl;
	while (1)
	{
		//std::cout << std::endl
		//		  << "\033[0;34m>> ";
		std::cout << "Please enter an option:" << std::endl
				  << "ADD / SEARCH / EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT" || input == "exit" || std::cin.eof())
			break;
		if (input == "add" || input == "ADD")
			pb.add();
		else if (input == "SEARCH" || input == "search")
			pb.search();
		else
			std::cout << std::endl
					  << "Error: Invalid option, please enter a valid option!" << std::endl;
	}

	std::cout << "See you soon!" << std::endl;
	return 0;
}