/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:49:16 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:49 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
# define __HUMANA_H__

# include	"Weapon.hpp"
# include	<string>

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );
		void	attack( void );
};

#endif
