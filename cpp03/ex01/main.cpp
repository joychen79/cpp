/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:13:56 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/21 18:31:12 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	/*ClapTrap a = ClapTrap("ATLAS");
	ScavTrap p = ScavTrap("P-body");

	p.guardGate();
	a.attack("P-body");
	p.takeDamage(0);
	std::cout << "P-body: 'Now it's my turn'" << std::endl;
	p.attack("ATLAS");
	a.takeDamage(10);
	a.attack("P-body");
	p.beRepaired(1);
	p.beRepaired(1);*/

	/*ScavTrap robot("Trap");

	robot.attack("Clap");
	robot.attack("Clap");
	robot.attack("Clap");
	robot.takeDamage(200);
	robot.beRepaired(40);
	robot.guardGate();*/
	
	ScavTrap noOne = ScavTrap();
	ScavTrap jim = ScavTrap("Jim");
	ScavTrap jim2 = ScavTrap(jim);

	for (int i = 0; i < 51; i++)
	{
		jim.attack("you");
	}
	jim2.attack("me");
	jim2.guardGate();
	noOne.guardGate();
	jim.beRepaired(5);
	
	return (0);
}