/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:43:04 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &assign)
{
	if (this != &assign)
	{
		this->size = assign.size;
		this->v.clear();
		for (std::vector<int>::const_iterator it = assign.v.begin(); it != assign.v.end(); ++it)
			this->v.push_back(*it);
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int newNum)
{
	if (this->v.size() == this->size)
		throw SpanFullExpection();
	this->v.push_back(newNum);
}

void Span::addNumbers(std::vector<int> vector)
{
	if (vector.size() > this->size - this->v.size())
		throw SpanTooSmallException();
	this->v.insert(this->v.end(), vector.begin(), vector.end());
}

int Span::shortestSpan()
{
	if (this->v.size() <= 1)
		throw SpanTooSmallException();
	int result[this->v.size()];
	std::adjacent_difference(this->v.begin(), this->v.end(), result);
	std::vector<int> validValues;
	for (size_t i = 0; i < this->v.size(); i++)
	{
		if (result[i] >= 0)
			validValues.push_back(result[i]);
	}
	return *std::min_element(validValues.begin(), validValues.end());
}

int Span::longestSpan()
{
	if (this->v.size() <= 1)
		throw SpanTooSmallException();
	int max = *std::max_element(this->v.begin(), this->v.end());
	int min = *std::min_element(this->v.begin(), this->v.end());
	return (max - min);
}

void Span::print()
{
	for (std::vector<int>::const_iterator it = this->v.begin(); it != this->v.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
}

const char *Span::SpanFullExpection::chat() const throw()
{
	return "\033[0;31mSpan full\033[0m";
}

const char *Span::SpanTooSmallException::chat() const throw()
{
	return "\033[0;31mSpan too small for that operation\033[0m";
}