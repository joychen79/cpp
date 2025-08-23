/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:12:31 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 15:42:26 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
        
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &assign);
        ~Bureaucrat();
        
        Bureaucrat(std::string name, int grade); 
        
        std::string getName() const;
        int getGrade() const;
        
        void    IncrementGrade();
        void    DecrementGrade();

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
    std::ostream &operator<<(std::ostream & out, const Bureaucrat& bureaucrat);
    
#endif