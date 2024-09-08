/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:00:11 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/08 13:33:21 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:
            void debug(void);
            void info(void);
            void warning(void);
            void error(void); 
    public:
            Harl();
            ~Harl();
            void complain( std::string level);
};
#endif