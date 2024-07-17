/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:36 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:36:32 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <cstdlib>
# include <iostream>
# include <string>

class Weapon {
	
	public:
		Weapon(const std::string& newType );
		~Weapon( void );

		const std::string&	getType ( void ) const;
		void				setType(const std::string& newType );

	private:
		std::string	type;

};

#endif
