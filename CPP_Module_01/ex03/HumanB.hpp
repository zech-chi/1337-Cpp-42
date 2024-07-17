/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:40 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:18:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(const std::string& newName );
		~HumanB( void );

		void	setWeapon( Weapon& newWeapon );
		void	attack ( void ) const;

	private:
		std::string	name;
		Weapon*	weapon;

};

#endif
