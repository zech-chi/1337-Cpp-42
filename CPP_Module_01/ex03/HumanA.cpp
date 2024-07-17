/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:17:41 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( const std::string& newName, Weapon& newWeapon ): name(newName), weapon(newWeapon) {}

HumanA::~HumanA( void )
{

}

void	HumanA::attack ( void ) const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
