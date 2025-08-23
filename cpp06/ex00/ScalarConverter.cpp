/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingchen <jingchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 17:32:05 by jingchen          #+#    #+#             */
/*   Updated: 2025/08/23 20:05:52 by jingchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*ScalarConverter::~ScalarConverter() {};

static int SCIsChar(const std::string& input)
{
	if (input.length() == 1 && (input[0] < '0' || input[0] > '9'))
		return (1);
	return (0);
}

static int SCIsInt(const std::string& input)
{
	size_t i = 0;

	if ((input[0] == '+' || input[0] == '-') && input.length() > 1)
		i++;
	while (i < input.length())
	{
		if (input[i] < '0' || input[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int SCIsFloat(const std::string& input)
{
	size_t i = 0;
	size_t dot = -1;

	if (input == "nanf" || input == "+inff" || input == "-inff")
		return (1);
	if (input[input.length() - 1] != 'f')
		return (0);
	dot = input.find('.');
	if (dot == std::string::npos || dot != input.rfind('.'))
		return (0);
	if ((input[0] == '+' || input[0] == '-') && input.length() > 1)
		i++;
	while (i < input.length() - 1)
	{
		if ((input[i] < '0' || input[i] > '9') && dot != i)
			return (0);
		i++;
	}
	return (1);
}

static int SCIsDouble(const std::string& input)
{
	size_t i = 0;
	size_t dot = -1;

	if (input == "nan" || input == "+inf" || input == "-inf")
		return (1);
	dot = input.find('.');
	if (dot == std::string::npos || dot != input.rfind('.'))
		return (0);
	while (i < input.length())
	{
		if ((input[i] < '0' || input[i] > '9') && dot != i)
			return (0);
		i++;
	}
	return (1);
}

static void printChar(const std::string& input)
{
	char c;

	c = *input.c_str();
	std::cout << "As char: \"" << c << "\"" << std::endl;
	std::cout << "As int: " << static_cast<int>(c) << std::endl;
	std::cout << "As float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "As double: " << static_cast<double>(c) << ".0" << std::endl;
}

static void printInt(const std::string& input)
{
	long i;

	i = std::atol(input.c_str());

	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
		std::cout << "Overflowed int type." << std::endl;
	else
	{
		std::cout << "As char: ";
		if (i >= 32 && i <= 126)
			std::cout << "\"" << static_cast<char>(i) << "\"" << std::endl;
		else
			std::cout << "Not printable." << std::endl;
		std::cout << "As int: " << i << std::endl;
		std::cout << "As float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "As double: " << static_cast<double>(i) << ".0" << std::endl;
	}
}

static void printFloat(const std::string& input)
{
	float f;
	bool nc = true;

	if (input == "nanf")
		f = 0.0f / 0.0f;
	else if (input == "+inff")
		f = 1.0f / 0.0f;
	else if (input == "-inff")
		f = -1.0f / 0.0f;
	else
	{
		nc = false;
		f = static_cast<float>(std::atof(input.c_str()));
	}
	std::cout << "As char: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else if (f >= 32 && f <= 126)
		std::cout << "\"" << static_cast<char>(f) << "\"" << std::endl;
	else
		std::cout << "Not printable." << std::endl;
	std::cout << "As int: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "As float: " << std::fixed << std::setprecision(2) << f << "f" << std::endl;
	std::cout << "As double: " << static_cast<double>(f) << std::endl;
}

static void printDouble(const std::string& input)
{
	double d;
	bool nc = true;

	if (input == "nan")
		d = 0.0 / 0.0;
	else if (input == "+inf")
		d = 1.0 / 0.0;
	else if (input == "-inf")
		d = -1.0 / 0.0;
	else
	{
		nc = false;
		d = std::atof(input.c_str());
	}
	std::cout << "As char: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else if (d >= 32 && d <= 126)
		std::cout << "\"" << static_cast<char>(d) << "\"" << std::endl;
	else
		std::cout << "Not printable." << std::endl;
	std::cout << "As int: ";
	if (nc)
		std::cout << "Not convertible." << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
	std::cout << "As float: " << std::setprecision(2) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "As double: " << std::setprecision(2) << d << std::endl;
}

void ScalarConverter::convert(const std::string& input)
{
	if (SCIsChar(input))
		printChar(input);
	else if (SCIsInt(input))
		printInt(input);
	else if (SCIsFloat(input))
		printFloat(input);
	else if (SCIsDouble(input))
		printDouble(input);
	else
		std::cout << "Error: Invalid input" << std::endl;
}*/


