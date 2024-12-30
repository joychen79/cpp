/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:47:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 13:21:30 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("No target")
{};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
}
ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	this->_target = assign._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Bureaucrat::FormNotSigned();
	if (executor.getGrade() > this->getExecute())
		throw Bureaucrat::GradeTooLowExecute();
	std::ofstream	file(this->_target + "_shrubbery");
	if (!file.is_open())
		throw NotOpenFile();
	file << "   *   " << std::endl;
	file << "  ***  " << std::endl;
	file << " ***** " << std::endl;
	file << "*******" << std::endl;
	file << "   *   " << std::endl;
	file << "   *   " << std::endl;
	file.close();
}

const char* ShrubberyCreationForm::NotOpenFile::what() const throw()
{
	return ("Error. File not created!");
}