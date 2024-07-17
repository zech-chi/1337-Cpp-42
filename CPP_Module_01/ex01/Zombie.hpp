/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:48:07 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 08:51:44 by zech-chi         ###   ########.fr       */
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
		Zombie( void );
		~Zombie( void );
		void		announce( void );
		void		setName( std::string newName );
		std::string	getName( void );

	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
