/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:21:28 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:18:28 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"../inc/Harl.hpp"

Harl::Harl( void )
{
    _levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
    _exec_levels[0] = &Harl::_debug;
    _exec_levels[1] = &Harl::_info;
    _exec_levels[2] = &Harl::_warning;
    _exec_levels[3] = &Harl::_error;
}

Harl::~Harl( void ) {}

void	Harl::_debug( void )
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my " \
	<< "7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" \
	<< std::endl;
}

void	Harl::_info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. " \
	<< "You didn't put enough bacon in my burger! If you did, I" \
	<< "wouldn't be asking for more!" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free." \
	<<" I've been coming for years whereas you started working here" \
	<< " since last month" << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now" \
	<< std::endl;
}

void	Harl::complain( std::string level )
{
    for (int i = 0; i < 4; i++)
        if (!level.compare(_levels[i]))
			(this->*_exec_levels[i])();
}
