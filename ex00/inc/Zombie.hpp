/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:49:03 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:49:08 by pramos-m         ###   ########.fr       */
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
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
