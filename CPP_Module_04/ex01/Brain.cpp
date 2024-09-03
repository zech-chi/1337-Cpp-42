/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 10:06:03 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 15:22:32 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain( const Brain& origine )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = origine;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain&	Brain::operator=( const Brain& origine )
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &origine)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = origine.ideas[i];
		}
	}
	return (*this);
}

// void	Brain::setIdea( std::string idea, int index )
// {
// 	if (index < 0 || index >= 100)
// 	{
// 		std::cerr << "Error: invalid index" << std::endl;
// 		return;
// 	}
// 	ideas[index] = idea;
// }

// std::string	Brain::getIdea( int index ) const
// {
// 	if (index < 0 || index >= 100)
// 	{
// 		std::cerr << "Error: invalid index" << std::endl;
// 		return ("");
// 	}
// 	return (ideas[index]);
// }

// void	Brain::printIdeas() const
// {
// 	std::cout << "----------ideas----------" << std::endl;
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << "idea " << i << " ---> ";
// 		std::cout << ideas[i] << std::endl;
// 	}
// }
