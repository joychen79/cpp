/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:35:29 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int	main()
{
	Base	*new_base = generate();
	identify(*new_base);
	identify(new_base);
	delete new_base;
	std::cout << "-----------------------------------\n";
	Base	*b = new B();
	identify(*b);
	identify(b);
	delete b;
	std::cout << "-----------------------------------\n";
	Base	*c = new C();
	identify(*c);
	identify(c);
	delete c;
	std::cout << "-----------------------------------\n";
	Base	*a = new A();
	identify(*a);
	identify(a);
	delete a;
	return (0);
}

/*#include "functions.hpp"



 * 测试程序
 * 功能：
 * - 随机生成对象
 * - 显式创建A、B、C对象
 * - 分别调用identify(Base* p)和identify(Base& p)
 

int main()
{
    srand(static_cast<unsigned int>(time(NULL)));

    Base* obj = generate();
    identify(*obj); // reference version
    identify(obj);  // pointer version
    delete obj;

    std::cout << "-----------------------------------\n";

    Base* b = new B();
    identify(*b);
    identify(b);
    delete b;

    std::cout << "-----------------------------------\n";

    Base* c = new C();
    identify(*c);
    identify(c);
    delete c;

    std::cout << "-----------------------------------\n";

    Base* a = new A();
    identify(*a);
    identify(a);
    delete a;

    return 0;
}*/