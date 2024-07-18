/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:45:54 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 11:54:45 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	h;

	if (ac != 2)
	{
		std::cerr << RED << "Invalid arg!" << RESET << std::endl;
		return (1);
	}
	h.complain(av[1]);
	return (0);
}
