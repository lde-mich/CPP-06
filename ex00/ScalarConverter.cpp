/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 11:51:36 by lde-mich         ###   ########.fr       */
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
	
	//___________________________________________________________


	//FLOAT
	
	if(floatValue == std::floor(floatValue))
	{
		floatValue = intValue;
		std::cout << "float: " << floatValue <<std::endl;
	}
	else
		std::cout << "float: " << floatValue<< std::endl;

	//___________________________________________________________


}




















