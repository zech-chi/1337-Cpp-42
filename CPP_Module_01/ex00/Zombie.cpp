/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:24:04 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 13:44:40 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( const std::string newName )
{
	std::cout << YELLOW << "constructor called" << RESET << std::endl;
	name = newName;
}

Zombie::~Zombie(void)
{
	std::cout << ORANGE << "destructor called" << RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
