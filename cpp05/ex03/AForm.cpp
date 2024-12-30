/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:31:32 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 12:11:25 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("No name"), _signed(false), _sign(150), _execute(150){}

AForm::~AForm(){}

AForm::AForm(std::string name, int sign, int execute) : _name(name), _signed(false), _sign(sign), _execute(execute)
{
	if (this->_sign < 1 || this->_execute < 1)
		throw GradeTooHighException();
	if (this->_sign > 150 || this->_execute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &copy) : _name(copy._name), _sign(copy._sign), _execute(copy._execute)
{
	*this = copy;
}

AForm &AForm::operator=(const AForm &assign)
{
	if (this->_sign < 1 || this->_execute < 1)
		throw GradeTooHighException();
	if (this->_sign > 150 || this->_execute > 150)
		throw GradeTooLowException();
	this->_signed = assign._signed;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

int	AForm::getSign() const
{
	return (this->_sign);
}

int	AForm::getExecute() const
{
	return (this->_execute);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

std::ostream &operator<<(std::ostream& out, AForm &form)
{
	out << form.getName();
	if (form.getSigned())
		out << " currently is signed.";
	else
		out << " currently is not signed.";
	out << " The grade needed to sign is " << form.getSign()
	<< ". The grade needed to execute is " <<  form.getExecute() << ".";
	return (out);
}