/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:30:40 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/21 19:52:23 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ScalarConverter
{
	public:

		ScalarConverter &operator=(ScalarConverter const &obj);

		void convert(std::string value);

		ScalarConverter(ScalarConverter const &obj);
		ScalarConverter();
		~ScalarConverter();
};
