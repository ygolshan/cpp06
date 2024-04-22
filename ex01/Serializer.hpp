/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:27:22 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 11:26:30 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class	Serializer
{
	private :
		Serializer();
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);
		~Serializer();
	public :
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif