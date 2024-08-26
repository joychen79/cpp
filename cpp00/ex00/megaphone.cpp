/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:50:17 by jingchen          #+#    #+#             */
/*   Updated: 2024/08/26 17:50:22 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if(ac < 2)
        std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    else
    {
        while(av[i])
        {
              j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                {
                    av[i][j] -= 32;
                }
                std::cout << (char)(av[i][j]);
                j++;
            }
            std::cout << " ";
          i++;
        }
    }
    std::cout << std::endl;
    return 0;
}
