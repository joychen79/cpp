/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:26:23 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:26:54 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void testFun(T &x)
{
	std::cout << x << std::endl;
}

int main()
{
	{
		int arr[] = {1, 2, 3, 4, 5};
		iter(arr, 5, testFun);
	}
	std::cout << "__________________" << std::endl;
	{
		char arr[] = {'a', 'b', 'c'};
		iter(arr, 3, testFun);
	}
	std::cout << "__________________" << std::endl;
	{
		float arr[] = {78.45f, 42.69f, 85.1f};
		iter(arr, 3, testFun);
	}
	return 0;
}