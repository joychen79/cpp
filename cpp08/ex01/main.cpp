/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:14 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:42:47 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Span.hpp"

int main()
{
	int len = 50000;

	Span sp = Span(len);
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		int rnd = rand() % 100;
		sp.addNumber(rnd);
	}
	sp.print();
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	return 0;
}