/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:13:56 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/06 17:48:31 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	
	FragTrap robot("Trap");

	robot.attack("Clap");
	robot.attack("Clap");
	robot.attack("Clap");
	robot.takeDamage(2);
	robot.beRepaired(1);
	robot.highFivesGuys();

	/*FragTrap a = FragTrap("ATLAS");
	ScavTrap p = ScavTrap("P-body");

	p.guardGate();
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	p.beRepaired(5);
	a.attack("P-body");
	p.takeDamage(30);
	a.attack("P-body");
	p.takeDamage(30);
	a.highFivesGuys();*/

	return (0);
}