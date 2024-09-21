/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 17:45:43 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/20 19:26:27 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hit;
        unsigned int _energy;
        unsigned int _damage;
    
    public:
        ClapTrap();    // Creat a default constrctor.
        ClapTrap(const ClapTrap &copy);  // Creat a reference of a constructor.
        ClapTrap &operator=(const ClapTrap &assigned);  // The way(rule) to assign a reference to a constructor.
        ~ClapTrap(); //Destroy a constructor.
        
        ClapTrap(std::string name); // Creat another constructor with name.
      
    // FUNTIONS
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif