/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:31:31 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 20:16:39 by lde-mich         ###   ########.fr       */
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



void ScalarConverter::convert(std::string value)
{
	std::cout << value << std::endl;
}











