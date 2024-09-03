/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:24 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 15:24:49 by zech-chi         ###   ########.fr       */
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
	std::cout << "Animal copy constructor called!" << std::endl;
}

Animal&	Animal::operator=( const Animal& origine )
{
	if (this != &origine)
		type = origine.type;
	std::cout << "Animal copy assignment operator called!" << std::endl;
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
