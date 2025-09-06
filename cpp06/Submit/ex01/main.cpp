/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 18:07:47 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:24:44 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *ptr = new Data(42);

    std::cout << "Original pointer:   " << ptr 
              << " -> value: " << ptr->getMembers() << std::endl;

    uintptr_t raw = Serializer::serialize(ptr);
    std::cout << "Serialized value:   " << raw << std::endl;

    Data *ptr_des = Serializer::deserialize(raw);
    std::cout << "Deserialized ptr:   " << ptr_des 
              << " -> value: " << ptr_des->getMembers() << std::endl;

    if (ptr == ptr_des)
        std::cout << "Pointer restored correctly!" << std::endl;
    else
        std::cout << "Pointer mismatch!" << std::endl;

    delete ptr;
    return 0;
}