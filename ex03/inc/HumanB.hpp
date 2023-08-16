/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:55:50 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:53 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__

# include	"Weapon.hpp"
# include	<string>

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
		
};

#endif
