/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringMethods.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:21:36 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 14:25:24 by nplieger         ###   ########.fr       */
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

bool	verifyStringFormat(const std::string &input)
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

	str = lowercaseStringCpy(input);
	if (str[0] == '+' || str[0] == '-')
		str.erase(0, 1);
	for (std::string validString : validStrings)
		if (str == validString)
			return (true);
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
