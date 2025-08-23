/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:14 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:31:04 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib> // rand, srand
#include <ctime>   // time
#include <iostream>
/*
 * generate
 * 功能：随机生成A、B或C对象并返回Base指针
 */
Base* generate()
{
    int i = rand() % 3;
    if (i == 0) return new A();
    if (i == 1) return new B();
    return new C();
}
/*
 * identify(Base& p)
 * 功能：通过多态引用识别实际类型
 * 特点：不使用指针、不使用typeid
 */
void identify(Base& p)
{
    p.identify(); // uses virtual function
}
/*
 * identify(Base* p)
 * 功能：通过指针识别实际类型
 */
void identify(Base* p)
{
    if (!p) return;
    identify(*p); // reuse reference version
}