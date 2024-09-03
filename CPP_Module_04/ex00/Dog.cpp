/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 14:30:01 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::Dog( const Dog& origine ) : Animal(origine)
{
	std::cout << "Dog copy constructor called!" << std::endl;
}

Dog&	Dog::operator=( const Dog& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	std::cout << "Dog copy assignment operator called!" << std::endl;
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

