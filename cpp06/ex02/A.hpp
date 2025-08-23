/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:03:44 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:32:34 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef A_HPP
#define A_HPP

#include <iostream>
#include "Base.hpp"

class A : public Base
{};

#endif*/


/*
 * A类
 * 功能：
 * - 继承自Base
 * - 实现identify()函数，打印"A"
 */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
#include <iostream>

class A : public Base
{
public:
    void identify() { std::cout << "A" << std::endl; }
};

#endif