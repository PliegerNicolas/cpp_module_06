/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:55:38 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 11:28:55 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <string>
# include <stdexcept>

class ConversionImpossibleException : public std::exception
{
	private:
		std::string	_message;

	public:
		ConversionImpossibleException(void)
		{
			_message = std::string("ScalarConverter::Exception - conversion impossible");
		}

		virtual const char* what() const throw()
		{
			return (_message.c_str());
		}
};

class ConversionNonDisplayableException : public std::exception
{
	private:
		std::string	_message;

	public:
		ConversionNonDisplayableException(void)
		{
			_message = std::string("ScalarConverter::Exception - conversion non displayable");
		}

		virtual const char* what() const throw()
		{
			return (_message.c_str());
		}
};
