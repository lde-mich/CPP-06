/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/23 12:42:47 by lde-mich         ###   ########.fr       */
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
			if (str[i] < '0' || str[i] > '9')
				return (false);
		}
		return (true);
	}
	else
	{
		if ((str[str.length() - 1] >= 97 && str[str.length() - 1] <= 122) && str[str.length() - 1] != 102)
			return (false);
		while(str[++i])
			if ((str[i] < 48 || str[i] > 57) && str[i] != 102 && str[i] != 46)
				return (false);
	}

	return (true);
}


void ScalarConverter::convert(std::string str)
{
	std::stringstream ss;

	std::string specials[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

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
	else
	{
		for (int i = 0; i < 6; i++)
		{
			if (specials[i] == str)
			{
				std::cout << "char: impossible" << std::endl;
				std::cout << "int: impossible" << std::endl;
				std::cout << "float: nanf" << std::endl;
				std::cout << "double: nan" << std::endl;
			}
		}
	}
}




















