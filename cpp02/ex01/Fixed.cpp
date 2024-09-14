/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:30:18 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/14 12:59:43 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called" << std::endl;
    this->val = 0;
}
Fixed::~Fixed()
{
    std::cout<< "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
    std::cout<<"Copy constructor called" << std::endl;
    *this = other;
}
 Fixed &Fixed::operator = (const Fixed &other)
 {
       std::cout<<"Copy assignment operator called" << std::endl;
       if(this != &other)
            this->val = other.getRawBit();
       return(*this);   
 }

 Fixed:: Fixed(const int number)
 {
    std::cout<<"Int constructor called" << std::endl;
    this->val = roundf(number * (1 << this->bits));
 }

 Fixed:: Fixed(const float number)
 {
    std::cout<<"Float constructor called" << std::endl;
    this->val = roundf(number * (1 << this->bits));
 }

 int Fixed::getRawBit() const
 {
    return(this->val);
 }
 
void Fixed::setRawBit(int const Raw)
{
    this->val = Raw;
}
 float Fixed::toFloat(void) const
 {
    return(this->val / (double)(1 << this->bits));
 }

int Fixed::toInt(void) const
 {
    return(this->val / (double)(1 << this->bits));
 }

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}