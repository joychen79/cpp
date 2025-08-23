/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:47:40 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 14:02:50 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
        ~RobotomyRequestForm();
        
        RobotomyRequestForm(std::string target);
        
        class RobotomyFailed : public std::exception
        {
            public:
                const char* what() const throw();
        };
        void execute(Bureaucrat const & executor) const;       
};

#endif