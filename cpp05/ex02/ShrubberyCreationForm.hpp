/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:47:46 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 13:00:48 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <ftream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm(std::string target);
        
        class NotOpenFile : public std::exception
        {
            public:
                const char* what() const throw();
        };
        void execute(Bureaucrat const & executor) const;       
};

#endif