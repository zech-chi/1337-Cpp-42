/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:38 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:17:17 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(const std::string& newName, Weapon& newWeapon );
		~HumanA( void );

		void	attack ( void ) const;

	private:
		std::string	name;
		Weapon&		weapon;

};

# endif
