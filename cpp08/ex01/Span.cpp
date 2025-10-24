/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 15:29:06 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <iostream>
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
}*/

#include "Span.hpp"

// 构造
Span::Span(unsigned int N) : size(N) {}

// 拷贝构造
Span::Span(const Span &copy)
{
    *this = copy;
}

// 赋值运算符
Span &Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        this->size = assign.size;
        this->v = assign.v; // vector 自带拷贝
    }
    return *this;
}

// 析构
Span::~Span() {}

// 添加单个数字
void Span::addNumber(int newNum)
{
    if (v.size() >= size)
        throw SpanFullException();
    v.push_back(newNum);
}

// 添加多个数字
void Span::addNumbers(const std::vector<int> &vector)
{
    if (vector.size() > size - v.size())
        throw SpanFullException();
    v.insert(v.end(), vector.begin(), vector.end());
}

// 最短跨度
int Span::shortestSpan() const
{
    if (v.size() <= 1)
        throw SpanTooSmallException();

    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; ++i)
    {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

// 最长跨度
int Span::longestSpan() const
{
    if (v.size() <= 1)
        throw SpanTooSmallException();

    int max = *std::max_element(v.begin(), v.end());
    int min = *std::min_element(v.begin(), v.end());
    return max - min;
}

// 打印所有元素
void Span::print() const
{
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << ", ";
    std::cout << std::endl;
}

// 异常信息
const char *Span::SpanFullException::what() const throw()
{
    return "Span full";
}

const char *Span::SpanTooSmallException::what() const throw()
{
    return "Span too small for operation";
}