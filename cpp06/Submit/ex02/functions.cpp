/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:14 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:21:44 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>

Base* generate() 
{
    int r = rand() % 3;
    if (r == 0) return new A;
    else if (r == 1) return new B;
    else return new C;
}

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p)) std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p)) std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p)) std::cout << "C" << std::endl;
}

void identify(Base& p) 
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } 
    catch (...) {}

    try 
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } 
    catch (...) {}

    try 
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } 
    catch (...) {}
}
