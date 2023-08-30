/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:47:39 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 16:58:55 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"

/* Constructors & Destructors */

/* Public */

Base::~Base(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Base : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */

/* Public */

// Getter functions

// Setter functions
