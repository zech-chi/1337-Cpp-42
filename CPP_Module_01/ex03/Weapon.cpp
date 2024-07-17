/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:20:26 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 15:36:26 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& newType ): type(newType) {}

Weapon::~Weapon ( void )
{
	
}

const std::string&	Weapon::getType( void ) const
{
	return type;
}

void	Weapon::setType(const std::string& newType )
{
	type = newType;
}
