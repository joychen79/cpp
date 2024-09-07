/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:07:52 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 18:41:55 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string Brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &Brain;
    std::string &stringREF = Brain;

    std::cout <<"The memory address of the string variable: " << &Brain << std::endl;
    std::cout <<"The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout <<"The memory address held by stringREF: " << &stringREF << std::endl;
    std::cout <<std::endl;

    std::cout <<"The value of the string variable: " << Brain << std::endl;
    std::cout <<"The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout <<"The value pointed to by stringREF: " << stringREF << std::endl;

    return(0);
}