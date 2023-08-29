/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:38:01 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 14:09:05 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

/* Constructors & Destructors */

// Public

// Protected

// Private

ScalarConverter::ScalarConverter(void)
{
	std::cout << "\033[36;2m";
	std::cout << "ScalarConverter : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	std::cout << "\033[36;2m";
	std::cout << "ScalarConverter : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	(void)other;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &other)
{
	std::cout << "\033[36;2m";
	std::cout << "ScalarConverter : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other) {}
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "\033[36;2m";
	std::cout << "ScalarConverter : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member functions */

// Public

void	ScalarConverter::convert(const std::string &input)
{
	convertToChar(input);
	convertToInt(input);
	convertToFloat(input);
	convertToDouble(input);
}

// Protected

// Private

	/* Checks */

static std::string	lowercaseStringCpy(const std::string &src)
{
	std::string	dest;

	dest = src;
	for (size_t i = 0; i < dest.length(); ++i)
	{
		if (dest[i] >= 'A' && dest[i] <= 'Z')
			dest[i] += 32;
	}
	return (dest);
}

static bool	verifyStringFormat(const std::string &input)
{
	std::string			str;
	int					nbr_of_dots = 0;
	const std::string	validStrings[4] =
	{
		"nan",
		"nanf",
		"inf",
		"inff"
	};

	// Make a lowercased copy of the string.
	str = lowercaseStringCpy(input);
	// Remove potential leading sign
	if (str[0] == '+' || str[0] == '-')
		str.erase(0, 1);
	// Verify if it's exceptionnal value
	for (std::string validString : validStrings)
		if (str == validString)
			return (true);
	// Remove potential trailing 'f'
	if (str[str.size() - 1] == 'f')
		str.erase(str.size() - 1, 1);
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.' && nbr_of_dots == 0)
				nbr_of_dots++;
			else
				return (false);
		}
	}
	return (true);
}

void	ScalarConverter::checkConvertToChar(const std::string &input)
{
	long long int	val;

	if (input.size() == 0)
		throw ConversionImpossibleException("To char");
	else if (input.size() == 1 && !std::isdigit(input[0]))
	{
		if (!std::isprint(input[0]))
			throw ConversionNonDisplayableException("To char");
		return ;
	}
	else if (!verifyStringFormat(input))
		throw ConversionImpossibleException("To char");

	//if (input.find('.') != std::string::npos || input.find('e') != std::string::npos)
	//	val = std::atof(input.c_str());
	//else
	val = std::atoi(input.c_str());
	if (val < INT_MIN || val > INT_MAX)
		throw ConversionImpossibleException("To char");
	if (val < 0 || !std::isprint(val))
		throw ConversionNonDisplayableException("To char");
}

void	ScalarConverter::checkConvertToInt(const std::string &input)
{
	(void)input;
}

void	ScalarConverter::checkConvertToFloat(const std::string &input)
{
	(void)input;
}

void	ScalarConverter::checkConvertToDouble(const std::string &input)
{
	(void)input;
}

	/* Conversions */

void ScalarConverter::convertToChar(const std::string &input)
{
	char	value;

	try
	{
		checkConvertToChar(input);
		if (input.size() == 1 && !std::isdigit(input[0]))
			value = input[0];
		else
			value = std::atoi(input.c_str());
		std::cout << "To char : '" << value << "'" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void ScalarConverter::convertToInt(const std::string &input)
{
	(void)input;
}

void ScalarConverter::convertToFloat(const std::string &input)
{
	(void)input;
}

void ScalarConverter::convertToDouble(const std::string &input)
{
	(void)input;
}
