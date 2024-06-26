/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 20:52:20 by zech-chi          #+#    #+#             */
/*   Updated: 2024/06/26 19:44:48 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av) {
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++) {
		std::string str(av[i]);
		for (unsigned long j = 0; j < str.length(); j++) {
			std::cout << (char)toupper(str.at(j));
		}
	}
	std::cout << std::endl;
	return (0);
}
