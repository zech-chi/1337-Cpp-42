/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 22:40:46 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/02 21:22:20 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice constructor called!" << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria(other)
{
	//std::cout << "Ice copy constructor called!" << std::endl;
}

Ice&	Ice::operator=( const Ice& other )
{
	//std::cout << "Ice copy assignment operator called!" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called!" << std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

