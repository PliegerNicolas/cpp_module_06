/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/10/15 05:47:37 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

# define GREEN "\033[32m"
# define RED "\033[31m"
# define CLEAR "\033[0m"

/* static_cast operator is a safer alternative to C-style casting. */
/* It can promote to larger sizes when data loss is unlikely. */
/* It doesn't do runtime conversion so it's not suitable for pointers and classes. */

static void	convert(const std::string str)
{
	std::cout << GREEN << "Given ";
	std::cout << str << ":" << CLEAR << std::endl;
	ScalarConverter::convert(str);
}

static void	testSubject(void)
{
	std::cout << "\033[36;4m" << "testSubject():" << CLEAR << std::endl;
	std::cout << std::endl;

	convert("0");
	convert("nan");
	convert("*");

	std::cout << std::endl;
}

static void	testChars(void)
{
	std::cout << "\033[36;4m" << "testChars():" << CLEAR << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Given empty string:" << CLEAR << std::endl;
	ScalarConverter::convert("");
	convert("a");
	convert("'a'");
	convert("'A'");
	convert("0");
	convert("'0'");
	convert("1");
	convert("'1'");
	convert("32");
	convert("-32");
	convert("126");
	convert("~");
	convert("'~'");
	convert("€");
	convert("'€'");
	convert("128");
	convert("-128");
	convert("127");

	std::cout << std::endl;
}

static void	testFloat(void)
{
	std::cout << "\033[36;4m" << "testFloat():" << CLEAR << std::endl;
	std::cout << std::endl;

	convert("-42.24");
	convert("-42.24F");
	convert("-42.24f");
	convert("-42.2.4f");
	convert("-42..24f");
	convert("42.24");
	convert("+42.24");
	convert("0.0");
	convert("123456789123456789.123456789123456789");

	std::cout << std::endl;
}

static void	testException(void)
{
	std::cout << "\033[36;4m" << "testException():" << CLEAR << std::endl;
	std::cout << std::endl;

	convert("inf");
	convert("-inf");
	convert("inff");
	convert("-inff");
	convert("-INF");
	convert("nan");
	convert("-nan");
	convert("nanf");
	convert("-nanf");

	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		testSubject();
		testChars();
		testFloat();
		testException();
	}
	else if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
	{
		std::cout << RED;
		std::cout << "Error: One or two arguments expected.";
		std::cout << CLEAR << std::endl;
		return (1);
	}
	return (0);
}
