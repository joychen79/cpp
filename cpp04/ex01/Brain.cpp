/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:53:14 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 18:33:38 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Brain default constructor called!" << std::endl;
    
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Good Idea!";
}
Brain::Brain(const Brain &copy)
{
     std::cout<< "Brain copy constructor called!" << std::endl;
    
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
}
Brain &Brain::operator=(const Brain &assigned)
{
    std::cout<< "Brain assignment operator called!" << std::endl;
    
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = assigned._ideas[i];
        return(*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}
