/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:47:59 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 13:57:40 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	zombies;

	if (N < 0)
	{
		std::cerr << RED << "N is negative!" << RESET << std::endl;
		exit(1);
	}
	zombies = new Zombie[N];
	if (!zombies)
	{
		std::cerr << RED << "Failed to allocate memory!" << RESET << std::endl;
		exit(1);
	}
	for (int i = 0; i < N; i++)
	{
		zombies[i].setName(name);
	}
	return (zombies);
}
