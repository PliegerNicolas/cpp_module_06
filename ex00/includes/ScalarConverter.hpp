/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:34:27 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/06 14:36:38 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <climits>
# include <limits>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define CLEAR "\033[0m"

# include "Exceptions.hpp"
# include "checkString.hpp"

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

		static void	checkCharConversion(const int &input);
		static void	checkIntConversion(const double &value);

		static void	charConversion(const char &input);
		static void	stringConversion(const std::string &input);

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
