/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:32:05 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/17 14:50:08 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::ifstream file("file.txt");
	std::string txt;
	file >> txt;
	std::cout << txt << std::endl;
	file.close();
	return (0);
}
