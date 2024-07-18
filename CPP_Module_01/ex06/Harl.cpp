/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:45:49 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/18 15:30:37 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{

}

Harl::~Harl( void )
{

}

void	Harl::complain( std::string level )
{
	int	i;
	int	start;
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl::*ptrToMemberFunc[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	i = -1;
	for (int j = 0; j < 4; j++)
	{
		if (level == levels[j])
		{
			i = j;
			break;
		}
	}
	switch (i)
	{
		case 0:
			start = 0;
			break;
		case 1:
			start = 1;
			break;
		case 2:
			start = 2;
			break;
		case 3:
			start = 3;
			break;
		default:
			std::cerr << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	}
	if (i == -1)
		return ;
	for (int j = start; j < 4; j++)
	{
		std::cout << "[ " << levels[j] << " ]" << std::endl;
		(this->*ptrToMemberFunc[j])();
		std::cout << std::endl;
	}
	
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put; ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
	std::cout << "years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
