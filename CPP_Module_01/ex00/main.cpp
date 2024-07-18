/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:23:51 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 13:45:53 by zech-chi         ###   ########.fr       */
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
	std::cout << "go to randomChump function" << std::endl;
	randomChump("stackZombie");
	std::cout << "back from randomChump function" << std::endl;	
	heapZombie = newZombie("heapZombie");
	heapZombie->announce();
	delete heapZombie;
	return (0);
}
