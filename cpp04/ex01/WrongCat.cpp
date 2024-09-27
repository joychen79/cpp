/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:28 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/24 18:31:23 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
    std::cout << "Copy Wrongcat constructor called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &assigned)
{
    std::cout << "Wrongcat assignment operator called" << std::endl;
    this->_type = assigned._type;
    return (*this);
}

WrongCat::~WrongCat()
{
     std::cout << "Wrongcat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miao" << std::endl;
}