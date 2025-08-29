/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:31:42 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:36:44 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	//atexit(leaks);
	{
		Array<int> intArray(5);

		std::cout << "Default intArray: " << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;

		std::cout << "Modified intArray: " << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = i;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << ", ";
		std::cout << std::endl;
	}
	std::cout << "___________________" << std::endl;
	{
		Array<std::string> stringArray(5);
		std::cout << "stringArray: " << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "\"" << stringArray[i] << "\", ";
		std::cout << std::endl;

		std::cout << "stringArray: " << std::endl;
		for (unsigned int i = 0; i < stringArray.size(); i++)
			stringArray[i] = "CPP07";
		for (unsigned int i = 0; i < stringArray.size(); i++)
			std::cout << "\"" << stringArray[i] << "\", ";
		std::cout << std::endl;
	}
	return (0);
}