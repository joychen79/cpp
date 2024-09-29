/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:30:14 by jingchen          #+#    #+#             */
/*   Updated: 2024/09/14 13:07:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include<iostream>
# include <cmath>

class Fixed
{
    private:
        int val;
        static  const int bits = 8;
    
    public:
    // default constructor
        Fixed();
    // copy constructor
        Fixed(const Fixed &other);
    // copy assignment operator
        Fixed &operator = (const Fixed &other);
    // destructor
        ~Fixed();

        Fixed(const int number);
        Fixed(const float number);
        
        int getRawBit(void) const;
        void setRawBit(int const Raw);

        float toFloat(void) const;
        int toInt(void) const;

    
};
    std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif

