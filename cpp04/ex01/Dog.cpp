/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:48 by jingchen          #+#    #+#             */
/*   Updated: 2024/11/01 11:14:28 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Default dog constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}
Dog::Dog(const Dog &copy) : Animal()
{
    std::cout << "Copy dog constructor called" << std::endl;
    this->_type = copy._type;
    this->_brain = new Brain();
    *this->_brain = *(copy._brain);
}

Dog &Dog::operator=(const Dog &assigned)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->_type = assigned._type;
      if(this->_brain)
        delete this->_brain;
    this->_brain = new Brain();
    *this->_brain = *(assigned._brain);
    return (*this);
}

Dog::~Dog()
{
     std::cout << "Dog destructor called" << std::endl;
     delete this->_brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
