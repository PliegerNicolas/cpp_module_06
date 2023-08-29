/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringMethods.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:21:36 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 17:19:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string>

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

bool	verifyIfValidString(const std::string &input)
{
	const std::string	validStrings[4] =
	{
		"nan",
		"nanf",
		"inf",
		"inff"
	};
	for (std::string validString : validStrings)
		if (input == validString)
			return (true);
	return (false);
}

int	verifyStringFormat(const std::string &input)
{
	std::string			str;
	int					nbr_of_dots = 0;

	str = lowercaseStringCpy(input);
	if (str[0] == '+' || str[0] == '-')
		str.erase(0, 1);
	if (verifyIfValidString(str))
		return (2);
	if (str[str.size() - 1] == 'f')
		str.erase(str.size() - 1, 1);
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.' && nbr_of_dots == 0)
				nbr_of_dots++;
			else
				return (1);
		}
	}
	return (0);
}
