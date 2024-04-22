/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:26:20 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 10:55:54 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Converter.hpp"

class	ConverterUtil;

enum type{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	OTHER
};

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator = (const ScalarConverter  &obj);
		~ScalarConverter();
	public :
		static void	convert(std::string input);
};

#endif