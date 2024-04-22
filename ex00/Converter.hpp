/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:24:58 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 10:57:19 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cctype>
#include <limits>
#include <cstdlib>

class	ConverterUtil
{
	private :
		ConverterUtil();
		ConverterUtil(const ConverterUtil &obj);
		ConverterUtil &operator=(const ConverterUtil &obj);
		~ConverterUtil();
	public :
		static std::string	deleteWhiteSpace(const std::string &input);
		static int			determineType(const std::string &input);
		static bool			isValidRangeChar(int num);
		static bool			isDisplayableChar(int num);
		static bool			onlyZeroBelowPoint(std::string input);
		static bool			isChar(const std::string &input);
		static bool			isInt(const std::string &input);
		static bool			isFloat(std::string input);
		static bool			isDouble(const std::string &input);
		static void			printConvertedFromChar(std::string input);
		static void			printConvertedFromInt(std::string input);
		static void			printConvertedFromFloat(std::string input);
		static void			printConvertedFromDouble(std::string input);
		static void			printSpecial(std::string input);
		static void			printDefault(void);
		class	RangeException : public std::exception
		{
			public :
			const char *what(void) const throw();
		};
		class	charDisplayException : public std::exception
		{
			const char *what(void) const throw();
		};
		enum type{
			CHAR = 0,
			INT,
			FLOAT,
			DOUBLE,
			SPECIAL,
			OTHER
		};
};

#endif