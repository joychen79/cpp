/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:55:27 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 17:55:28 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

void Zombie::setname(std::string name)
{
    this->name = name;
}
Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *_zombie;
    
    _zombie = new Zombie[N];
    
    if(N <= 0)
        return(NULL);
    for(int i = 0; i < N; i++)
        _zombie[i].setname(name);
    return(_zombie);
}