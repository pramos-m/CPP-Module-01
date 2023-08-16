/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:53:36 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:03 by pramos-m         ###   ########.fr       */
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
