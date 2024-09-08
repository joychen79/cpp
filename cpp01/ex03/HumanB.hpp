/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:15:26 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 20:34:03 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string  _name;
        Weapon  *_weaponB;
    public:
        HumanB(std::string name);
        ~HumanB();
        void  setWeapon(Weapon &weaponB); 
        void attack();        
};
#endif