/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:16:22 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/06 14:38:11 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <exception>

class ConversionImpossibleException : public std::exception
{
	public:
		virtual const char* what() const throw();
};

class ConversionNonDisplayableException : public std::exception
{
	public:
		virtual const char* what() const throw();
};
