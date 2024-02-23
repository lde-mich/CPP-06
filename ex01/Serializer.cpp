/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:28:50 by lde-mich          #+#    #+#             */
/*   Updated: 2024/02/23 15:32:16 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer()
{

}

Serializer::Serializer(Serializer const &obj)
{
	(void) obj;
	return (*this);
}

Serializer::~Serializer()
{

}



uintptr_t Serializer::serialize(Data* ptr)
{
}


Data* Serializer::deserialize(uintptr_t raw)
{
}
























