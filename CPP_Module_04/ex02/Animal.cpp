/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:24 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/03 12:59:55 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal (Base class) constructor called" << std::endl;
}

Animal::Animal( const Animal& origine )
{
	*this = origine;
}

Animal&	Animal::operator=( const Animal& origine )
{
	if (this != &origine)
		type = origine.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal (Base class) called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

// void	Animal::makeSound() const
// {
// 	std::cout << "animal can't make sound" << std::endl;
// }
