/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:41:05 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:42:07 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>

class NotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return "\033[0;31mElement not found\033[0m";
	}
};

template <typename T>
void easyfind(T &array, int val)
{
	typename T::iterator it;
	it = std::find(array.begin(), array.end(), val);
	if (it == array.end() || *it != val)
		throw NotFoundException();
	std::cout << "\033[0;32mElement '" << val << "' found!\033[0m" << std::endl;
}

#endif