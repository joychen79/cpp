/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:05 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 13:22:01 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "stdlib.h"

int main()
{
	std::cout << "************ RobotomyRequestForm\n";
	try
	{
		Bureaucrat bob(10, "bob");
		RobotomyRequestForm a("Robotomy");
		std::cout << bob << std::endl;
		std::cout << a << std::endl;
		bob.executeForm(a);
		bob.signForm(a);
		bob.executeForm(a);
		bob.executeForm(a);
		bob.executeForm(a);
		bob.executeForm(a);
		bob.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "************ PresidentialPardonForm\n";
	try
	{
		Bureaucrat bob(5, "bob");
		PresidentialPardonForm a("Presidential");
		std::cout << bob << std::endl;
		std::cout << a << std::endl;
		bob.executeForm(a);
		bob.signForm(a);
		bob.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "************ ShrubberyCreationForm\n";
	try
	{
		Bureaucrat bob(5, "bob");
		ShrubberyCreationForm a("Shrubbery");
		std::cout << bob << std::endl;
		std::cout << a << std::endl;
		bob.executeForm(a);
		bob.signForm(a);
		bob.executeForm(a);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}