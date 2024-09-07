/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:54:32 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 17:54:33 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie;
    
    zombie = zombieHorde(7, "hola");
    for(int i= 0; i < 7; i++)
        zombie[i].announce();
    delete[] zombie;
    return(0);
}