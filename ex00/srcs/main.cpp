/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:16:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 14:14:28 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

static void	testCharToInt(void)
{
	std::cout << "\033[32;4m" << "testConvertToChar :" << "\033[0m" << std::endl;

	std::cout << "Given 'a' expecting 'a'" << std::endl;
	ScalarConverter::convert("a");
	std::cout << "Given '*' expecting '*'" << std::endl;
	ScalarConverter::convert("*");

	std::cout << std::endl;

	std::cout << "Given '48' expecting '0'" << std::endl;
	ScalarConverter::convert("48");
	std::cout << "Given '60' expecting '<'" << std::endl;
	ScalarConverter::convert("60");
	std::cout << "Given '<' expecting '<'" << std::endl;
	ScalarConverter::convert("<");
	std::cout << "Given '32' expecting ' '" << std::endl;
	ScalarConverter::convert("32");
	std::cout << "Given '126' expecting 'error'" << std::endl;
	ScalarConverter::convert("126");

	std::cout << std::endl;
	std::cout << "Given '33.0' expecting '!'" << std::endl;
	ScalarConverter::convert("33.0");
	std::cout << "Given '33.5F' expecting '!'" << std::endl;
	ScalarConverter::convert("33.5F");
	std::cout << "Given '+33.5f' expecting '!'" << std::endl;
	ScalarConverter::convert("+33.5f");
	std::cout << "Given '+33.9f' expecting '!'" << std::endl;
	ScalarConverter::convert("+33.9f");

	std::cout << std::endl;

	std::cout << "Given '0' expecting 'error'" << std::endl;
	ScalarConverter::convert("0");
	std::cout << "Given '5' expecting 'error'" << std::endl;
	ScalarConverter::convert("5");
	std::cout << "Given '-48' expecting 'error'" << std::endl;
	ScalarConverter::convert("-48");
	std::cout << "Given '-48.5f' expecting 'error'" << std::endl;
	ScalarConverter::convert("-48.5f");
	std::cout << "Given '™' expecting 'error'" << std::endl;
	ScalarConverter::convert("™");
	std::cout << "Given 127' expecting 'error'" << std::endl;
	ScalarConverter::convert("127");
	std::cout << "Given 'pomme' expecting 'error'" << std::endl;
	ScalarConverter::convert("pomme");
	std::cout << "Given '+3000000000000000.5f' expecting '!'" << std::endl;
	ScalarConverter::convert("+3000000000000000.5f");
}

int	main(int argc, char **argv)
{
	/*
	if (argc != 2)
	{
		std::cout << "\033[31mError: Two arguments expected.\033[0m" << std::endl;
		return (1);
	}
	*/

	//ScalarConverter::convert(argv[1]);
	testCharToInt();
	(void)argc;
	(void)argv;
	return (0);
}
