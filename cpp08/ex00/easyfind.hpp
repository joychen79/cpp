/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:05 by jingchen          #+#    #+#             */
/*   Updated: 2025/10/24 17:25:34 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // std::find
#include <exception>

// Exception class (declaration only; implementation in easyfind.cpp)
class NotFoundException : public std::exception
{
public:
    virtual const char *what() const throw();
};

// Non-const overload: returns iterator
template <typename T>
typename T::iterator easyfind(T &container, int val)
{
    typename T::iterator it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw NotFoundException();
    return it;
}

// Const overload: returns const_iterator
template <typename T>
typename T::const_iterator easyfind(const T &container, int val)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), val);
    if (it == container.end())
        throw NotFoundException();
    return it;
}

#endif // EASYFIND_HPP
