/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:41 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/24 18:24:48 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Default cat constructor called" << std::endl;
    this->_type = "Cat";
}
Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Copy cat constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &assigned)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = assigned._type;
    return (*this);
}

Cat::~Cat()
{
     std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}