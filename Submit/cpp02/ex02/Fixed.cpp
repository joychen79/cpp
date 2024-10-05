/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:20:59 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/05 11:06:55 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
    this->val = 0;
} 

Fixed::~Fixed(){}


Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}


Fixed::Fixed(const int parameter){
	this->val = parameter << this->bits;
}

Fixed::Fixed(const float number){
	this->val = roundf(number * (1 << this->bits));
}


int	Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

float	Fixed::toFloat(void) const {

    return this->val / (double)(1 << this->bits);
}

int	Fixed::toInt(void) const {
    return (this->val >> this->bits);
}


bool	Fixed::operator<(const Fixed &other) const
{
	if (this->val < other.val)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (this->val > other.val)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (this->val <= other.val)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (this->val >= other.val)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (this->val == other.val)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	if (this->val != other.val)
		return (true);
	return (false);
}


Fixed	Fixed::operator+(const Fixed &other)
{
	this->val += other.val;
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	this->val -= other.val;
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);
	this->val++;
	return (copy);
}

Fixed	Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);
	this->val--;
	return (copy);
}


Fixed	&Fixed::min(Fixed &ref_1, Fixed &ref_2)
{
	if (ref_1.val < ref_2.val)
		return (ref_1);
	return (ref_2);
}

Fixed	&Fixed::max(Fixed &ref_1, Fixed &ref_2)
{
	if (ref_1.val > ref_2.val)
		return (ref_1);
	return (ref_2);
}

const Fixed	&Fixed::min(const Fixed &ref_1, const Fixed &ref_2)
{
	if (ref_1.val < ref_2.val)
		return (ref_1);
	return (ref_2);
}

const Fixed	&Fixed::max(const Fixed &ref_1, const Fixed &ref_2)
{
	if (ref_1.val > ref_2.val)
		return (ref_1);
	return (ref_2);
}


std::ostream &operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}
