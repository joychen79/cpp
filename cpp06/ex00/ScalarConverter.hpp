/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:31:28 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 19:48:40 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*# define SCALARCONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <limits>
# include <cstdlib>

class ScalarConverter
{
	public:
		static void convert(const std::string& input);
		~ScalarConverter();
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& orig);
		ScalarConverter& operator=(const ScalarConverter& orig);
};
#endif*/

/*#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cctype>

class ScalarConverter
{
	private:
		ScalarConverter();
	public:
		~ScalarConverter();

		ScalarConverter(const ScalarConverter &other);
		ScalarConverter	&operator=(const ScalarConverter &other);

		static void	convert(std::string literal);
};

#endif*/

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <cctype>
#include <cstdlib> // for atoi, atol, atof

class ScalarConverter
{
private:
    ScalarConverter();
public:
    ~ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter &operator=(const ScalarConverter &other);

    static void convert(const std::string &literal);
};

#endif