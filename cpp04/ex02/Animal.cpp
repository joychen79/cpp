/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:33 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:09:15 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default animal called!" << std::endl;
    this->_type = "Default";
}

Animal::Animal(const Animal &copy)
{
     std::cout << "Copy animal called!" << std::endl;
     *this = copy;
}

Animal &Animal::operator=(const Animal &assigned)
{
    std::cout << "Copy assignment operator called!" << std::endl;
    this->_type = assigned._type;
    return (*this);
}

Animal::~Animal()
{
     std::cout << "Destructor called!" << std::endl;
}

std::string Animal::getType() const
{
    return(this->_type);
}

/*void Animal::makeSound() const
{
    std::cout << "Animal noises..." << std::endl;
}*/