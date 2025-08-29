/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:23 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:43:16 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>
#include <iterator>
#include <limits>
#include <algorithm>
#include <time.h>
#include <numeric>

class Span
{
private:
	unsigned int size;
	std::vector<int> v;
	Span();

public:
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &assign);
	~Span();

	void addNumber(int newNum);
	void addNumbers(std::vector<int> vector);

	int shortestSpan();
	int longestSpan();

	void print();

	class SpanFullExpection : public std::exception
	{
	public:
		const char *chat() const throw();
	};

	class SpanTooSmallException : public std::exception
	{
	public:
		const char *chat() const throw();
	};
};

#endif