/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:32:20 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/27 16:14:52 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base::Base()
{

}

Base::~Base()
{

}


Base *Base::generate(void)
{
	int random = std::rand() % 3 + 1;

	switch (random)
	{
		case 1:
			return (Base obj = new A());
			break;

		case 2:
			return (Base obj = new B());
			break;

		case 3:
			return (Base obj = new C());
			break;
		
		default:
			return (NULL);
	}
}
	

void Base::identify(Base *p)
{
	if (dynamic_cast<A>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<>(p))
		std::cout << "C" << std::endl;

}


void Base::identify(Base &p)
{

}











