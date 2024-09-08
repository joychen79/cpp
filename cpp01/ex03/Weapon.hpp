/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:48:36 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 20:32:45 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private: 
        std::string _Weapontype;
    public:
        Weapon(std::string Weapontype);
        ~Weapon();
        const std::string &getweapontype();
        void    setType(std::string weapontype); 
};

#endif