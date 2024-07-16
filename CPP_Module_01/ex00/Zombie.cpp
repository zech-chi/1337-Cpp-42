/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:24:04 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/16 22:11:13 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << YELLOW << "constructor called" << RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << ORANGE << "destructor called" << RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << GREEN << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void	Zombie::setName(std::string newName)
{
	_name = newName;
}

std::string	Zombie::getName(void)
{
	return (_name);
}
