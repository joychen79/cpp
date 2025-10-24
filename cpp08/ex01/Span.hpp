/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:23 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 15:38:00 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
    unsigned int size;
    std::vector<int> v;
    Span(); // 禁用默认构造函数

public:
    // 正统 Canonical Form
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &assign);
    ~Span();

    // 添加数字
    void addNumber(int newNum);
    void addNumbers(const std::vector<int> &vector); // 改为引用避免拷贝

    // 计算跨度
    int shortestSpan() const;
    int longestSpan() const;

    void print() const;

    // 异常类
    class SpanFullException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class SpanTooSmallException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif
