/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:24 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/30 17:14:06 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal (Base class) constructor called" << std::endl;
}

Animal::Animal( const std::string& type ) : type(type)
{
	
}

Animal::~Animal()
{
	std::cout << "Destructor Animal (Base class) called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "animal can't make sound" << std::endl;
}

