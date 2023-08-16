/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:46:33 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:57 by pramos-m         ###   ########.fr       */
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
