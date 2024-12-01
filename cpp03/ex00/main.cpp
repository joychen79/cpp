/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:13:56 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/06 17:38:50 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    /*ClapTrap a = ClapTrap();
	ClapTrap p = ClapTrap("P-body");

	a.attack("P-body");
	p.takeDamage(1);
	p.beRepaired(1);
	a.attack("P-body");
	p.takeDamage(1);
	a.attack("P-body");
	p.takeDamage(1);
	p.beRepaired(1);
	p.beRepaired(1);
	a.attack("P-body");
	p.takeDamage(2);
	std::cout << "P-body: 'Your attacks are not very effective ATLAS'" << std::endl;*/

	ClapTrap bob = ClapTrap();
	ClapTrap mike = ClapTrap("Mike");
	ClapTrap mike2 = ClapTrap(mike);
	bob.attack("Mike");
	mike.takeDamage(2);
	mike.beRepaired(7);
	mike2.takeDamage(5);
	mike2.attack("Bob");
	return (0);
}