/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:32:05 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 15:45:11 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int ac, char **av) 
{
	if (ac != 4 || std::string(av[2]).empty())
	{
		std::cerr << RED << "Invalid args!" << RESET << std::endl;
		std::cerr << GREEN << "Valid Args are: ./sed  file_path  str_from (not empty)  str_to" << RESET << std::endl;
		return (1);
	}
	std::fstream	fileIn(av[1], std::ios::in);
	if (!fileIn)
	{
		std::cerr << RED << "Something went wrong to open file: " << av[1] << std::endl;
		return (1);
	}
	std::string		line;
	std::string		replacedLine;
	std::string		fileOutName = std::string(av[1]) + ".replace";
	std::fstream	fileOut(fileOutName, std::ios::out | std::ios::trunc);
	if (!fileOut)
	{
		std::cerr << RED << "Something went wrong to open file: " << fileOutName << std::endl;
		fileIn.close();
		return (1);
	}
	
	while (std::getline(fileIn, line))
	{
		if (!fileIn.eof())
			line += "\n";
		replacedLine = sed(line, av[2], av[3]);
		// std::cout << replacedLine << std::endl;z
		fileOut << replacedLine;
	}
	fileIn.close();
	fileOut.close();
	return (0);
}
