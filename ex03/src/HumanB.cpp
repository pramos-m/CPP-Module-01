/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:19 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:20 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon(NULL) {}

HumanB::~HumanB( void ) {}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType();
	else
		std::cout << "punch";
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
}
