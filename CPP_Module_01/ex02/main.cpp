/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:33:38 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 15:10:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <cstdlib>
# include <iostream>
# include <string>

# define RESET	"\033[0m"
# define RED	"\033[1;31m"

int	main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
	{
		std::cerr << RED << "the program does not take any args!" << RESET << std::endl;
		return (1);
	}

	std::string		var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << (&var) << std::endl;
	std::cout << (stringPTR) << std::endl;
	std::cout << (&stringREF) << std::endl;

	std::cout << var << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
