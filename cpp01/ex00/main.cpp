/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:01:27 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/03 18:49:02 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*_zombie;

	_zombie = newZombie("Fii");
	_zombie->announce();
	delete	_zombie;
	randomChump("Fuu");
	return 0;
}