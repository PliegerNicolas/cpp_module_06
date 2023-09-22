/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:41:49 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/22 10:25:55 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include "functions.cpp"
#include <string>

/* dynamic_cast : */
/* It's specifically used for converting pointer or references of polymorphic */
/* classes (with virtual functions). It means it's useful in context of */
/* inheritance hierarchies. */
/* It performs runtime type checking to ensure safe casting. */

int	main(void)
{
	Base	*base = generate();
	Base	*error = new Base;

	identify(base);
	identify(*base);

	identify(error);
	identify(*error);

	delete base;
	delete error;

	return (0);
}
