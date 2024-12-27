/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:02 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 17:02:28 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &assign)
{
    if(this != &assign)
    {
        if(assign._grade > 150)
            throw GradeTooLowException();
           if(assign._grade < 1)
            throw GradeTooHighException();
        (std::string) this->_name = assign._name;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if(grade > 150)
            throw GradeTooHighException();
    if(grade < 1)
            throw GradeTooLowException();
    this->_grade = grade;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::IncrementGrade()
{
    if(this->_grade == 1)
        throw GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::DecrementGrade()
{
    if(this->_grade == 150)
        throw GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;   
    }
    
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn´t sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade Too High Exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade Low High Exception");
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade is " << bureaucrat.getGrade() << ".";
	return out;
}