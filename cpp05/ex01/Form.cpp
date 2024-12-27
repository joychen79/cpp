/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:31:32 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 16:54:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("No name"), _signed(false), _sign(150), _execute(150){}

Form::~Form(){}

Form::Form(std::string name, int sign, int execute) : _name(name), _signed(false), _sign(sign), _execute(execute)
{
	if (this->_sign < 1 || this->_execute < 1)
		throw GradeTooHighException();
	if (this->_sign > 150 || this->_execute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy) : _name(copy._name), _sign(copy._sign), _execute(copy._execute)
{
	*this = copy;
}

Form &Form::operator=(const Form &assign)
{
	if (this->_sign < 1 || this->_execute < 1)
		throw GradeTooHighException();
	if (this->_sign > 150 || this->_execute > 150)
		throw GradeTooLowException();
	this->_signed = assign._signed;
	return (*this);
}

std::string	Form::getName()
{
	return (this->_name);
}

bool	Form::getSigned()
{
	return (this->_signed);
}

int	Form::getSign()
{
	return (this->_sign);
}

int	Form::getExecute()
{
	return (this->_execute);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_sign)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

std::ostream &operator<<(std::ostream& out, Form &form)
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