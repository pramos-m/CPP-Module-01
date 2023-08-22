/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:48:41 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:48:43 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

#include	<string>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie( void );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );
};

Zombie	*zombieHorde( int N, std::string name );

#endif