/*#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return (*this);
}

int	chek(std::string literal)
{
	int i = 0;
	int	flag_p = 0;

	while(literal[i])
	{
		if ((literal[i] == '-' || literal[i] == '+') && i == 0 && std::isdigit(literal[i + 1]))
			i++;
		if (literal[i] == '.' && std::isdigit(literal[i + 1]) && i != 0 && flag_p == 0)
		{
			i++;
			flag_p++;
		}
		if ((literal[i] == 'f' || literal[i] == 'F' || literal[i] == 'd' || literal[i] == 'D') 
			&& !literal[i + 1] && i != 0 && std::isdigit(literal[i - 1]))
		{
			i++;
			break;
		}
		if (std::isdigit(literal[i]))
		{
			i++;
			if (!literal[i])
				break;
		}
		else
			return (0);
	}
	return (1);
}

int	except_nan(std::string literal)
{
	if (literal == "nan" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (0);
	}
	if (literal == "+inf" || literal == "-inf" || literal == "+inff" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return (0);
	}
	return (1);
}

void	messages(char num_char, int num_int, float num_float, double num_double, std::string literal)
{
	size_t	ptr = literal.find('.');

	if (literal[0] == '-')
		std::cout << "char: impossible" << std::endl;
	else if (num_int < 32 || num_int > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << num_char << std::endl;
	std::cout << "int: " << num_int << std::endl;
	if (ptr == std::string::npos)
	{
		std::cout << "float: " << num_float << ".0f" << std::endl;
		std::cout << "double: " << num_double << ".0" << std::endl;
	}
	else if (ptr != std::string::npos && literal[ptr + 1] == '0')
	{
		std::cout << "float: " << num_float << ".0f" << std::endl;
		std::cout << "double: " << num_double << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << num_float << "f" << std::endl;
		std::cout << "double: " << num_double << std::endl;
	}
}

void	ScalarConverter::convert(std::string literal)
{
	char		num_char;
	int			num_int;
	float		num_float;
	double		num_double;
	long int	max_int;

	if (!except_nan(literal))
		return ;
	if (chek(literal))
	{
		max_int = std::atol(literal.c_str());
		if (max_int > 2147483647 || max_int < -2147483648)
		{
			std::cerr << "Error: Input exceeds int value." << std::endl;
			return ;
		}
		num_int = std::atoi(literal.c_str());
		num_char = static_cast<char>(num_int);
		num_float = static_cast<float>(std::atof(literal.c_str()));
		num_double = std::atof(literal.c_str());
		messages(num_char, num_int, num_float, num_double, literal);
	}
	else
		std::cerr << "Error. Your input is not a number." << std::endl;
}*/

/*#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { *this = other; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return *this; }

static int isNumber(const std::string &literal)
{
    size_t i = 0;
    int dot = 0;

    if (literal[i] == '+' || literal[i] == '-') i++;
    if (literal[i] == '\0') return 0;

    for (; i < literal.length(); ++i)
    {
        if (std::isdigit(literal[i])) continue;
        else if (literal[i] == '.' && dot == 0) dot = 1;
        else if ((literal[i] == 'f' || literal[i] == 'F') && i == literal.length() - 1) return 1;
        else return 0;
    }
    return 1;
}

static int handleSpecial(const std::string &literal)
{
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
        return 0;
    }
    if (literal == "+inf" || literal == "+inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
        return 0;
    }
    if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
        return 0;
    }
    return 1;
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

void ScalarConverter::convert(const std::string &literal)
{
    if (!handleSpecial(literal)) return;
    if (!isNumber(literal.c_str()))
    {
        std::cerr << "Error: Your input is not a valid number.\n";
        return;
    }

    long lval = std::atol(literal.c_str());
    if (lval > 2147483647 || lval < -2147483648)
    {
        std::cerr << "Error: Input exceeds int range.\n";
        return;
    }

    int ival = std::atoi(literal.c_str());
    char cval = static_cast<char>(ival);
    float fval = static_cast<float>(std::atof(literal.c_str()));
    double dval = std::atof(literal.c_str());

    printMessages(cval, ival, fval, dval, literal);
}
*/


#include "ScalarConverter.hpp"
#include <cstdlib>
#include <cctype>
#include <limits>

// ===== Check if literal is a char literal (single character) =====
static int isCharLiteral(const std::string &literal)
{
    return (literal.length() == 1 && !std::isdigit(literal[0]));
}

// ===== Check if literal is a valid numeric literal =====
static int isValidNumber(const std::string &literal)
{
    if (literal.empty()) return 0;

    size_t i = 0;
    if (literal[i] == '+' || literal[i] == '-') i++;
    if (i == literal.length()) return 0;

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
            if (dot) return 0; // more than one dot
            dot = 1;
            continue;
        }
        else if ((c == 'f' || c == 'F') && i == literal.length() - 1)
        {
            if (digits == 0) return 0; // must have digits before f
            return 1;
        }
        else
            return 0; // invalid character
    }

    return digits > 0;
}

// ===== Handle special pseudo-literals =====
static int handleSpecial(const std::string &literal)
{
    if (literal == "nan" || literal == "nanf")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
        return 0;
    }
    if (literal == "+inf" || literal == "+inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
        return 0;
    }
    if (literal == "-inf" || literal == "-inff")
    {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
        return 0;
    }
    return 1;
}

// ===== Print conversion results =====
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

// ===== Static convert method =====
void ScalarConverter::convert(const std::string &literal)
{
    if (literal.empty())
    {
        std::cerr << "Error: empty input.\n";
        return;
    }

    // 1) Handle char literals (single non-digit character)
    if (isCharLiteral(literal))
    {
        char cval = literal[0];
        int ival = static_cast<int>(cval);
        float fval = static_cast<float>(cval);
        double dval = static_cast<double>(cval);

        printMessages(cval, ival, fval, dval, literal);
        return;
    }

    // 2) Handle special pseudo-literals (nan, inf)
    if (!handleSpecial(literal))
        return;

    // 3) Handle numeric literals
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
