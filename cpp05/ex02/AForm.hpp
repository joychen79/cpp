/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:31:27 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 12:11:15 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
            const std::string   _name;
            bool                _signed;
            const int           _sign;
            const int           _execute;
    
    public:
            AForm();
            AForm(const AForm &copy);
            AForm &operator=(const AForm &assign);
            virtual ~AForm();
            
            AForm(std::string name, int sign, int execute);
            
            std::string getName() const;
            bool        getSigned() const;
            int         getSign() const;
            int         getExecute() const;

            void    beSigned(Bureaucrat &bureaucrat);
            virtual void execute(Bureaucrat const & executor) const = 0

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

std::ostream &operator<<(std::ostream& out, AForm& form);

#endif