/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:20:49 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:26:33 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef B_HPP
#define B_HPP

#include <iostream>
#include "Base.hpp"

class B : public Base
{};

#endif*/

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"
#include <iostream>

class B : public Base
{
public:
    void identify() { std::cout << "B" << std::endl; }
};

#endif