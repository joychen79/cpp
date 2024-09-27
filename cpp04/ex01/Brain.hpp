/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:53:16 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/27 18:21:50 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string _ideas[100];
    
    public:
        Brain();
        Brain (const Brain &copy);
        Brain &operator=(const Brain &assigned);
        ~Brain();    
};

#endif