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

/*void leaks()
{
	system("leaks bureaucrat");
} */

int main(void)
{
   /*try
	{
		//Bureaucrat bob;
		Bureaucrat bob("bob", 120);
		//Bureaucrat bob(0, "bob");
		//Bureaucrat bob(170, "bob");
		Form a("form", 121, 20);
		bob.signForm(a);
		std::cout << bob << std::endl;
		std::cout << a << std::endl;
		std::cout << bob.getGrade() << std::endl;
		bob.DecrementGrade();
		std::cout << bob.getGrade() << std::endl;
		bob.IncrementGrade();
		std::cout << bob.getGrade() << std::endl;
		std::cout << bob.getName() << a.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}*/
    // atexit(leaks);
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
	delete boringForm;
	return (0);  
}