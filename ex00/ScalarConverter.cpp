/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:26:05 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/17 12:33:24 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) 
{
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj) 
{
	(void)obj;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(std::string input) 
{
    std::string joinedInput = ConverterUtil::deleteWhiteSpace(input);
    int type = ConverterUtil::determineType(joinedInput);
    switch(type) {
        case CHAR:
            ConverterUtil::printConvertedFromChar(joinedInput);
            break;
        case INT:
            ConverterUtil::printConvertedFromInt(joinedInput);
            break;
        case FLOAT:
            ConverterUtil::printConvertedFromFloat(joinedInput);
            break;
        case DOUBLE:
            ConverterUtil::printConvertedFromDouble(joinedInput);
            break;
        case SPECIAL:
            ConverterUtil::printSpecial(joinedInput);
            break;
        default:
            ConverterUtil::printDefault();
    }
}