/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:26:29 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/13 17:09:13 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(T &))
{
   if (!array || len <= 0)
    {
        std::cout << "Invalid array or length" << std::endl;
        return; 
    }

    for (int i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void iter(const T *array, int len, void (*f)(const T &))
{
    if (!array || len <= 0)
    {
        std::cout << "Invalid array or length" << std::endl;
        return;
    }

    for (int i = 0; i < len; i++)
        f(array[i]);
}

#endif