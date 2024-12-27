/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:02 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 14:44:56 by jingchen         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(std::string name, int grade) : name(_name)
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

const char *Bureaucrat::GradeTooHighException::what() const throw
{
    return("Grade Too High Exception");
}

const char *Bureaucrat::GradeTooLowException::what() const throw
{
    return("Grade Low High Exception");
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat& assign)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}