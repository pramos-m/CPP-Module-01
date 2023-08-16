/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:08:58 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:29 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Zombie.hpp"

int	main( void )
{
	Zombie	*Horde;
	int		N;

	N = 5;
	Horde = zombieHorde(N, "Fred");
	for (int i; i < N; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}