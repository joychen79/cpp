/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:31:27 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 16:58:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
            const std::string   _name;
            bool                _signed;
            const int           _sign;
            const int           _execute;
    
    public:
            Form();
            Form(const Form &copy);
            Form &operator=(const Form &assign);
            ~Form();
            
            Form(std::string name, int sign, int execute);
            
            std::string getName();
            bool        getSigned();
            int         getSign();
            int         getExecute();

            void    beSigned(Bureaucrat &bureaucrat);

            class GradeTooHighException : public std::exception
            {
              public:
                    const char *what() const throw();  
            };
             class GradeTooLowException : public std::exception
            {
              public:
                    const char *what() const throw();  
            };
};

std::ostream &operator<<(std::ostream& out, Form& form);

#endif