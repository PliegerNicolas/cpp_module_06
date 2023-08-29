/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:34:27 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/29 17:23:19 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <climits>
# include <limits>

# include "Exceptions.hpp"

/* **************************/
/* This is a 'static class' */
/* ************************ */

class	ScalarConverter
{
	private:
		/* Attributs */

		/* Constructors & Destructors */

		ScalarConverter(void);

		ScalarConverter(const ScalarConverter &other);
		ScalarConverter	&operator=(const ScalarConverter &other);

		virtual ~ScalarConverter(void);

		/* Member functions */

		static void	checkConvertToChar(const std::string &input);
		static void	checkConvertToInt(const std::string &input);
		static void	checkConvertToFloat(const std::string &input);
		static void	checkConvertToDouble(const std::string &input);

		static void convertToChar(const std::string &input);
		static void convertToInt(const std::string &input);
		static void convertToFloat(const std::string &input);
		static void convertToDouble(const std::string &input);

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */


		/* Member functions */

		static void	convert(const std::string &input);
};

