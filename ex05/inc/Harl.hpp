/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:50:58 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:51:00 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
# define __HARL_H__

# include	<string>

class Harl
{
	private:
		void		(Harl::*_exec_levels[4])(void);
		std::string	_levels[4];
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif
