/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:23:07 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/02 17:10:11 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>

void	print_usage( void )
{
	std::cout << "Usage: ./NewSed <filename> <s1> <s2>" << std::endl;
}

bool	open_file(std::fstream &file, const char *name, std::ios_base::openmode mode)
{

}

std::string	replace(std::string content, std::string str_old, std::string str_new)
{}

int	main( int ac, char **av )
{
}
