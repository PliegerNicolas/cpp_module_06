/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:30:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/31 11:15:23 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

/* reinterpret_cast : */
/* It's used for low-level unsafe conversions between unrelated types. */
/* One example of this is converting a pointer to an integer. */
/* It can lead to a lot of undefined behaviors so this should be used with caution. */

int	main(void)
{
	Data		*data1;
	Data		*data2;
	uintptr_t	raw;

	data1 = new Data("Wouah");
	data2 = nullptr;
	raw = Serializer::serialize(data1);
	data2 = Serializer::deserialize(raw);

	std::cout << "raw = " << raw << std::endl;
	std::cout << "data1 addr = " << data1 << std::endl;
	std::cout << "data2 addr = " << data2 << std::endl;
	std::cout << "data1 content = " << *data1 << std::endl;
	std::cout << "data2 content = " << *data2 << std::endl;

	data1->setContent("Zigouigoui");

	std::cout << "data1 addr = " << data1 << std::endl;
	std::cout << "data2 addr = " << data2 << std::endl;
	std::cout << "data1 content = " << *data1 << std::endl;
	std::cout << "data2 content = " << *data2 << std::endl;

	delete data1;
	return (0);
}
