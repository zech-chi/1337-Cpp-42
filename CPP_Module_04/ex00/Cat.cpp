/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:27 by zech-chi          #+#    #+#             */
/*   Updated: 2024/08/02 19:09:16 by zech-chi         ###   ########.fr       */
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
	
}

Cat&	Cat::operator=( const Cat& origine )
{
	if (this != &origine)
		Animal::operator=(origine);
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
