/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:41 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 18:59:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Default cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}
Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Copy cat constructor called" << std::endl;
    this->_type= copy._type;
    this->_brain = new Brain();
    *this->_brain = *(copy._brain);
}

Cat &Cat::operator=(const Cat &assigned)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->_type = assigned._type;
    if(this->_brain)
        delete this->_brain;
    this->_brain = new Brain();
    *this->_brain = *(assigned._brain);
    return (*this);
}

Cat::~Cat()
{
     std::cout << "Cat destructor called" << std::endl;
     delete this->_brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}