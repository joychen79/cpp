/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:05 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 17:05:12 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	Bureaucrat *bob = new Bureaucrat("Bob", 1);
	Bureaucrat *michael = new Bureaucrat("Michael", 55);
	Form *boringForm = new Form("28B form", 50, 3);
	std::cout << *bob << std::endl;
	std::cout << *michael << std::endl;
	std::cout << *boringForm << std::endl;
	try
	{
		boringForm->beSigned(*michael);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		boringForm->beSigned(*bob);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *boringForm << std::endl;
	delete bob;
	delete michael;
	delete boringForm;
	return (0);  
}