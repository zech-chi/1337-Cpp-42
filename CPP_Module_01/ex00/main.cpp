/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:23:51 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/16 22:15:27 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	Zombie *heapZombie;

	(void)av;
	if (ac != 1)
	{
		std::cerr << RED << "the program does not take any args!" << RESET << std::endl;
		return (1);
	}
	randomChump("jerry");
	heapZombie = newZombie("tom");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
