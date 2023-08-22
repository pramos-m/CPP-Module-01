/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:28 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:31 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon( void ) {}

std::string	const Weapon::getType( void ) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
