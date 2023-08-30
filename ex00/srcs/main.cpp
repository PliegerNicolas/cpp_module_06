/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 14:43:10 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

# define GREEN "\033[32m"
# define RED "\033[31m"
# define CLEAR "\033[0m"

static void	testSubject(void)
{
	std::cout << "\033[36;4m" << "testSubject():" << CLEAR << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Given '0':" << CLEAR << std::endl;
	ScalarConverter::convert("0");
	std::cout << GREEN << "Given 'O':" << CLEAR << std::endl;
	ScalarConverter::convert("O");
	std::cout << GREEN << "Given 'nan':" << CLEAR << std::endl;
	ScalarConverter::convert("nan");
	std::cout << GREEN << "Given '*':" << CLEAR << std::endl;
	ScalarConverter::convert("*");

	std::cout << std::endl;
}

static void	testChars(void)
{
	std::cout << "\033[36;4m" << "testChars():" << CLEAR << std::endl;
	std::cout << std::endl;

	std::cout << GREEN << "Given empty string:" << CLEAR << std::endl;
	ScalarConverter::convert("");
	std::cout << GREEN << "Given 'a':" << CLEAR << std::endl;
	ScalarConverter::convert("a");
	std::cout << GREEN << "Given 'A':" << CLEAR << std::endl;
	ScalarConverter::convert("A");
	std::cout << GREEN << "Given '1':" << CLEAR << std::endl;
	ScalarConverter::convert("1");
	std::cout << GREEN << "Given '0':" << CLEAR << std::endl;
	ScalarConverter::convert("0");
	std::cout << GREEN << "Given '32':" << CLEAR << std::endl;
	ScalarConverter::convert("32");
	std::cout << GREEN << "Given '126':" << CLEAR << std::endl;
	ScalarConverter::convert("126");
	std::cout << GREEN << "Given '~':" << CLEAR << std::endl;
	ScalarConverter::convert("~");
	std::cout << GREEN << "Given '€':" << CLEAR << std::endl;
	ScalarConverter::convert("€");
	std::cout << GREEN << "Given '128':" << CLEAR << std::endl;
	ScalarConverter::convert("128");
	std::cout << GREEN << "Given '-128':" << CLEAR << std::endl;
	ScalarConverter::convert("-128");
	std::cout << GREEN << "Given '127':" << CLEAR << std::endl;
	ScalarConverter::convert("127");

	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		testSubject();
		testChars();
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
