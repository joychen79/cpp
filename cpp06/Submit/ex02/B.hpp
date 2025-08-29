/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:20:49 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 18:33:44 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"
#include <iostream>

class B : public Base
{
public:
    void identify() const { std::cout << "B" << std::endl; }
};

#endif