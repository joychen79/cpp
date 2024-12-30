/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:47:34 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/30 13:06:24 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
    
    public:
        PresidentialPardonForm ();
        PresidentialPardonForm (const PresidentialPardonForm &copy);
        PresidentialPardonForm  &operator=(const PresidentialPardonForm  &assign);
        ~PresidentialPardonForm ();
        
        PresidentialPardonForm (std::string target);

        void execute(Bureaucrat const & executor) const;       
};

#endif