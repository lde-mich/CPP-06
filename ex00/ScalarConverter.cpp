/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 12:26:06 by lde-mich         ###   ########.fr       */
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

	float floatValue;
	floatValue = std::atof(str.c_str());

	// CHAR

	if (intValue == 0 || floatValue != std::floor(floatValue))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << (char)intValue << std::endl;

	//____________________________________________________________
	

	//INT
	
	std::cout << "int: " << intValue << std::endl;
	
	//____________________________________________________________


	//FLOAT
	
	if(floatValue == std::floor(floatValue))
		std::cout << "float: " << intValue << ".0f" << std::endl;
	else
		std::cout << "float: " << floatValue<< "f" << std::endl;

	//____________________________________________________________


	//DOUBLE
	
	if(floatValue == std::floor(floatValue))
		std::cout << "double: " << intValue << ".0" << std::endl;
	else
		std::cout << "double: " << floatValue << std::endl;

	//____________________________________________________________

}




















