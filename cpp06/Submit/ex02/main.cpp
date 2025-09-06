/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:21:20 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:21:18 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"
#include <cstdlib>
#include <ctime>

int main() 
{
    srand(time(NULL));

    Base* ptr = generate();

    identify(ptr);  
    identify(*ptr); 

    delete ptr;
    return 0;
}
