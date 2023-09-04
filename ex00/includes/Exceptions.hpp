/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:16:22 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 13:17:09 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

class ConversionImpossibleException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("ScalarConverter::Exception : conversion impossible");
		}
};

class ConversionNonDisplayableException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("ScalarConverter::Exception : conversion non displayable");
		}
};
