/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:41:49 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 11:17:25 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "functions.cpp"

/* dynamic_cast : */
/* It's specifically used for converting pointer or references of polymorphic */
/* classes (with virtual functions). It means it's useful in context of */
/* inheritance hierarchies. */
/* It performs runtime type checking to ensure safe casting. */

int	main(void)
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);

	delete base;
	return (0);
}
