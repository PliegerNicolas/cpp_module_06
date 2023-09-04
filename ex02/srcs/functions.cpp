/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:58:41 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/04 13:25:36 by nplieger         ###   ########.fr       */
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

	std::srand(static_cast<unsigned int>(time(NULL)));

	rand_value = std::rand() % 3;
	if (rand_value == 0)
		return (new A());
	else if (rand_value == 1)
		return (new B());
	else
		return (new C());
	return (NULL);
}

/* Pass the address : */
/* If dynamic_cast succeeds, object is returned, else nullptr */
void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Given pointer is : " << "A object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Given pointer is : " << "B object" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Given pointer is : " << "C object" << std::endl;
	else
		std::cout << "Given pointer is : " << "Unknown object" << std::endl;
}

/* Pass the address : */
/* If dynamic_cast succeeds, object is returned, else nullptr */
void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Given pointer is : " << "A object" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Given pointer is : " << "B object" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Given pointer is : " << "C object" << std::endl;
	else
		std::cout << "Given pointer is : " << "Unknown object" << std::endl;
}
