/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:38:24 by eralonso          #+#    #+#             */
/*   Updated: 2023/08/16 15:16:51 by pramos-m         ###   ########.fr       */
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
