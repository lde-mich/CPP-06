/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:16:10 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/27 14:55:38 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		Base *generate(void);
		void identify(Base *p);
		void identify(Base &p);

		Base();
		virtual ~Base();
};



