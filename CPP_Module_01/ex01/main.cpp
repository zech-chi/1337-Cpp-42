/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:54:36 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 09:30:44 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie *zombies;
	int		n;

	(void)av;
	if (ac != 1)
	{
		std::cerr << RED << "the program does not take any args!" << RESET << std::endl;
		return (1);
	}
	n = 7;
	zombies = zombieHorde(n, "zaza");
	for (int i = 0; i < n; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
