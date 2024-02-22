/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:30:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/22 10:59:43 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <sstream>

class ScalarConverter
{
	private:

		ScalarConverter &operator=(ScalarConverter const &obj);

		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter();
		~ScalarConverter();

	public:

		static void convert(std::string value);
};
