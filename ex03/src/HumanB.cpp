/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:10:15 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:18:03 by pramos-m         ###   ########.fr       */
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
