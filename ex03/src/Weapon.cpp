/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:57:44 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/09 20:47:35 by pramos-m         ###   ########.fr       */
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
