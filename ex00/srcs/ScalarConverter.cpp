/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:38:01 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 13:52:29 by nplieger         ###   ########.fr       */
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
	if (input.size() == 1 && !std::isdigit(input.front()))
		charConversion(input[0]);
	else
		stringConversion(input);
}

// Protected

// Private

	/* Char */

void	ScalarConverter::checkCharConversion(const char &input)
{
	if (static_cast<int>(input) < 0
		|| static_cast<int>(input) > 255)
		throw ConversionImpossibleException();
	else if (!std::isprint(input))
		throw ConversionNonDisplayableException();
}

void	ScalarConverter::checkIntConversion(const double &value)
{
	if (value != value)
		throw ConversionImpossibleException();
	else if (value > std::numeric_limits<int>::max()
		|| value < std::numeric_limits<int>::min())
		throw ConversionImpossibleException();
}

void	ScalarConverter::charConversion(const char &input)
{
	try
	{
		checkCharConversion(input);
		std::cout << "To char : " << input << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "To char : " << e.what() << std::endl;
	}
	std::cout << "To int : " << static_cast<int>(input) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "To float : " << static_cast<float>(input) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "To double : " << static_cast<double>(input) << std::endl;
}

	/* String */

void	ScalarConverter::stringConversion(const std::string &input)
{
	double	value;

	try
	{
		checkString(input);
		value = std::strtod(input.c_str(), NULL);
	}
	catch (const std::exception &e)
	{
		std::cerr << "To char : " << e.what() << std::endl;
		std::cerr << "To int : " << e.what() << std::endl;
		std::cerr << "To float : " << e.what() << std::endl;
		std::cerr << "To double : " << e.what() << std::endl;
		return ;
	}

	try
	{
		ScalarConverter::checkIntConversion(value);
		ScalarConverter::checkCharConversion(value);
		std::cout << "To char : " << static_cast<char>(value) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "To char : " << e.what() << std::endl;
	}

	try
	{
		ScalarConverter::checkIntConversion(value);
		std::cout << "To int : " << static_cast<int>(value) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "To int : " << e.what() << std::endl;
	}

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "To float : " << static_cast<float>(value) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "To double : " << static_cast<double>(value) << std::endl;
}
