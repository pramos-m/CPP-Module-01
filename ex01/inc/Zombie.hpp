/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:38:24 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:17:26 by pramos-m         ###   ########.fr       */
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
