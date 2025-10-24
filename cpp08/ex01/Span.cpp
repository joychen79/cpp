/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 17:02:49 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "Span.hpp"

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
}*/

#include "Span.hpp"
#include <algorithm> // std::sort, std::min_element, std::max_element

// Constructor
Span::Span(unsigned int N) : size(N) {}

// Copy constructor
Span::Span(const Span &copy) { *this = copy; }

// Assignment operator
Span &Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        this->size = assign.size;
        this->v = assign.v;
    }
    return *this;
}

// Destructor
Span::~Span() {}

// Add single number
void Span::addNumber(int newNum)
{
    if (v.size() >= size)
        throw SpanFullException();
    v.push_back(newNum);
}

// Add multiple numbers
void Span::addNumbers(const std::vector<int> &numbers)
{
    if (numbers.size() > size - v.size())
        throw SpanFullException();
    v.insert(v.end(), numbers.begin(), numbers.end());
}

// Shortest span
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

// Longest span
int Span::longestSpan() const
{
    if (v.size() <= 1)
        throw SpanTooSmallException();

    int max = *std::max_element(v.begin(), v.end());
    int min = *std::min_element(v.begin(), v.end());
    return max - min;
}

// Exceptions
const char *Span::SpanFullException::what() const throw()
{
    return "Span full";
}

const char *Span::SpanTooSmallException::what() const throw()
{
    return "Span too small for operation";
}
