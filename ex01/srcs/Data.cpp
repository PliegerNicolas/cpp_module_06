/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:43:09 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 15:48:18 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Data.hpp"

/* Constructors & Destructors */

/* Public */

Data::Data(void)
{
	std::cout << "\033[36;2m";
	std::cout << "Data : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Data::Data(const std::string &content): _content(content)
{
	std::cout << "\033[36;2m";
	std::cout << "Data : constructor with content parameter called";
	std::cout << "\033[0m" << std::endl;
}

Data::Data(const Data &other): _content(other._content)
{
	std::cout << "\033[36;2m";
	std::cout << "Data : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Data	&Data::operator=(const Data &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Data : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_content = other._content;
	}
	return (*this);
}

Data::~Data(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Data : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */

/* Public */

// Getter functions

std::string	Data::getContent(void) const
{
	return (_content);
}

// Setter functions

void	Data::setContent(const std::string &content)
{
	_content = content;
}

/* Private */
