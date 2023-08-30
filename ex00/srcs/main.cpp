/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 14:06:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

# define GREEN "\033[32m"
# define RED "\033[31m"
# define CLEAR "\033[0m"

/*
static void	test(void)
{
	std::cout << GREEN << "Given 'a'" << CLEAR << std::endl;
	ScalarConverter::convert("a");
	std::cout << GREEN << "Given '*'" << CLEAR << std::endl;
	ScalarConverter::convert("*");

	std::cout << std::endl;

	std::cout << GREEN << "Given '48'" << CLEAR << std::endl;
	ScalarConverter::convert("48");
	std::cout << GREEN << "Given '60'" << CLEAR << std::endl;
	ScalarConverter::convert("60");
	std::cout << GREEN << "Given '<'" << CLEAR << std::endl;
	ScalarConverter::convert("<");
	std::cout << GREEN << "Given '32'" << CLEAR << std::endl;
	ScalarConverter::convert("32");
	std::cout << GREEN << "Given '126'" << CLEAR << std::endl;
	ScalarConverter::convert("126");

	std::cout << CLEAR << std::endl;
	std::cout << GREEN << "Given '33.0'" << CLEAR << std::endl;
	ScalarConverter::convert("33.0");
	std::cout << GREEN << "Given '33.5F'" << CLEAR << std::endl;
	ScalarConverter::convert("33.5F");
	std::cout << GREEN << "Given '+33.5f'" << CLEAR << std::endl;
	ScalarConverter::convert("+33.5f");
	std::cout << GREEN << "Given '+33.9f'" << CLEAR << std::endl;
	ScalarConverter::convert("+33.9f");

	std::cout << std::endl;

	std::cout << GREEN << "Given '0'" << CLEAR << std::endl;
	ScalarConverter::convert("0");
	std::cout << GREEN << "Given '5'" << CLEAR << std::endl;
	ScalarConverter::convert("5");
	std::cout << GREEN << "Given '-48'" << CLEAR << std::endl;
	ScalarConverter::convert("-48");
	std::cout << GREEN << "Given '-48.5f'" << CLEAR << std::endl;
	ScalarConverter::convert("-48.5f");
	std::cout << GREEN << "Given '™'" << CLEAR << std::endl;
	ScalarConverter::convert("™");
	std::cout << GREEN << "Given 127'" << CLEAR << std::endl;
	ScalarConverter::convert("127");
	std::cout << GREEN << "Given 'pomme'" << CLEAR << std::endl;
	ScalarConverter::convert("pomme");
	std::cout << GREEN << "Given '+3000000000000000.5f'" << CLEAR << std::endl;
	ScalarConverter::convert("+3000000000000000.5f");

	std::cout << std::endl;

	std::cout << GREEN << "given 'nan'" << CLEAR << std::endl;
	ScalarConverter::convert("nan");
	std::cout << GREEN << "given 'nanf'" << CLEAR << std::endl;
	ScalarConverter::convert("nanf");
	std::cout << GREEN << "given 'inf'" << CLEAR << std::endl;
	ScalarConverter::convert("inf");
	std::cout << GREEN << "given 'inff'" << CLEAR << std::endl;
	ScalarConverter::convert("inff");
	std::cout << GREEN << "given '-inf'" << CLEAR << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << GREEN << "given '+inff'" << CLEAR << std::endl;
	ScalarConverter::convert("+inff");
}
*/

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
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
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
