/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:11:12 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:32:07 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base(){};
};



#endif*/

/*
 * Base类
 * 功能：
 * - 作为基类
 * - 只有一个public虚析构函数
 * - 定义纯虚函数identify()，用于识别实际类型（多态）
 */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
public:
    virtual ~Base() {}
    virtual void identify() = 0; // pure virtual for reference identification
};

#endif