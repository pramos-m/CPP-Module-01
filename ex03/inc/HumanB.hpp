/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:49:59 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:50:01 by pramos-m         ###   ########.fr       */
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
