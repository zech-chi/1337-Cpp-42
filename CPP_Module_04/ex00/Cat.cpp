/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/03 14:28:34 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Default Cat (Derived class) constructor called" << std::endl;
}

Cat::Cat( const Cat& origine ) : Animal(origine)
{
	std::cout << "Cat copy constructor called!" << std::endl;
}

Cat&	Cat::operator=( const Cat& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
	std::cout << "Cat copy assignment operator called!" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat (Derived class) called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "mmeoww, mmeoww" << std::endl;
}
