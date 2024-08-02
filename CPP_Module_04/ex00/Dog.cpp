/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 18:49:31 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::Dog( const Dog& origine ) : Animal(origine)
{
	
}

Dog&	Dog::operator=( const Dog& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog (Derived class) called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "hhoww, hhoww" << std::endl;
}

