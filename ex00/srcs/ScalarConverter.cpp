/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:38:01 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 19:20:48 by nplieger         ###   ########.fr       */
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
	if (input.size() == 0)
		std::cerr << RED << "Error: empty string given" << CLEAR << std::endl;
	else if (input.size() == 1 && !std::isdigit(input.front()))
	{
		std::cout << "is char" << std::endl;
	}
	else
	{
		std::cout << "is not char" << std::endl;
	}
}

// Protected

// Private
