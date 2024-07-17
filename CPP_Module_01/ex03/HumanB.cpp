/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:34:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& newName ): name(newName)
{
	weapon = NULL;
}

HumanB::~HumanB( void )
{

}

void	HumanB::setWeapon( Weapon& newWeapon )
{
	weapon = &newWeapon;
}

void	HumanB::attack ( void ) const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
