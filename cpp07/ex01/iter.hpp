/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:26:29 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:26:43 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>

template <typename T>
void iter(T *array, int len, void (*f)(const T &))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}

#endif