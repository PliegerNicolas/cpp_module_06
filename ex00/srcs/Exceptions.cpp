/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:24:33 by nicolas           #+#    #+#             */
/*   Updated: 2023/09/06 14:24:38 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Exceptions.hpp"


const char* ConversionImpossibleException::what() const throw()
{
	return ("ScalarConverter::Exception : conversion impossible");
}

const char* ConversionNonDisplayableException::what() const throw()
{
	return ("ScalarConverter::Exception : conversion non displayable");
}