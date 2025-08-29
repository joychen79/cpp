/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:08:31 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 18:08:35 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h> // for uintptr_t
#include "Data.hpp"

class Serializer
{
	private:
		Serializer();                          // private constructor to prevent instantiation
		Serializer(const Serializer &other);   // prevent copy
		Serializer &operator=(const Serializer &other); // prevent assignment
		~Serializer();

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif