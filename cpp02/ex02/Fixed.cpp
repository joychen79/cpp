/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:20:59 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/14 13:37:28 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
    this->val = 0;
} 

Fixed::~Fixed(){}

/*---COPY CONSTRUCTOR/ASSIGNMENT OPERATOR---*/

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

/*---CONSTRUCTORS---*/

Fixed::Fixed(const int parameter){
	this->val = parameter << this->bits;
}

Fixed::Fixed(const float number){
	this->val = roundf(number * (1 << this->bits));
}

/*---GETER/SETER---*/

int	Fixed::getRawBits(void) const
{
	return (this->val);
}

void	Fixed::setRawBits(int const raw)
{
	this->val = raw;
}

/*---FLOAT/INT---*/

float	Fixed::toFloat(void) const {
/*	float i = static_cast<float>(this->fixed_point) / static_cast<float>(1 << this->fract_bits);
	return i;*/
    return this->val / (double)(1 << this->bits);
}

int	Fixed::toInt(void) const {
	//return (this->fixed_point >> this->fract_bits);
    return this->val / (double)(1 << this->bits);
}

/*---COMPARISON OPERATORS---*/

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

/*---ARITHMETIC OPERATORS---*/

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

/*--INCREMENT/DECREMENT---*/
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

/*---MIN/MAX---*/

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


/*---COPY ASSIGNMENT---*/

std::ostream &operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

/*---------------------------------------------------------------------*/