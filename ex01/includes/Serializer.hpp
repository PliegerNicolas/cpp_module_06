/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:32:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/18 14:23:39 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <stdint.h>

# include "Data.hpp"

/* **************************/
/* This is a 'static class' */
/* ************************ */

class	Serializer
{
	private:
		/* Attributs */

		/* Constructors & Destructors */
		Serializer(void);

		Serializer(const Serializer &other);
		Serializer	&operator=(const Serializer &other);

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		~Serializer(void);

		/* Member functions */
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};
