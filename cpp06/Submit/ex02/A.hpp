/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:03:44 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 18:33:49 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
#include <iostream>

class A : public Base
{
public:
    void identify() const { std::cout << "A" << std::endl; }
};

#endif