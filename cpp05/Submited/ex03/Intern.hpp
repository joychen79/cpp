/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:11:33 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 14:12:48 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Intern(const Intern &copy);
		Intern	&operator=(const Intern &assign);

		AForm	*makeForm(std::string form, std::string target);

		class WrongTypeForm : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif