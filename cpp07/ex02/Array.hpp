/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:31:46 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 19:33:44 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>

template <typename T>
class Array
{
private:
	T *array;
	unsigned int length;

public:
	Array() : array(new T[0]), length(0) {}

	Array(unsigned int n)
	{
		this->length = n;
		this->array = new T[this->length];
		for (unsigned int i = 0; i < this->length; i++)
			this->array[i] = T();
	}

	Array(const Array &copy)
	{
		*this = copy;
	}

	Array &operator=(const Array &assign)
	{
		if (this != &assign)
		{
			this->length = assign.length;
			this->array = new T[this->length];
			for (unsigned int i = 0; i < this->length; i++)
				this->array[i] = assign.array[i];
		}
	}

	~Array()
	{
		delete[] this->array;
	}

	T &operator[](unsigned int i)
	{
		if (i >= this->length)
			throw std::out_of_range("Index out of range");
		return this->array[i];
	}

	unsigned int size() const
	{
		return this->length;
	}
};

#endif