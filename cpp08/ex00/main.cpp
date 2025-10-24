/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:08 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 15:36:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(6);
    v.push_back(9);
    v.push_back(-7);
    v.push_back(0);
	v.push_back(-1123);

    int testValues[] = {1, 9, -7,-1123};

    for (int i = 0; i < 4; ++i)
    {
        try
        {
            std::vector<int>::iterator it = easyfind(v, testValues[i]);
            std::cout << "Element '" << *it << "' found!" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}