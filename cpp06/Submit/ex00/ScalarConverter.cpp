/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:32:05 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/29 18:09:23 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>
#include <cctype>
#include <limits>

static bool isCharLiteral(const std::string &literal)
{
    return (literal.length() == 1 && !std::isdigit(literal[0]));
}

static bool isValidNumber(const std::string &literal)
{
    if (literal.empty()) return false;

    size_t i = 0;
    if (literal[i] == '+' || literal[i] == '-') 
		i++;
    if (i == literal.length()) 
		return false;

    int dot = 0;
    int digits = 0;

    for (; i < literal.length(); ++i)
    {
        char c = literal[i];

        if (std::isdigit(c))
        {
            digits++;
            continue;
        }
        else if (c == '.')
        {
            if (dot) 
				return false;
            dot = 1;
            continue;
        }
        else if ((c == 'f' || c == 'F') && i == literal.length() - 1)
        {
            if (digits == 0) 
				return false;
            return true;
        }
        else
            return false;
    }

    return digits > 0;
}

static bool handleSpecial(const std::string &literal)
{
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
        return false;
    }
    if (literal == "+inf" || literal == "+inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
        return false;
    }
    if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
        return false;
    }
    return true;
}

static void printMessages(char c, int i, float f, double d, const std::string &literal)
{
    if (i < 0 || i > 127) std::cout << "char: impossible\n";
    else if (i < 32 || i > 126) std::cout << "char: Non displayable\n";
    else std::cout << "char: " << c << "\n";

    std::cout << "int: " << i << "\n";

    size_t dot = literal.find('.');
    if (dot == std::string::npos || literal[dot + 1] == '0')
    {
        std::cout << "float: " << f << ".0f\n";
        std::cout << "double: " << d << ".0\n";
    }
    else
    {
        std::cout << "float: " << f << "f\n";
        std::cout << "double: " << d << "\n";
    }
}
ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}
void ScalarConverter::convert(const std::string &literal)
{
    if (literal.empty())
    {
        std::cerr << "Error: empty input.\n";
        return;
    }
    if (isCharLiteral(literal))
    {
        char cval = literal[0];
        int ival = static_cast<int>(cval);
        float fval = static_cast<float>(cval);
        double dval = static_cast<double>(cval);

        printMessages(cval, ival, fval, dval, literal);
        return;
    }
    if (!handleSpecial(literal))
        return;
    if (!isValidNumber(literal))
    {
        std::cerr << "Error: Your input is not a valid number.\n";
        return;
    }
    long lval = std::atol(literal.c_str());
    if (lval > std::numeric_limits<int>::max() || lval < std::numeric_limits<int>::min())
    {
        std::cerr << "Error: Input exceeds int range.\n";
        return;
    }

    int ival = static_cast<int>(lval);
    char cval = static_cast<char>(ival);
    float fval = static_cast<float>(std::atof(literal.c_str()));
    double dval = std::atof(literal.c_str());

    printMessages(cval, ival, fval, dval, literal);
}
