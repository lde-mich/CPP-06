/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 10:58:34 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	(*this) = obj;
}

ScalarConverter::~ScalarConverter()
{

}



ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj)
{
	(void) obj;

	return (*this);
}



void ScalarConverter::convert(std::string str)
{
	std::stringstream ss;

	int intValue;
	ss << str;
	ss >> intValue;

	if (intValue == 0 || std::atof(str.c_str()))
		std::cout << "char: Non displayable" << std::endl;

	std::cout << "int: " << intValue << std::endl;




}




















