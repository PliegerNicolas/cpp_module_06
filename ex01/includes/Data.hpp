/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:40:30 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/30 16:06:29 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>

class	Data
{
	private:
		/* Attributs */
		std::string	_content;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		Data(void);
		Data(const std::string &content);

		Data(const Data &other);
		Data	&operator=(const Data &other);

		~Data(void);

		/* Member functions */

		// Getter functions

		std::string	getContent(void) const;

		// Setter functions

		void		setContent(const std::string &content);
};

std::ostream	&operator<<(std::ostream &os, const Data &data);
