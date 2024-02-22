/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:30:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 13:56:55 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <cstring>

class ScalarConverter
{
	private:

		ScalarConverter &operator=(ScalarConverter const &obj);

		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter();
		~ScalarConverter();

	public:

		static void convert(std::string value);
		static bool isNumber(std::string str);
};
