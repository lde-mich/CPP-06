/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 16:01:11 by lde-mich         ###   ########.fr       */
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


bool ScalarConverter::isNumber(std::string str)
{
	float floatValue;
	floatValue = std::atof(str.c_str());

	int i = -1;
	if(floatValue == std::floor(floatValue))
	{
		while(str[++i])
		{
			if (str[i] < 48 || str[i] > 57)
				return (false);
			else
				return (true);
		}
	}
	else
	{
		while(str[++i])
		{
			if (str[i] == '.' && str[str.length() - 1] != 'f')
				return (false);
			if ((str[i] < 48 || str[i] > 57) && str[i] != 'f' && str[i] != '.')
				return (false);
		}
	}

	return (true);
}


void ScalarConverter::convert(std::string str)
{
	std::stringstream ss;

	if (ScalarConverter::isNumber(str) == true)
	{
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
}




















