/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:42:36 by jingchen          #+#    #+#             */
/*   Updated: 2024/11/01 11:15:39 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;
    
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &assigned);
        virtual ~Animal();
    
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
