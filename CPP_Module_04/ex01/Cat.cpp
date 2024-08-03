/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/03 12:39:59 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Default Cat (Derived class) constructor called" << std::endl;
}

Cat::Cat( const Cat& origine ) : Animal(origine), _brain(new Brain(*origine._brain))
{
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat&	Cat::operator=( const Cat& origine )
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	if (this != &origine)
	{
		*_brain = *origine._brain;
		Animal::operator=(origine);
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor Cat (Derived class) called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "mmeoww, mmeoww" << std::endl;
}
