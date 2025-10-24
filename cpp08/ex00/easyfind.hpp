/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:05 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 15:34:55 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <algorithm> // std::find
#include <exception>

class NotFoundException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Element not found";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw NotFoundException();
    return it; // 返回找到的迭代器
}

#endif