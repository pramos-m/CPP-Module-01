/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:49:11 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:49:13 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Zombie.hpp"

int	main( void )
{
	Zombie	*zombie;
	
	zombie = newZombie("Pol");
	randomChump("secundon");
	zombie->announce();
	randomChump("secundon");
	delete zombie;
	return (0);
}
