/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:14 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 18:27:09 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <ctime> 
#include <iostream>

Base* generate()
{
    int i = rand() % 3;
    if (i == 0) return new A();
    if (i == 1) return new B();
    return new C();
}

void identify(Base& p)
{
    p.identify();
}

void identify(Base* p)
{
    if (!p) 
        return;
    identify(*p);
}