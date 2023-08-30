/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:58:41 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 17:15:19 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <sys/time.h>

Base	*generate(void)
{
	int	rand_value;

	std::srand(static_cast<unsigned int>(time(nullptr)));

	rand_value = std::rand() % 3;
	if (rand_value == 0)
		return (new A());
	else if (rand_value == 1)
		return (new B());
	else
		return (new C());
	return (nullptr);
}

void	identify(Base *p)
{
	A	*a = nullptr;
	B	*b = nullptr;
	C	*c = nullptr;

	if (dynamic_cast<A*>(p) == a)
		std::cout << "a" << std::endl;
	else if (dynamic_cast<B*>(p) == b)
		std::cout << "b" << std::endl;
	else if (dynamic_cast<C*>(p) == c)
		std::cout << "c" << std::endl;
	else
		std::cout << "?" << std::endl;
}

void	identify(Base &p)
{
	(void)p;
}
