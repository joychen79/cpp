/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:08 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 16:56:22 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    try
    {
        std::vector<int> v;
        v.push_back(6);
        v.push_back(9);
        v.push_back(-7);
        v.push_back(0);
        v.push_back(-1123);

        int testValues[] = {1, 9, -7, -1123};

        for (int i = 0; i < 4; ++i)
        {
            try
            {
                std::vector<int>::iterator it = easyfind(v, testValues[i]);
                std::cout << "Element '" << *it << "' found in vector!" << std::endl;
            }
            catch (const std::exception &e)
            {
                std::cout << "vector: " << e.what() << std::endl;
            }
        }

        std::list<int> tmp;
        tmp.push_back(10);
        tmp.push_back(20);
        tmp.push_back(30);
        const std::list<int> lst = tmp;

        try
        {
            std::list<int>::const_iterator cit = easyfind(lst, 20);
            std::cout << "Element '" << *cit << "' found in const list!" << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << "list: " << e.what() << std::endl;
        }

        try
        {
            easyfind(lst, 99);
        }
        catch (const std::exception &e)
        {
            std::cout << "list (not found): " << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}


