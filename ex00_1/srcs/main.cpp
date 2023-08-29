/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 17:11:42 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

# define GREEN "\033[32m"
# define CLEAR "\033[0m"

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

int	main(int argc, char **argv)
{
	/*
	if (argc != 2)
	{
		std::cout << "\033[31mError: Two arguments expected.\033[0m" << CLEAR << std::endl;
		return (1);
	}
	*/

	//ScalarConverter::convert(argv[1]);
	test();
	(void)argc;
	(void)argv;
	return (0);
}
