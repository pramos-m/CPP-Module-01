/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:51 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:53 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Zombie.hpp"
#include	<iostream>

Zombie::Zombie( void ) {}

Zombie::~Zombie( void )
{
	std::cout << _name << " die, again." << std::endl;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}