/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:50:03 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:50:05 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__

#include	<string>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string	const	getType( void ) const;
		void				setType( std::string type );
};

#endif
