/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:23:57 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/16 22:11:31 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	zombie;

	zombie = new Zombie;
	if (!zombie)
	{
		std::cerr << RED << "Failed to allocate memory!" << RESET << std::endl;
		exit(1);
	}
	zombie->setName(name);
	return (zombie);
}
