/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:47:37 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 13:29:02 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 75, 42), _target("No target")
{};


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 75, 42)
{
	*this = copy;
}
RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->_target = assign._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 75, 42)
{
	this->_target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int random = rand();

	if (!this->getSigned())
		throw Bureaucrat::FormNotSigned();
	if (executor.getGrade() > this->getExecute())
		throw Bureaucrat::GradeTooLowToExecute();
	if (random % 2)
		std::cout << "drilling noises" << std::endl;
	else
		throw RobotomyFailed();
}

const char* RobotomyRequestForm::RobotomyFailed::what() const throw()
{
	return ("the robotomy failed!");
}