/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:46:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/11/01 14:03:32 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	AMateria *temp = new Ice();
	src->learnMateria(temp);
	delete temp;
	temp = new Cure();
	src->learnMateria(temp);
	delete temp;
	Character *me = new Character("me");
	AMateria *tmp;
	Character *bob = new Character("bob");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *bob);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *bob);
	Character *you = new Character(*me);
	me->unequip(1);
	you->use(0, *bob);
	you->use(1, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete you;
	delete src;
	delete tmp;
	return 0;
}
