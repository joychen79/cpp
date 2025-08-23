/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:11 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:26:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef C_HPP
#define C_HPP

#include <iostream>
#include "Base.hpp"

class C : public Base
{};

#endif*/

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"
#include <iostream>

class C : public Base
{
public:
    void identify() { std::cout << "C" << std::endl; }
};

#endif