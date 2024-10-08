/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:24:07 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 13:48:52 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdlib>
# include <iostream>
# include <string>

# define RESET	"\033[0m"
# define YELLOW	"\033[1;33m"
# define RED	"\033[1;31m"
# define ORANGE	"\033[38;5;214m"
# define GREEN	"\033[32m"

class	Zombie {
	
	public:
		Zombie( const std::string newName );
		~Zombie( void );
		void		announce( void );

	private:
		std::string	name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
