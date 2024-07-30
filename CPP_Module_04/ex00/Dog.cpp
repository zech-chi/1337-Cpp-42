/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:34:31 by zech-chi          #+#    #+#             */
/*   Updated: 2024/07/30 17:17:11 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <cstdlib>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog (Derived class) constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog (Derived class) called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "hhoww, hhoww" << std::endl;
}
