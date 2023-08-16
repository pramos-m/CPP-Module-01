/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:10:11 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:18:31 by pramos-m         ###   ########.fr       */
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
