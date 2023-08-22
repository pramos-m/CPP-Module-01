/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:35 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:37 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str address" << std::setw(9) << ": "<< &str << std::endl;
	std::cout << "stringPTR address" << std::setw(3) << ": "<< stringPTR << std::endl;
	std::cout << "stringREF address" << std::setw(3) << ": "<< &stringREF << std::endl;
	std::cout << "str string" << std::setw(10) << ": "<< str << std::endl;
	std::cout << "stringPTR string" << std::setw(4) << ": "<< *stringPTR << std::endl;
	std::cout << "stringREF string" << std::setw(4) << ": "<< stringREF << std::endl;

	return (0);
}
