/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:51 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 18:20:03 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &assigned);
        ~Dog();

        void makeSound() const;
};

#endif
