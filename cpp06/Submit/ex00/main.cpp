/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:30:46 by jingchen          #+#    #+#             */
/*   Updated: 2025/09/06 18:33:36 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Usage: ./Convert <literal1> [literal2 ...]\n";
        return 1;
    }

    for (int i = 1; i < argc; ++i)
        ScalarConverter::convert(argv[i]);

    return 0;
}
