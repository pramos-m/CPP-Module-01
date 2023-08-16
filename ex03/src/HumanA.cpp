/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:06:01 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:18:00 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ): _name(name), _weapon(weapon) {}

HumanA::~HumanA( void ) {}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
