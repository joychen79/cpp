/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:46:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 19:46:45 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

/* void leaks(void)
{
	system("leaks materia");
} */

int main()
{
	// atexit(leaks);
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

/* int main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
} */