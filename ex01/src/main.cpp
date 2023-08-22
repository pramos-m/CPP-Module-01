/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:47 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:49 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Zombie.hpp"

int	main( void )
{
	Zombie	*Horde;
	int		N;

	N = 5;
	Horde = zombieHorde(N, "Fred");
	for (int i = 0; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}