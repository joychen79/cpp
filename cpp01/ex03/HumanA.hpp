/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:08:28 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/07 20:33:19 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{

    private:
        std::string _name;
        Weapon  &_weaponA;
    
    public:
        HumanA(std::string name, Weapon &_weaponA);
        ~HumanA();
        void attack();
};
#endif