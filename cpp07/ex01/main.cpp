/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:26:23 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/13 17:28:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

template <typename T>
void increment(T &x)
{
    x += 1;
}

int main()
{
    int arr1[] = {1, 2, 3};
    iter(arr1, 3, print);     
    iter(arr1, 3, increment);
    iter(arr1, 3, print); 

    std::string arr2[] = {"a", "b", "c"};
    iter(arr2, 3, print); 

    return 0;
}