/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 12:12:31 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 14:45:01 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grate;
        
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &assign);
        ~Bureaucrat();
        
        Bureaucrat(std::string name, int grate); 
        
        std::string getName() const;
        int getGrate() const;
        
        void    IncrementGrade();
        void    DecrementGrade();

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();    
        };
        
        class GradeLowException : public std::exception
        {
            public:
                const char *what() const throw();    
        };
    
};
    std::ostream &operator<<(strd::ostream & out, const Bureaucrat& assign);
    
#endif