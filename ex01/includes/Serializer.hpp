/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:32:34 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 15:48:28 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>

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

		~Serializer(void);

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};
