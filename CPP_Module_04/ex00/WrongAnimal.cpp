/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:56:29 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 19:09:52 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal (Base class) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& origine )
{
	*this = origine;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& origine )
{
	if (this != &origine)
		type = origine.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal (Base class) called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal can't make sound" << std::endl;
}
