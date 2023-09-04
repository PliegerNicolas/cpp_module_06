/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkString.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:40:35 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 13:19:59 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checkString.hpp"

static void	lowercaseString(std::string &src)
{
	for (size_t i = 0; i < src.length(); ++i)
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] += MIN_MAJ_DIFF;
	}
}

static bool	verifyExceptionStrings(const std::string &input)
{
	const std::string	validStrings[4] =
	{
		"nan",
		"nanf",
		"inf",
		"inff"
	};

	for (size_t i = 0; i < sizeof(validStrings) / sizeof(validStrings[0]); i++)
		if (input == validStrings[i])
			return (true);
	return (false);
}

void	checkString(std::string str)
{
	bool	found_dot = false;

	if (str.empty())
		throw ConversionImpossibleException();
	lowercaseString(str);
	if (str[0] == '+' || str[0] == '-')
		str.erase(0, 1);
	if (verifyExceptionStrings(str))
		return ;
	if (str[str.size() - 1] == 'f')
		str.erase(str.size() - 1, 1);
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.' && !found_dot)
				found_dot = !found_dot;
			else
				throw ConversionImpossibleException();
		}
	}
}
