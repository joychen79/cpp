/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:15 by jingchen          #+#    #+#             */
/*   Updated: 2024/11/01 14:11:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	std::cout << "------------------" << std::endl;
	const WrongAnimal *incorrect1 = new WrongAnimal();
	const WrongAnimal *incorrect2 = new WrongCat();
	std::cout << incorrect1->getType() << std::endl;
	std::cout << incorrect2->getType() << std::endl;
	incorrect1->makeSound();
	incorrect2->makeSound();
	delete incorrect1;
	delete incorrect2;

    /*const WrongAnimal *WrongMeta = new WrongAnimal();
	const WrongAnimal *_j = new WrongCat();
	const WrongCat *g = new WrongCat();
	g->makeSound();
	std::cout << WrongMeta->getType() << std::endl;
	std::cout << _j->getType() << std::endl;
	WrongMeta->makeSound();
	_j->makeSound();
	delete g;
	delete WrongMeta;
	delete _j;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;*/

	return 0;
}