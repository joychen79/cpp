/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:49:45 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 17:50:51 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define    ZOMBIE_HPP
# include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        void   announce();
        void    setname(std::string name);             
};

Zombie *zombieHorde(int N, std::string name );

#endif