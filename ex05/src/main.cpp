/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:51:08 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:51:11 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Harl.hpp"
#include	<iostream>

int	main( int ac, char **av )
{
	Harl	one;

	if (ac != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	one.complain(av[1]);
	return (0);
}
