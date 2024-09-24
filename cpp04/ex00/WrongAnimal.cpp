/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:21 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/24 18:33:43 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal called!" << std::endl;
    this->_type = "Default";
}

WrongAnimal::WrongAnimal(const WrongAnimal&copy)
{
     std::cout << "Copy WrongAnimal called!" << std::endl;
     *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assigned)
{
    std::cout << "WrongAnimal assignment operator called!" << std::endl;
    this->_type = assigned._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
     std::cout << "WrongAnimal Destructor called!" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal noises..." << std::endl;
}