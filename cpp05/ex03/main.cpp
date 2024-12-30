/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:05 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 14:16:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "stdlib.h"

int main()
{
	try
	{
		Bureaucrat bob("bob",10);
		Intern	boby;
		std::cout << "-------------------------\n";
		AForm *interno = boby.makeForm("presidential pardon", "Bender");
		bob.signForm(*interno);
		bob.executeForm(*interno);
		delete interno;
		std::cout << "-------------------------\n";
		interno = boby.makeForm("robotomy request", "Bender");
		bob.signForm(*interno);
		bob.executeForm(*interno);
		delete interno;
		std::cout << "-------------------------\n";
		interno = boby.makeForm("shrubbery creation", "Bender");
		bob.signForm(*interno);
		bob.executeForm(*interno);
		delete interno;
		std::cout << "-------------------------\n";
		interno = boby.makeForm("patata", "Bender");
		bob.signForm(*interno);
		bob.executeForm(*interno);
		delete interno;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}