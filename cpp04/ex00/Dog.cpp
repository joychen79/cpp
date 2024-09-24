/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:48 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/24 18:25:07 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Default dog constructor called" << std::endl;
    this->_type = "Dog";
}
Dog::Dog(const Dog &copy) : Animal()
{
    std::cout << "Copy dog constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &assigned)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = assigned._type;
    return (*this);
}

Dog::~Dog()
{
     std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}