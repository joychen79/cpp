/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:25:05 by jingchen          #+#    #+#             */
/*   Updated: 2024/12/27 14:52:34 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void leaks()
{
	system("leaks bureaucrat");
} 

int main(void)
{
    atexit(leaks);
    Bureaucrat *bob = new Bureaucrat("Bon", 2);
    std::cout << bob->getName() << std::endl;
    std::out << bob->getGrade() << std::endl;
    bob->IncrementGrade();
    try
    {
           bob->IncrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << *bob << std::endl;
    delete bob;
    return 0;   
}