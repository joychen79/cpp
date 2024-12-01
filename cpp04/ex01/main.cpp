/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:15 by jingchen          #+#    #+#             */
/*   Updated: 2024/10/27 11:33:44 by jingchen         ###   ########.fr       */
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
	Animal *animalList[100];
	// half of the list are Dogs
	for (int i = 0; i < 50; i++)
		animalList[i] = new Dog();
	// other half are Cats
	for (int i = 50; i < 100; i++)
		animalList[i] = new Cat();

	std::cout << "-------------------" << std::endl;

	std::cout << animalList[0]->getType() << std::endl;
	std::cout << animalList[50]->getType() << std::endl;

	Dog *testDog1 = new Dog();
	Animal testDog2 = Dog(*testDog1);
	std::cout << testDog2.getType() << std::endl;
	testDog2.makeSound();

	delete testDog1;

	std::cout << "-------------------" << std::endl;

	// delete all animals in the list
	for (int i = 0; i < 100; i++)
		delete animalList[i];
		
	return 0;

}