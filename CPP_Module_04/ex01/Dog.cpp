/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/03 12:40:48 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::Dog( const Dog& origine ) : Animal(origine), _brain(new Brain(*origine._brain))
{
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog&	Dog::operator=( const Dog& origine )
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	if (this != &origine)
	{
		*_brain = *origine._brain;
		Animal::operator=(origine);
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor Dog (Derived class) called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "hhoww, hhoww" << std::endl;
}
