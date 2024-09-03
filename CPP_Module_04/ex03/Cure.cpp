/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:33:11 by zech-chi          #+#    #+#             */
/*   Updated: 2024/09/02 20:57:11 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure constructor called!" << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria(other)
{
	//std::cout << "Cure copy constructor called!" << std::endl;
}

Cure&	Cure::operator=( const Cure& other )
{
	//std::cout << "Cure copy assignment operator called!" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return (*this);
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called!" << std::endl;
}

AMateria*	Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

