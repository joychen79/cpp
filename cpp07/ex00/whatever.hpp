/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:18:22 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/13 15:19:03 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T& min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
const T& max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif