/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:34:00 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 15:48:50 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

/* Constructors & Destructors */

// Public

// Protected

// Private

Serializer::Serializer(void)
{
	std::cout << "\033[36;2m";
	std::cout << "Serializer : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Serializer::Serializer(const Serializer &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Serializer : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	(void)other;
}

Serializer	&Serializer::operator=(const Serializer &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Serializer : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other) {}
	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << "\033[36;2m";
	std::cout << "Serializer : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member functions */

// Public

uintptr_t	serialize(Data *ptr)
{
	(void)ptr;
	return (0);
}

Data	*deserialize(uintptr_t raw)
{
	(void)raw;
	return (nullptr);
}


// Protected

// Private
