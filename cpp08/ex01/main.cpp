/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:14 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 17:01:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main()
{
    int len = 10000; 
    Span sp(len);

    srand(time(NULL));
    for (int i = 0; i < len; i++)
    {
        int rnd = rand() % 10000;
        sp.addNumber(rnd);
    }

    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

    return 0;
}*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int main()
{
    const int len = 10000;
    Span sp(len);

    srand(time(NULL));
    for (int i = 0; i < len; ++i)
    {
        sp.addNumber(rand() % 10000);
    }

    try
    {
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
